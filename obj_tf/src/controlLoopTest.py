#! /usr/bin/env python

import rospy
import time
import tf
from SimpleNamespace import SimpleNamespace

# imports for Moveit
import sys
import copy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
from math import pi, sqrt
from std_msgs.msg import String
from moveit_commander.conversions import pose_to_list
import operator

from moveit_python_tools.get_ik import GetIK
from moveit_python_tools.get_fk import GetFK
from geometry_msgs.msg import PoseStamped
from sensor_msgs.msg import JointState

from niryo_one_python_api.niryo_one_api import *
import math

# I didn't make a class, so I'm passing some moveit components via this variable
global moveitNs
moveitNs = SimpleNamespace()
global start_pose

global currentState


def run():
    moveit_commander.roscpp_initialize(sys.argv)
    rospy.init_node('move_arm_node')
    rate = rospy.Rate(0.5)

    robot = moveit_commander.RobotCommander()
    scene = moveit_commander.PlanningSceneInterface()

    group_name = "arm"
    group = moveit_commander.MoveGroupCommander(group_name)


    # We can get the name of the reference frame for this robot:
    planning_frame = group.get_planning_frame()
    print("============ Reference frame: %s" % planning_frame)
    
    # We can also print the name of the end-effector link for this group:
    eef_link = group.get_end_effector_link()
    print("============ End effector: %s" % eef_link)
    
    # We can get a list of all the groups in the robot:
    group_names = robot.get_group_names()
    print("============ Robot Groups:", robot.get_group_names())
    
    # Sometimes for debugging it is useful to print the entire state of the
    # robot:
    print( "============ Printing robot state")
    print( robot.get_current_state())
    print("")
    
    # store some of these variables so that states can access it
    global moveitNs    
    moveitNs.group = group
    
    # listen for objects now
    listener = tf.TransformListener() 
    moveitNs.listener = listener

    start_pose = geometry_msgs.msg.Pose()
    q = tf.transformations.quaternion_about_axis(0.5*pi, (0, 1, 0))
    start_pose.orientation.x = q[0]
    start_pose.orientation.y = q[1]
    start_pose.orientation.z = q[2]
    start_pose.orientation.w = q[3]

    gik = GetIK("arm")
    ps = PoseStamped()
    ps.header.frame_id = 'base_link'
    ps.pose.position.x = 0.2
    ps.pose.position.y = -0.01
    ps.pose.position.z = 0.3
    ps.pose.orientation = start_pose.orientation
    respIK = gik.get_ik(ps)
    print("Printing result of GetIK")
    print(respIK)

    print("Extracting positions")
    positions = respIK.solution.joint_state.position
    print(positions)


    gfk = GetFK("tool_link","base_link")
    resp = gfk.get_current_fk()
    from moveit_python_tools.friendly_error_codes import moveit_error_dict
    rospy.loginfo(moveit_error_dict[resp.error_code.val])
    rospy.loginfo("Printing resp")
    if resp:
        rospy.loginfo(resp)
    else:
        rospy.loginfo("empty response")
    print("End of GetFK")

    if not positions:
        print("Invalid FK")
    else:
        joint_goal = group.get_current_joint_values()
        print("current joint vals")
        print(joint_goal)
        joint_goal[0] = positions[0]
        joint_goal[1] = positions[1]
        joint_goal[2] = positions[2]
        joint_goal[3] = positions[3]
        joint_goal[4] = positions[4]
        joint_goal[5] = positions[5]

        # joint_goal[0] -= 0.005
        # joint_goal[1] += 0.005
        # joint_goal[2] += 0.005
        # joint_goal[3] -= 0.005
        # joint_goal[4] -= 0.005
        # joint_goal[5] -= 0.005

        print("target joint vals")
        print(joint_goal)


        print "============ Press `Enter` to call niryo move_pose"
        raw_input()
        n = NiryoOne()

        n.calibrate_auto()
        print "Go to observation position"
        n.move_pose(0.2, 0, 0.2, 0, math.radians(90), 0)
        jointvalues = group.get_current_joint_values()
        print("observation pose")
        print(jointvalues)
        

        print "============ Press `Enter` to call moveit go()"
        raw_input()
        startTime = rospy.get_time()        
        group.go(joint_goal, wait=True)
        simTime = rospy.get_time() - startTime
        print("Planning time: %f" % simTime)
        moveitjointvalues = group.get_current_joint_values()
        print("observation pose")
        print(moveitjointvalues)

        print "============ Press `Enter` to call ExecuteTrajectoryAction"
        # joint_goal[0] = joint_goal[0]-0.1

        raw_input()
        import actionlib
        from moveit_msgs.msg import ExecuteTrajectoryAction 
        from moveit_msgs.msg import ExecuteTrajectoryGoal
        from moveit_msgs.msg import ExecuteTrajectoryResult

        client = actionlib.SimpleActionClient('/execute_trajectory', ExecuteTrajectoryAction)
        client.wait_for_server()

        goal = ExecuteTrajectoryGoal()

        from moveit_msgs.msg import RobotTrajectory
        from trajectory_msgs.msg import JointTrajectory
        from trajectory_msgs.msg import JointTrajectoryPoint
        from niryo_one_msgs.srv import generatetraj,generatetrajResponse
        rt = RobotTrajectory()
        jt = JointTrajectory()
        jt.header.frame_id = '/world'
        jt.header.stamp = rospy.Time.now() + rospy.Duration(0.5)


        jtp = JointTrajectoryPoint()
        jtp.positions = copy.copy(joint_goal)
        jtp.positions[0] = copy.copy(jtp.positions[0]) -0.1
        
        #call matlab trajectory generation service
        rospy.wait_for_service('generatetraj')
        generate_traj = rospy.ServiceProxy('generatetraj',generatetraj)
        trajectory = generate_traj(moveitjointvalues,jtp.positions)
        print("first joint trajectory")
        print(trajectory)

        #adding trajectory points obtained from matlab ros service to JointTrajectory
        for i in range(6):
            jtp = JointTrajectoryPoint()
            jtp.positions = trajectory.positions[(i*6):(i+1)*6]
            jtp.velocities = trajectory.velocities[(i*6):(i+1)*6]
            jtp.accelerations = trajectory.acceleration[(i*6):(i+1)*6]
            jtp.time_from_start.nsecs = (i)*250000000
            jt.points.append(jtp)


        # jt.points.append(jtp)
        print("Joint trajectory")
        print(jt)

        jt.joint_names = respIK.solution.joint_state.name
        rt.joint_trajectory = jt
        goal.trajectory = rt

        print(" - ")
        print("ExectureTrajGoal msg")
        print(goal)

        def feedback_callback(feedback):
            print('Received some feedback from executeTraj')
        
        client.send_goal(goal, feedback_cb=feedback_callback)

        client.wait_for_result()

        print('[Result] State: %d'%(client.get_state()))


    import numpy as np
    y1 = np.arange(-0.2,0.0,0.04)
    y2 = y1[::-1]
    yrange = np.concatenate([y1,y2])
         
    for i in yrange:
        print(i)
    

    i = -1 # initial state
    while not rospy.is_shutdown():
        i = i + 1

        #oscillate between a range, uses y1 and y2 from above
        # if i > (yrange.size-1):
        #     i = 0
        # print(yrange[i])

        #oscillate by a fixed amount in the y axis around current position
        if i%2 == 0:
            oscillateY = -0.1
        else:
            oscillateY = 0.1
        currentjointvalues = group.get_current_joint_values()
        print("Current joint values")
        print(currentjointvalues)
        currentPose = group.get_current_pose()


        # get desired pose
        #initial code for this had x = 0.2, y = yrange[i], z = 0.2 . This one fails one time, and then executes
        ps.pose.position.x = currentPose.pose.position.x
        ps.pose.position.y = currentPose.pose.position.y + oscillateY
        ps.pose.position.z = currentPose.pose.position.z
        ps.pose.orientation = currentPose.pose.orientation
        respIK = gik.get_ik(ps)
        print("Printing result of GetIK")
        print(respIK)

        print("Extracting positions")
        positions = respIK.solution.joint_state.position
        print(positions)
        
        # HACK: resolve this list-tuple dilemma. 
        joint_goal[0] = positions[0]
        joint_goal[1] = positions[1]
        joint_goal[2] = positions[2]
        joint_goal[3] = positions[3]
        joint_goal[4] = positions[4]
        joint_goal[5] = positions[5]
        
        #generating trajectory from matlab trajectory generation ros service
        trajectory = generate_traj(currentjointvalues,joint_goal)

        # send that message over
        rt = RobotTrajectory()
        jt = JointTrajectory()
        jt.header.frame_id = '/world'
        jt.header.stamp = rospy.Time.now() + rospy.Duration(0.5)
        jtp = JointTrajectoryPoint()

        #adding trajectory points generated by matlab ros service to JointTrajectory
        for j in range(5):
            jtp = JointTrajectoryPoint()
            jtp.positions = trajectory.positions[(j*6):(j+1)*6]
            jtp.velocities = trajectory.velocities[(j*6):(j+1)*6]
            jtp.accelerations = trajectory.acceleration[(j*6):(j+1)*6]
            jtp.time_from_start.nsecs = (j)*250000000
            jt.points.append(jtp)

        jt.joint_names = respIK.solution.joint_state.name
        
        
        rt.joint_trajectory = jt
        goal.trajectory = rt
        print("joint trajectory")
        print(jt)
        client.send_goal(goal, feedback_cb=feedback_callback)

        client.wait_for_result()

        rate.sleep()


if __name__ == '__main__':
    try:
        run()
    except rospy.ROSInterruptException:
        pass

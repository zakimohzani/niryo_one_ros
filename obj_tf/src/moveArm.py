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

from niryo_one_msgs.srv import generatetraj,generatetrajResponse

# I didn't make a class, so I'm passing some moveit components via this variable
global moveitNs
moveitNs = SimpleNamespace()
global start_pose

global currentState

def state_going_to_pickup():
    global currentState # required for the state machine
    rospy.loginfo('state = state_going_to_pickup')

    # do something
    global moveitNs 
    group = moveitNs.group
    listener = moveitNs.listener    
    
    global start_pose
    start_pose = geometry_msgs.msg.Pose()
    q = tf.transformations.quaternion_about_axis(0.5*pi, (0, 1, 0))
    #print(q)
    start_pose.orientation.x = q[0]
    start_pose.orientation.y = q[1]
    start_pose.orientation.z = q[2]
    start_pose.orientation.w = q[3]
    
    start_pose.position.x = 0.3
    start_pose.position.y = -0.3
    start_pose.position.z = 0.2

    rospy.loginfo("Go to Lookout stance")

    group.set_pose_target(start_pose)
    
    plan = group.go(wait=True)
    # Calling `stop()` ensures that there is no residual movement
    group.stop()
    # It is always good to clear your targets after planning with poses.
    # Note: there is no equivalent function for clear_joint_value_targets()
    group.clear_pose_targets()

    
    # the wait attribute doesn't work with niryo, and we won't have the guarantee
    # that it arrived there so we need a new state
    
    (trans,rot) = listener.lookupTransform('/base_link', '/tool_link', rospy.Time(0))
       
    distance = sqrt( (trans[0] - start_pose.position.x)**2 + \
                    (trans[1] - start_pose.position.y)**2 )

    rospy.loginfo(distance)

    # if event has been created then change state
    if distance > 0.05:
        currentState = 'state_going_to_pickup';
    else:
        currentState = 'state_look_for_new_obj';
    

def state_look_for_new_obj():
    global currentState # required for the state machine
    rospy.loginfo('state = state_look_for_new_obj')

    # do something
    global moveitNs 
    group = moveitNs.group
    listener = moveitNs.listener       
    
    
    rospy.loginfo("Getting list of transforms")

    list_of_tfs = listener.getFrameStrings()
    #print("ALL TFS")
    #print(list_of_tfs)
    
    # from: https://stackoverflow.com/questions/44357731/filter-list-of-strings-starting-with-specific-keyword
    PartialWord = "obj"
    list_of_objs = [word for word in list_of_tfs if word.startswith(PartialWord)]

    #print("ALL OBJS")
    #print(list_of_objs)

    distance_of_objs_from_end_effector = []
    
    lowest_distance_so_far = 100
    obj_name_with_the_lowest_distance = ''
    obj_distance_dict = {}
    for obj_id in list_of_objs:
        try:
            (trans,rot) = listener.lookupTransform('/base_link', obj_id, rospy.Time(0))
        except (tf.ExtrapolationException):
            continue
            
        desired_y_pos = start_pose.position.y - 0.05        
        
        distance = sqrt( (trans[0] - start_pose.position.x)**2 + \
                        (trans[1] - desired_y_pos)**2 )
        obj_distance_dict[obj_id] = distance

    
    obj_name_with_the_lowest_distance = min(obj_distance_dict.iteritems(), key=operator.itemgetter(1))[0]
            
    #print(obj_distance_dict)
    print('Selected obj:')
    print(obj_name_with_the_lowest_distance)
    moveitNs.targetTF = obj_name_with_the_lowest_distance
    
    # if event has been created then change state
    currentState = 'state_picking_up_obj';



from moveit_python_tools.get_ik import GetIK
from moveit_python_tools.get_fk import GetFK
from geometry_msgs.msg import PoseStamped
import actionlib
from moveit_msgs.msg import ExecuteTrajectoryAction 
from moveit_msgs.msg import ExecuteTrajectoryGoal
from moveit_msgs.msg import ExecuteTrajectoryResult
from moveit_msgs.msg import RobotTrajectory
from trajectory_msgs.msg import JointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint

def state_picking_up_obj():
    global currentState # required for the state machine
    rospy.loginfo('state = state_picking_up_obj')

    # do something
    group = moveitNs.group
    listener = moveitNs.listener    
  

    def feedback_callback(feedback):
        print('Received some feedback from executeTraj')
    client = actionlib.SimpleActionClient('/execute_trajectory', ExecuteTrajectoryAction)
    client.wait_for_server()

    rate = rospy.Rate(10) # doesn't work
    
    startTime = rospy.get_time()    
    
    group.set_planning_time(0.1) # seconds
    
    while not rospy.is_shutdown():

        try:
            (trans,rot) = listener.lookupTransform('/base_link', moveitNs.targetTF, rospy.Time(0))
        except (tf.LookupException, tf.ConnectivityException, tf.ExtrapolationException):
#            group.set_pose_target(start_pose)
#            
#            plan = group.go(wait=True)
#            # Calling `stop()` ensures that there is no residual movement
#            group.stop()
#            # It is always good to clear your targets after planning with poses.
#            # Note: there is no equivalent function for clear_joint_value_targets()
#            group.clear_pose_targets()
            continue

        # robot's frame is also world so we don't need any transform
        print("Y: %f" % trans[1])        
        
        
        if trans[1] > 0.1:
            rospy.loginfo("assume object has been picked up")           
            break
        
        
        target_pose = geometry_msgs.msg.Pose()
        q = tf.transformations.quaternion_about_axis(0.5*pi, (0, 1, 0))
        #print(q)
        target_pose.orientation.x = q[0]
        target_pose.orientation.y = q[1]
        target_pose.orientation.z = q[2]
        target_pose.orientation.w = q[3]                
        target_pose.position.x = trans[0]
        target_pose.position.y = trans[1]
        target_pose.position.z = 0.2


        # HACK: copied in code forom controlLoopTest.py
        gik = GetIK("arm")
        ps = PoseStamped()
        ps.header.frame_id = 'base_link'
        ps.pose.position.x = trans[0]
        ps.pose.position.y = trans[1]
        ps.pose.position.z = 0.2
        ps.pose.orientation = target_pose.orientation
        respIK = gik.get_ik(ps)
        print("Printing result of GetIK")
        print(respIK)
        
        print("Extracting positions")
        positions = respIK.solution.joint_state.position
        print(positions)        

        if not positions:
            print("Invalid FK")
<<<<<<< HEAD
            continue

        joint_currently = group.get_current_joint_values()
        joint_goal = group.get_current_joint_values()
=======
            continue   

        joint_goal = group.get_current_joint_values()
        print("current joint vals")
        print(joint_goal)
>>>>>>> 979d5a821e58ee24e981d4f620f9222c64e72250

        # HACK: resolve this list-tuple dilemma.
        joint_goal[0] = positions[0]
        joint_goal[1] = positions[1]
        joint_goal[2] = positions[2]
        joint_goal[3] = positions[3]
        joint_goal[4] = positions[4]
        joint_goal[5] = positions[5]
<<<<<<< HEAD
        
        print("current joint vals")
        print(joint_currently)
        
        print("target joint vals")
        print(joint_goal)        

        #trying to catch the object by adding extra movement in the desired joint
        joint_goal[0] = joint_goal[0]+ 0
=======
        print("target joint vals")
        print(joint_goal)        


>>>>>>> 979d5a821e58ee24e981d4f620f9222c64e72250

        goal = ExecuteTrajectoryGoal()


        # send that message over
        rt = RobotTrajectory()
        jt = JointTrajectory()
        jt.header.frame_id = '/world'
<<<<<<< HEAD
        jt.header.stamp.secs = 0
        jt.header.stamp.nsecs = 0

        rospy.wait_for_service('generatetraj')
        generate_traj = rospy.ServiceProxy('generatetraj',generatetraj)
        trajectory = generate_traj(joint_currently,joint_goal)

        
        for i in range(5):
            jtp = JointTrajectoryPoint()
            jtp.positions = trajectory.positions[(i*6):(i+1)*6]
            jtp.velocities = trajectory.velocities[(i*6):(i+1)*6]
            jtp.accelerations = trajectory.acceleration[(i*6):(i+1)*6]
            jtp.time_from_start.nsecs = (i)*250*1000*1000
            jt.points.append(jtp)
        
        
        jt.joint_names = respIK.solution.joint_state.name
        print("Joint trajectory")
        print(jt)        

=======
        jt.header.stamp = rospy.Time.now() + rospy.Duration(0.5)
        jtp = JointTrajectoryPoint()
        jtp.positions = copy.copy(joint_goal)
        jt.points.append(jtp)

        jtp = JointTrajectoryPoint()
        jtp.positions = copy.copy(joint_goal)
        jtp.positions[0] = copy.copy(jtp.positions[0]) + 0.02
        jtp.time_from_start.nsecs = 10000000
        jt.points.append(jtp)
        jt.joint_names = respIK.solution.joint_state.name
>>>>>>> 979d5a821e58ee24e981d4f620f9222c64e72250
        rt.joint_trajectory = jt
        goal.trajectory = rt

        client.send_goal(goal, feedback_cb=feedback_callback)

        client.wait_for_result()
        #print("Stopping arm")
        # Calling `stop()` ensures that there is no residual movement
        #group.stop()
        # It is always good to clear your targets after planning with poses.
        # Note: there is no equivalent function for clear_joint_value_targets()
        #group.clear_pose_targets()

        # rate.sleep() # doesn't work 
        time.sleep(0.01)
        
        
    # if event has been created then change state
    currentState = 'state_picked_up_obj_and_dumping_it';

def state_picked_up_obj_and_dumping_it():
    global currentState # required for the state machine
    rospy.loginfo('state = state_picked_up_obj_and_dumping_it')

    # do something
    group = moveitNs.group
    
    start_pose = geometry_msgs.msg.Pose()
    q = tf.transformations.quaternion_about_axis(0.5*pi, (0, 1, 0))
    #print(q)
    start_pose.orientation.x = q[0]
    start_pose.orientation.y = q[1]
    start_pose.orientation.z = q[2]
    start_pose.orientation.w = q[3]
    
    start_pose.position.x = 0
    start_pose.position.y = 0.2
    start_pose.position.z = 0.2

    rospy.loginfo("Going to drop-off location")


    group.set_pose_target(start_pose)
    
    plan = group.go(wait=True)
    # Calling `stop()` ensures that there is no residual movement
    group.stop()
    # It is always good to clear your targets after planning with poses.
    # Note: there is no equivalent function for clear_joint_value_targets()
    group.clear_pose_targets()
    

    time.sleep(0.01)


    start_pose.position.x = -0.10
    group.set_pose_target(start_pose)
    
    plan = group.go(wait=True)
    # Calling `stop()` ensures that there is no residual movement
    group.stop()
    # It is always good to clear your targets after planning with poses.
    # Note: there is no equivalent function for clear_joint_value_targets()
    group.clear_pose_targets()

    # if event has been created then change state
    currentState = 'state_going_to_pickup';



def run():
    moveit_commander.roscpp_initialize(sys.argv)
    rospy.init_node('move_arm_node')
    robot = moveit_commander.RobotCommander()
    scene = moveit_commander.PlanningSceneInterface()

    group_name = "arm"
    group = moveit_commander.MoveGroupCommander(group_name)


    # We can get the name of the reference frame for this robot:
    planning_frame = group.get_planning_frame()
    print "============ Reference frame: %s" % planning_frame
    
    # We can also print the name of the end-effector link for this group:
    eef_link = group.get_end_effector_link()
    print "============ End effector: %s" % eef_link
    
    # We can get a list of all the groups in the robot:
    group_names = robot.get_group_names()
    print "============ Robot Groups:", robot.get_group_names()
    
    # Sometimes for debugging it is useful to print the entire state of the
    # robot:
    print "============ Printing robot state"
    print robot.get_current_state()
    print ""  
    
    # store some of these variables so that states can access it
    global moveitNs    
    moveitNs.group = group
    
    # listen for objects now
    listener = tf.TransformListener() 
    moveitNs.listener = listener

    global currentState
    currentState = 'state_look_for_new_obj'
    currentState = 'state_picked_up_obj_and_dumping_it'

    while not rospy.is_shutdown():
        # Implicit state machine. Based on code from: 
        # https://stackoverflow.com/questions/7936572/python-call-a-function-from-string-name
        possibles = globals().copy()
        possibles.update(locals())
        state = possibles.get(currentState)
        if not state:
             raise NotImplementedError("State %s not implemented" % state_name)
        state()
        # End of state machine code    
        
        time.sleep(1)


if __name__ == '__main__':
    try:
        run()
    except rospy.ROSInterruptException:
        pass

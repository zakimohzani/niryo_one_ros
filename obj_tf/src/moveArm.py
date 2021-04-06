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
from math import pi
from std_msgs.msg import String
from moveit_commander.conversions import pose_to_list


global moveitNs
moveitNs = SimpleNamespace()

global currentState

def state_look_for_new_obj():
    global currentState # required for the state machine
    rospy.loginfo('state = state_look_for_new_obj')

    # do something
    group = moveitNs.group
    
    start_pose = geometry_msgs.msg.Pose()
    start_pose.orientation.w = 1.0
    start_pose.position.x = 0.3
    start_pose.position.y = -0.3
    start_pose.position.z = 0.2

    rospy.loginfo("Let's go")


    group.set_pose_target(start_pose)
    
    plan = group.go(wait=True)
    # Calling `stop()` ensures that there is no residual movement
    group.stop()
    # It is always good to clear your targets after planning with poses.
    # Note: there is no equivalent function for clear_joint_value_targets()
    group.clear_pose_targets()

    # if event has been created then change state
    currentState = 'state_picking_up_obj';

def state_picking_up_obj():
    global currentState # required for the state machine
    rospy.loginfo('state = state_picking_up_obj')

    # do something
    group = moveitNs.group
    
    # listen for objects now
    listener = tf.TransformListener()    
    
    rate = rospy.Rate(10)
    startTime = rospy.get_time()    
    
    group.set_planning_time(0.1) # seconds
    
    while not rospy.is_shutdown():

        try:
            (trans,rot) = listener.lookupTransform('/world', '/obj0', rospy.Time(0))
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
        
        if trans[1] > 0.1:
            rospy.loginfo("assume object has been picked up")           
            break
        
        
        target_pose = geometry_msgs.msg.Pose()
        target_pose.orientation.w = 1.0
        target_pose.position.x = trans[0]
        target_pose.position.y = trans[1]
        target_pose.position.z = 0.2
    
        group.set_pose_target(target_pose)
        
        
        # BUG: Niryo driver's doesn't actually wait for the movement to complete
        # before sending a 'complete' signal to Moveit
        # Hence, the following sentence is not a blocking statement
        # setting the wait-timer too low would mean the robot will never move
        # because plan after plan after plan are continously being streamed to 
        # it
        plan = group.go(wait=True)

        """
        plan = group.plan()
        
        print("Plan output:")
        #print(plan)        
        print(len(plan.joint_trajectory.points))
        
        group.execute(plan, wait=True)
        """
        

        #print("Stopping arm")
        # Calling `stop()` ensures that there is no residual movement
        #group.stop()
        # It is always good to clear your targets after planning with poses.
        # Note: there is no equivalent function for clear_joint_value_targets()
        #group.clear_pose_targets()

        simTime = rospy.get_time() - startTime
        t = simTime
        print("Sim time: %f", t)
        
        rate.sleep()
        
        
    # if event has been created then change state
    currentState = 'state_picked_up_obj_and_dumping_it';

def state_picked_up_obj_and_dumping_it():
    global currentState # required for the state machine
    rospy.loginfo('state = state_picked_up_obj_and_dumping_it')

    # do something
    
    # if event has been created then change state
    currentState = 'state_look_for_new_obj';



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

    global currentState
    currentState = 'state_look_for_new_obj'

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
        
        time.sleep(5)


if __name__ == '__main__':
    try:
        run()
    except rospy.ROSInterruptException:
        pass
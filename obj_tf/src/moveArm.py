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

def state_picking_up_obj():
    global currentState # required for the state machine
    rospy.loginfo('state = state_picking_up_obj')

    # do something
    group = moveitNs.group
    listener = moveitNs.listener    
  
    
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


    
        group.set_pose_target(target_pose)
        
        
        # BUG: Niryo driver's doesn't actually wait for the movement to complete
        # before sending a 'complete' signal to Moveit
        # Hence, the following sentence is not a blocking statement
        # setting the wait-timer too low would mean the robot will never move
        # because plan after plan after plan are continously being streamed to 
        # it
        
        """
        startTime = rospy.get_time()
        plan = group.go(wait=True)
        simTime = rospy.get_time() - startTime
        print("Planning & execution time: %f" % simTime)  
        """

        startTime = rospy.get_time()        
        plan = group.plan()
        simTime = rospy.get_time() - startTime
        print("Planning time: %f" % simTime)
        
        #print("Plan output:")
        #print(plan)        
        #print(len(plan.joint_trajectory.points))
        
        startTime = rospy.get_time() 
        group.execute(plan, wait=True)
        simTime = rospy.get_time() - startTime
        print("Execution time: %f" % simTime)
     
        

        #print("Stopping arm")
        # Calling `stop()` ensures that there is no residual movement
        #group.stop()
        # It is always good to clear your targets after planning with poses.
        # Note: there is no equivalent function for clear_joint_value_targets()
        #group.clear_pose_targets()

        # rate.sleep() # doesn't work 
        time.sleep(0.1)
        
        
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
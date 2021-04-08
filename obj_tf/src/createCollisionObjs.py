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



def roboArmFollow(name):
    pass

def run():
    moveit_commander.roscpp_initialize(sys.argv)
    rospy.init_node('collision_node')
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
    
    rate = rospy.Rate(1)
    startTime = rospy.get_time()    

    while not rospy.is_shutdown():
        box_pose = geometry_msgs.msg.PoseStamped()
        box_pose.header.frame_id = "world"

        # the 1* is for alignment, I can't measure easily with x and y,
        # its always measures the orthognal part
        box_pose.pose.position.x = 1*0.1-0.005  
        box_pose.pose.position.y = 1*0.165
        box_pose.pose.position.z = 0.445/2.0
        box_pose.pose.orientation.w = 1.0
        box_name = "box"
        scene.add_box(box_name, box_pose, size=(0.04, 0.04, 0.445))
        
        
        # beam 2
        beam2_pose = geometry_msgs.msg.PoseStamped()
        beam2_pose.header.frame_id = "world"
        beam2_pose.pose.position.x = box_pose.pose.position.x + 0.04 + 0.6/2  
        beam2_pose.pose.position.y = box_pose.pose.position.y
        beam2_pose.pose.position.z = 0.445-0.02
        beam2_pose.pose.orientation.w = 1.0
        beam2_name = "beam2"
        scene.add_box(beam2_name, beam2_pose, size=(0.6, 0.04, 0.04))    
    
        # camera
        camera_pose = geometry_msgs.msg.PoseStamped()
        camera_pose.header.frame_id = "world"
        camera_pose.pose.position.x = beam2_pose.pose.position.x  
        camera_pose.pose.position.y = beam2_pose.pose.position.y - 0.12/2
        camera_pose.pose.position.z = beam2_pose.pose.position.z
        camera_pose.pose.orientation.w = 1.0
        camera_name = "camera"
        scene.add_box(camera_name, camera_pose, size=(0.12, 0.12, 0.04))  

#        box3_pose = geometry_msgs.msg.PoseStamped()
#        box3_pose.header.frame_id = "world"
#        box3_pose.pose.position.x = 0.2
#        box3_pose.pose.position.y = 0
#        box3_pose.pose.position.z = 0.2
#        box3_pose.pose.orientation.w = 1.0
#        scene.add_box("box3", box3_pose, size=(0.1, 0.1, 0.1))
        
        rate.sleep()

if __name__ == '__main__':
    try:
        run()
    except rospy.ROSInterruptException:
        pass

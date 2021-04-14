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


# I didn't make a class, so I'm passing some moveit components via this variable
global moveitNs
moveitNs = SimpleNamespace()
global start_pose

global currentState


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

    gik = GetIK("arm")
    ps = PoseStamped()
    ps.header.frame_id = 'tool_link'
    ps.pose.position.x = 0.1
    ps.pose.orientation.w = 1.0
    print gik.get_ik(ps)

    gfk = GetFK("tool_link","base_link")
    resp = gfk.get_current_fk()
    from moveit_python_tools.friendly_error_codes import moveit_error_dict
    rospy.loginfo(moveit_error_dict[resp.error_code.val])
    rospy.loginfo(resp)

    while not rospy.is_shutdown():


        time.sleep(1)


if __name__ == '__main__':
    try:
        run()
    except rospy.ROSInterruptException:
        pass
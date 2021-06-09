#!/usr/bin/env python
import rospy
from std_msgs.msg import Float32

def callback(data):
	rospy.loginfo(data)

rospy.init_node('beltspeedlistener')
rospy.Subscriber("beltspeed",Float32,callback)
rospy.spin()

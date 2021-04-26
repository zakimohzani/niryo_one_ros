#!/usr/bin/env python

import rospy
from niryo_one_msgs.srv import generatetraj,generatetrajResponse

def joint_trajectory(req):
	positions = [0,1,0,1,0,1]
	velocities = [1,0,1,0,1,0]
	acceleration = [1,1,1,1,1,1]
	return generatetrajResponse(positions,velocities,acceleration)

rospy.init_node("generatetrajsever")
s = rospy.Service("generatetraj",generatetraj,joint_trajectory)
print("Ready to generate trajs")
rospy.spin()



#!/usr/bin/env python

# To use the API, copy these 4 lines on each Python file you create
from niryo_one_python_api.niryo_one_api import *
import math
import rospy
import time

rospy.init_node('niryo_one_example_python_api')

print "--- Start"

n = NiryoOne()

# Calibrate robot first
n.calibrate_auto()
print "Calibration finished !"
 

# n.activate_learning_mode(True)
n.change_tool(TOOL_NONE)


# n.activate_learning_mode(False)
print "Go to observation position"
n.move_pose(0.2, 0.1, 0.2, 0, math.radians(90), 0)



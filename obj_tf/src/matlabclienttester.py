#!/usr/bin/env python
import timeit

setup_code = """
import rospy 
from std_srvs.srv import Empty
"""		

statement = """
rospy.wait_for_service('empty')
for i in range(10):
	emptyservice = rospy.ServiceProxy('empty',Empty)	
	resp = emptyservice()
print("10 empty service calls have been made")
"""
print("execution time is :",{timeit.timeit(setup = setup_code, stmt = statement,number = 1)})	

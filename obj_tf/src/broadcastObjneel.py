#! /usr/bin/env python

import rospy
import time
from SimpleNamespace import SimpleNamespace
from obj_tf.msg import ObjRecognised

class ObjRecogniser():
    def __init__(s):
        s.publisher = rospy.Publisher('/objDetected', ObjRecognised, queue_size=1)
        
        # for simulateObjRecognitionCallback        
        s.flip = 1
    
    #def simulateObjRecognition(s):
        #rospy.Timer(rospy.Duration(5), s.simulateObjRecognitionCallback, oneshot=False)
    
    def simulateObjRecognitionCallback(s,x,y):
        now = rospy.get_rostime()
        #rospy.loginfo("Current time %i %i", now.secs, now.nsecs)
        detectedTime = now
        debug = 0
        if (debug):
            print("Obj Found - Send mesg")
            time2 = rospy.Time.now()
            rospy.loginfo("Current time %i %i", time2.secs, time2.nsecs)
            deltaT = time2 - detectedTime
            print("microseconds taken to print previous line %i s  %i usec", deltaT.secs, deltaT.nsecs/1000)
        
        msg = ObjRecognised()
        msg.detectedTime = detectedTime
        
        
        msg.x = x
        msg.y = y
        msg.z = 0.2
        
        s.publisher.publish(msg)
        
def run():

    objRecogniser = ObjRecogniser()
    objRecogniser.simulateObjRecognitionCallback()    

    # wait a bit to initialise subscriber
    rospy.sleep(1)
    
    # start program to introduce items onto the belt
    #rospy.Timer(rospy.Duration(5), addObjCallback)
    
    while not rospy.is_shutdown():    
        
        rate.sleep()
if __name__ == '__main__':
    rospy.init_node('obj_tf_broadcaster')
    try:
        run()
    except rospy.ROSInterruptException:
        pass

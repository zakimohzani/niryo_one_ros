#! /usr/bin/env python

import rospy
import time
import tf
from SimpleNamespace import SimpleNamespace
from obj_tf.msg import ObjRecognised

objTemplate = SimpleNamespace()
objTemplate.name = ''
objTemplate.x = 0 # pos relative to conveyor belt frame
objTemplate.y = 0 # pos relative to conveyor belt frame
objTemplate.z = 0
objTemplate.height = 0

class ObjRecogniser():
    def __init__(self):
        self.publisher = rospy.Publisher('/objDetected', ObjRecognised, queue_size=1)
    
    def emulateConveyorBelt(s):
        rospy.Timer(rospy.Duration(5), s.emulateConveyorBeltCallback, oneshot=False)
    
    def emulateConveyorBeltCallback(s, event):
        now = rospy.get_rostime()
        rospy.loginfo("Current time %i %i", now.secs, now.nsecs)
        detectedTime = now
        print("Obj Found - Send mesg")
        time2 = rospy.Time.now()
        rospy.loginfo("Current time %i %i", time2.secs, time2.nsecs)
        deltaT = time2 - detectedTime
        print("microseconds taken to print previous line %i s  %i usec", deltaT.secs, deltaT.nsecs/1000)
        
        msg = ObjRecognised()
        msg.detectedTime = detectedTime
        msg.x = 1.1
        msg.y = 2.2
        msg.z = 3.3
        
        s.publisher.publish(msg)
        

    def addObjCallback(event):
        print 'Timer called at ' + str(event.current_real)
        
        # what is the distance between conveyor belt and neels cam
    #     listener = tf.TransformListener()
    #    try:
    #        (trans,rot) = listener.lookupTransform('/world', '/neels_cam', rospy.Time(0))
    #    except (tf.LookupException, tf.ConnectivityException, tf.ExtrapolationException):
    #        continue
    #    (trans,rot) = listener.lookupTransform('/world', '/neels_cam', rospy.Time(0))
        
        
        newObj.y = trans[1]
    
    
    
    
    

def broadcastConveyorTf(y):
    br = tf.TransformBroadcaster()
    pos = SimpleNamespace()
    orient = SimpleNamespace()
    pos.x=0.3
    #pos.y=1
    pos.y = y
    pos.z=0
    orient.x = 0
    orient.y = 0
    orient.z = 0
    orient.w = 1
    br.sendTransform((pos.x,pos.y,pos.z),
                     (orient.x, orient.y, orient.z, orient.w),
                     rospy.Time.now(),
                     "/conveyor_belt",
                     "/world")

def broadcastObjectTf(name, x, y, z=0):
    br = tf.TransformBroadcaster()
    pos = SimpleNamespace()
    orient = SimpleNamespace()
    pos.x= x
    #pos.y=1
    pos.y = y
    pos.z=z
    orient.x = 0
    orient.y = 0
    orient.z = 0
    orient.w = 1
    br.sendTransform((pos.x,pos.y,pos.z),
                     (orient.x, orient.y, orient.z, orient.w),
                     rospy.Time.now(),
                     "/" + name,
                     "/conveyor_belt")

def roboArmFollow(name):
    pass

def run():

    objRecogniser = ObjRecogniser()
    objRecogniser.emulateConveyorBelt()    
    
    rospy.loginfo("Let's go")

    rate = rospy.Rate(1)

    conveyorSpeed = 0.01 # m / sec    
    
    startTime = rospy.get_time()
    
    # start program to introduce items onto the belt
    #rospy.Timer(rospy.Duration(5), addObjCallback)
    
    while not rospy.is_shutdown():

        simTime = rospy.get_time() - startTime
        t = simTime
        print("Broadcasting %f", t)
        positiony = conveyorSpeed * t
        broadcastConveyorTf(positiony)
        # calc form Camera's frame where is the object's frame and input it 
        # below
        # tf echo new_obj /camera
        # store this data somewhere
        broadcastObjectTf('obj1', 0.05, -0.5)
        broadcastObjectTf('obj2', -0.05, -0.75)
        
        # also add it to moveit's planning scene
        #box_pose = geometry_msgs.msg.PoseStamped()
        #box_pose.header.frame_id = "panda_leftfinger"
        #box_pose.pose.orientation.w = 1.0
        #box_name = "box"
        #scene.add_box(box_name, box_pose, size=(0.1, 0.1, 0.1))      
        
        roboArmFollow('obj1')               
        
        rate.sleep()

if __name__ == '__main__':
    rospy.init_node('obj_tf_broadcaster')
    try:
        run()
    except rospy.ROSInterruptException:
        pass
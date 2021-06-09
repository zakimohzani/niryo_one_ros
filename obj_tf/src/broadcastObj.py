#! /usr/bin/env python

import rospy
import time
import tf
from SimpleNamespace import SimpleNamespace
from obj_tf.msg import ObjRecognised
from std_msgs.msg import Float32

class ObjRecogniser():
    def __init__(s):
        s.publisher = rospy.Publisher('/objDetected', ObjRecognised, queue_size=1)
        
        # for simulateObjRecognitionCallback        
        s.flip = 1
    
    def simulateObjRecognition(s):
        rospy.Timer(rospy.Duration(5), s.simulateObjRecognitionCallback, oneshot=False)
    
    def simulateObjRecognitionCallback(s, event):
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
        
        if s.flip == 1:
            s.flip = -1
        else:
            s.flip = 1
        
        msg.x = s.flip*0.1
        msg.y = 0
        msg.z = 0.2
        
        s.publisher.publish(msg)
        

class ObjOnConveyorBeltListMaintainer:
    # maintains this list and also assigns a readable TF name
    # parent_frame: /conveyor_belt
    # list format:
    #   name --> msg
    def __init__(s):
        s.subscriber = rospy.Subscriber('/objDetected', ObjRecognised, s.subscriberCallback)
        s.list = []
        s.number = 0
        s.listener = tf.TransformListener()
        
    def subscriberCallback(s, msg):
        print("SUB:------------")        
        print("SUB: received it")
        print(msg)
        print("SUB:------------")
        
        (trans,rot) = s.listener.lookupTransform('/conveyor_belt', '/neels_cam', rospy.Time(0))        
        
        mapping = { "name": "obj" + str(s.number), \
                    "detectedTime" : msg.detectedTime, \
                    "x": trans[0] + msg.x, \
                    "y": trans[1] + msg.y \
                    }        
        s.number = s.number + 1
        s.list.append(mapping)
    
    def getList(s):
        return s.list
    
    def removeObjFromList(s, msg):
        print("removeObjFromList is undefined")
    
class ObjTfBroadcaster:
    def __init__(s, objOnConveyorBeltListMaintainer):
        s.objOnConveyorBeltListMaintainer = objOnConveyorBeltListMaintainer
        s.broadcaster = tf.TransformBroadcaster()

        broadcastFrequency = 50.0
        rospy.Timer(rospy.Duration(1.0/broadcastFrequency), s.broadcastCallback, oneshot=False)        
    
    def broadcastCallback(s, event):
        list = s.objOnConveyorBeltListMaintainer.getList()
        for obj in list:
            #print(obj["name"])
            name = obj["name"]
            x = obj["x"]
            y = obj["y"]
            s.broadcastObjectTf(name, x, y, z=0)

    def broadcastObjectTf(s, name, x, y, z=0):
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
        s.broadcaster.sendTransform((pos.x,pos.y,pos.z),
                         (orient.x, orient.y, orient.z, orient.w),
                         rospy.Time.now(),
                         "/" + name,
                         "/conveyor_belt")

class ConveyorBelt:
    # broadcast tf
    def __init__(s):
        s.broadcaster = tf.TransformBroadcaster()
        s.currentYPos = 0
        s.speed = 0
        s.startTime = rospy.get_time()

        broadcastFrequency = 50.0
        rospy.Timer(rospy.Duration(1.0/broadcastFrequency), s.broadcastCallback, oneshot=False)                

    def broadcastCallback(s, event):
        # update position       
        t = rospy.get_time() - s.startTime
        print("Broadcasting %f", t)
        s.currentYPos = s.speed * t
        
        # call legacy function, can't be bothered to refactor this
        s.broadcastConveyorTf(s.currentYPos)

    def simulateMovement(s):
        s.startTime = rospy.get_time()
        s.subscriber = rospy.Subscriber("/beltspeed",Float32,s.callback)

    def callback(s,data):
	s.speed = data.data
        
        
    def broadcastConveyorTf(s, y):
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
        s.broadcaster.sendTransform((pos.x,pos.y,pos.z),
                         (orient.x, orient.y, orient.z, orient.w),
                         rospy.Time.now(),
                         "/conveyor_belt",
                         "/world")



def roboArmFollow(name):
    pass

def run():

while not rospy.is_shutdown():

    #objRecogniser = ObjRecogniser()
    #objRecogniser.simulateObjRecognition()    

    # wait a bit to initialise subscriber
	    rospy.sleep(1)
	    
	    conveyorBelt = ConveyorBelt()
	    conveyorBelt.simulateMovement()    
	    
	    
	    objOnConveyorBeltListMaintainer = ObjOnConveyorBeltListMaintainer()   
	    
	    objTfBroadcaster = ObjTfBroadcaster(objOnConveyorBeltListMaintainer)
	    
	    rospy.loginfo("Let's go")

	    rate = rospy.Rate(1)
	  
	    startTime = rospy.get_time()
    
    # start program to introduce items onto the belt
    #rospy.Timer(rospy.Duration(5), addObjCallback)
    
    

#        simTime = rospy.get_time() - startTime
#        t = simTime
#        print("Broadcasting %f", t)
#        positiony = conveyorSpeed * t
        #broadcastConveyorTf(positiony)
        # calc form Camera's frame where is the object's frame and input it 
        # below
        # tf echo new_obj /camera
        # store this data somewhere
        #broadcastObjectTf('obj1', 0.05, -0.5)
        #broadcastObjectTf('obj2', -0.05, -0.75)
        
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

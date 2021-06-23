#! /usr/bin/env python

import rospy
import time
import tf
from SimpleNamespace import SimpleNamespace
from obj_tf.msg import ObjRecognised
from obj_tf.msg import ObjVisualiser
from std_msgs.msg import Float32
from visualization_msgs.msg import Marker
from geometry_msgs.msg import Quaternion, Pose, Point, Vector3 
from std_msgs.msg import Header, ColorRGBA

objectcounter = 0
pos = 0
class ObjRecogniser():
    def __init__(s):
        s.publisher = rospy.Publisher('/objDetected', ObjRecognised, queue_size=1)
        
        # for simulateObjRecognitionCallback        
        s.flip = 0.5
    
    def simulateObjRecognition(s):
        rospy.Timer(rospy.Duration(1), s.simulateObjRecognitionCallback, oneshot=False)
    
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
        
        if s.flip == 0.5:
            s.flip = -0.5
            msg.plastictype = 0
        else:
            s.flip = 0.5
            msg.plastictype = 1
        
        msg.x = s.flip*0.1
        msg.y = -1
        msg.z = 0.2 
        msg.width = 0
        msg.height = 0
        msg.orientation = 0
        msg.state = 0
        
        s.publisher.publish(msg)

#class defining object on conveyor belt
class WasteItem:
    def __init__(s,x,y,width,height,orientation,ObjectName,plastictype,state):

        s.obj_id = ObjectName
        s.time = rospy.Time.now()
        s.boundingBox = [x,y,width,height,orientation]
        s.plastictype = plastictype 
        s.state = state


class ObjOnConveyorBeltListMaintainer:
    # maintains this list and also assigns a readable TF name
    # parent_frame: /conveyor_belt
    # list format:
    #   name --> msg
    def __init__(s):
        s.subscriber = rospy.Subscriber('/objDetected', ObjRecognised, s.subscriberCallback)
        s.publisher = rospy.Publisher('/objVisualiser', ObjVisualiser, queue_size=1)
        s.list = []
        s.number = 0
        s.listener = tf.TransformListener()
        broadcastFrequency = 1.0
        rospy.Timer(rospy.Duration(1.0/broadcastFrequency), 
                    s.removeObjFromListCallback, oneshot=False) 

    def subscriberCallback(s, msg):
        print("SUB:------------")        
        print("SUB: received it")
        print(msg)
        print("SUB:------------")
        
        (trans,rot) = s.listener.lookupTransform('/conveyor_belt', '/neels_cam', rospy.Time(0))        
        
        # mapping = { "name": "obj" + str(s.number), \
        #             "detectedTime" : msg.detectedTime, \
        #             "x": trans[0] + msg.x, \
        #             "y": trans[1] + msg.y \
        #             }     

        s.wasteItem = WasteItem(trans[0]+msg.x,trans[1]+msg.y,msg.width,msg.height,msg.orientation,"obj"+str(s.number),msg.plastictype,msg.state)
        s.newmsg = ObjVisualiser()
        s.newmsg.name = "/obj"+str(s.number)
        s.newmsg.plastictype = msg.plastictype
        s.publisher.publish(s.newmsg)
        s.number = s.number + 1
        s.list.append(s.wasteItem)
    
    def getList(s):
        return s.list
    
    def removeObjFromListCallback(s, msg):
        y_pos_to_remove_obj = 0.9
        for item in s.list:
            #print(item["name"])
            try:
                (trans,rot) = s.listener.lookupTransform('/base_link', item.obj_id, rospy.Time(0))
            except (tf.LookupException, tf.ExtrapolationException):
                continue
            #print("%s, Y:%f" % (item["name"], trans[1]))
            if trans[1] > y_pos_to_remove_obj:
                s.list.remove(item)
    
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
            name = obj.obj_id
            x = obj.boundingBox[0]
            y = obj.boundingBox[1]
            plastictype = obj.plastictype
            s.broadcastObjectTf(name, x, y, plastictype, z=0)

    def broadcastObjectTf(s, name, x, y, plastictype, z=0):
        global objectcounter 
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
        
        #visualisation marker publisher and marker item
        marker_publisher = rospy.Publisher('visualization_marker', Marker, queue_size=100) 
        
        marker = Marker()
        marker.ns=name
        if plastictype == 0:
            marker.type=Marker.CUBE
        else:
            marker.type = Marker.CYLINDER
        marker.action=Marker.ADD
        marker.id=objectcounter
        marker.lifetime=rospy.Duration()
        marker.pose.position.x = 0
        marker.pose.position.y = 0
        marker.pose.position.z = 0
        marker.pose.orientation.x = 0.0
        marker.pose.orientation.y = 0.0
        marker.pose.orientation.z = 0.0
        marker.pose.orientation.w = 1.0
        marker.scale.x = 0.1
        marker.scale.y = 0.1
        marker.scale.z = 0.1
        marker.header.frame_id = "/"+name
        marker.header.stamp = rospy.get_rostime()
        marker.header.seq = 1
        if plastictype == 0:
            marker.color=ColorRGBA(1.0, 0.0, 0.0,1)
        else:
            marker.color=ColorRGBA(0.0, 1.0, 0.0,1)
        #lifetime=0,
        marker.frame_locked=True
        
        
        marker_publisher.publish(marker)

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
        global pos       
        t = rospy.get_time() - s.startTime
        debug_msg = False        
        if debug_msg:       
            print("Broadcasting %f", t)
        s.currentYPos = pos + s.speed * 0.1
        pos = s.currentYPos
        
        # call legacy function, can't be bothered to refactor this
        s.broadcastConveyorTf(s.currentYPos)

    def simulateMovement(s):
        s.startTime = rospy.get_time()
        s.speed = 0.05

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

    objRecogniser = ObjRecogniser()
    objRecogniser.simulateObjRecognition()    

    # wait a bit to initialise subscriber
    rospy.sleep(1)
    
    conveyorBelt = ConveyorBelt()
    conveyorBelt.simulateMovement()    
    
    
    objOnConveyorBeltListMaintainer = ObjOnConveyorBeltListMaintainer()   
    
    objTfBroadcaster = ObjTfBroadcaster(objOnConveyorBeltListMaintainer)
    
    rospy.loginfo("Let's go")

    rate = rospy.Rate(0.05)
  
    startTime = rospy.get_time()
    
    # start program to introduce items onto the belt
    #rospy.Timer(rospy.Duration(5), addObjCallback)
    
    while not rospy.is_shutdown():

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

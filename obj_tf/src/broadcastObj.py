#! /usr/bin/env python

import rospy
import time
import tf
from SimpleNamespace import SimpleNamespace


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
    rospy.loginfo("Let's go")

    rate = rospy.Rate(1)

    conveyorSpeed = 0.01 # m / sec    
    
    startTime = rospy.get_time()    
    
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
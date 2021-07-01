#! /usr/bin/env python

import rospy
from broadcastObj import ObjRecogniser
import cv2
import pyrealsense2 as rs
import numpy as np
from niryo_one_camera import *
import A3x3
import utils
from PIL import Image
if __name__ == '__main__':

    rospy.init_node('obj_recog_camera')
    pipe = rs.pipeline()
    config = rs.config()
    config.enable_device_from_file("/home/niryo/test.bag")

    print('starting pipeline')
    profile = pipe.start(config)
    # for x in range(10):
    #     try:
    #         pipe.wait_for_frames()
    #     except:
    #         x = x-1

    while not rospy.is_shutdown():
        
        print('waiting for frames')
        frames = pipe.wait_for_frames()
        align = rs.align(rs.stream.color)
        frames = align.process(frames)
        depth_frame = frames.get_depth_frame()
        color_frame = frames.get_color_frame()
        if not depth_frame or color_frame:
            continue 
        colorizer = rs.colorizer()
        depth_image = np.asanyarray(colorizer.colorize(depth_frame).get_data())
        color_image = np.asanyarray(color_frame.get_data())

        rate = rospy.Rate(0.2)
        #print("frame size",frame.shape)
        #frame = cv2.resize(frame,None,fx = 0.2, fy =0.2, interpolation = cv2.INTER_AREA)
        #print("Reized frame size ",frame.shape)
        cv2.imshow("Full frame",color_image)

        try:
            frame,_=extract_img_workspace(frame,frame, workspace_ratio=0.37)
            print("ws size ",frame.shape)
        except:
            print("no workspace detected")
        frameCopy = frame.copy()
        cv2.line(frameCopy,(0,220),(200,220),(255,0,0),thickness_small)
        cv2.line(frameCopy,(0,525),(200,525),(0,0,255),thickness_small)
        cv2.imshow("workspace",frameCopy)
        frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        shape = frame.shape

        # calculate mask for frame (black and white image)
        mask = utils.objs_mask(frame)
        cv2.imshow("Mask",mask)
        bounding_box, rect, centre = utils.bounding_box(frame, mask)
        
        #get x,y
        (_,__),(width,height),angle = rect
        x,y = centre
        print("Centre of co-ordinates (x,y) wrt workspace origin is {}".format(centre))
        
        #dependant on camera position wrt workspace origin. re-measure for accuracy
        x = float((x-20))/float(1000)
        y = ((y-47))/(1000)
        width = float(width)/1000.0
        height = float(height)/1000.0
        print("Centre of co-ordinates (x,y) wrt camera is {},{}".format(x,y))
        print("width and height are : {},{}".format(width,height))
        objRecogniser = ObjRecogniser()
        objRecogniser.simulateObjRecognitionCallback(x,y,width,height)

        # if frame is read correctly ret is True
        key = cv2.waitKey(1)
        if key == 'escape':
            quit()
        rate.sleep()

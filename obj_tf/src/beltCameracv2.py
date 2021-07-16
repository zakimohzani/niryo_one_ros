#! /usr/bin/env python

import rospy
import argparse
from broadcastObj import ObjRecogniser
import cv2
import pyrealsense2 as rs
import numpy as np
from niryo_one_camera import *
import A3x3
import utilsCopy
from PIL import Image
import thread

if __name__ == '__main__':

    rospy.init_node('obj_recog_camera')
    pipe = rs.pipeline()
    config = rs.config()
    config.enable_device_from_file("/home/niryo/test1.bag")
    # config.enable_stream(rs.stream.depth,1280,720,rs.format.z16,30)
    # config.enable_stream(rs.stream.color,1280,720,rs.format.bgr8,30)
    
    print('starting pipeline')
    profile = pipe.start(config)
    for x in range(10):
        try:
            pipe.wait_for_frames()
        except:
            x = x-1

    # cap = cv2.VideoCapture('./3lights.mp4')
    # cap = cv2.VideoCapture(0)
    area = 0
    objRecogniser = ObjRecogniser()
    while not rospy.is_shutdown():
        print('waiting for frames')
        frames = pipe.wait_for_frames()
        print('frame read')
        align = rs.align(rs.stream.color)
        frames = align.process(frames)
        #depth_frame = frames.get_depth_frame()
        color_frame = frames.get_color_frame()
        colorizer = rs.colorizer()
        #depth_image = np.asanyarray(colorizer.colorize(depth_frame).get_data())
        frame = np.asanyarray(color_frame.get_data())
        # frame = cv2.rotate(frame,cv2.ROTATE_90_COUNTERCLOCKWISE)
        frameCopy = frame.copy()

        cv2.line(frameCopy,(0,20),(1280,20),(255,0,0),thickness_small)
        cv2.line(frameCopy,(0,700),(1280,700),(0,0,255),thickness_small)

        cv2.line(frameCopy,(580,0),(580,720),(255,0,0),thickness_small)
        cv2.line(frameCopy,(1200,0),(1200,720),(0,0,255),thickness_small)
        frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        
        shape = frame.shape
        # calculate mask for frame (black and white image)

        mask = utilsCopy.objs_mask(frame)
        #cv2.imshow("Dilated",dilated)
        cv2.imshow("frame", frameCopy)
        #cv2.imshow("mask",mask)

        try:
            bounding_box, rect, centre = utilsCopy.bounding_box(frame, mask)
        except:
            print("No object")
            cv2.waitKey(1)
            continue
        #cv2.imshow("Mask",mask)

        #get x,y
        (_,__),(width,height),angle = rect
        x,y = centre
        new_area = width*height
        print("Centre of co-ordinates (x,y) wrt workspace origin is {}".format(centre))
        
        #dependant on camera position wrt workspace origin. re-measure for accuracy
        x = -float(x)/float(1280) + 0.46
        y = -float(y)/float(720) + 0.15
        width = float(width)/1280
        height = float(height)/720
        print("Centre of co-ordinates (x,y) wrt camera is {},{}".format(x,y))
        print("width and height are : {},{}".format(width,height))
        if (area - new_area) >2000 or (new_area-area) > 2000:
            print("Visualising object")
            objRecogniser.simulateObjRecognitionCallback(x,y,height,width)
            area = new_area
        key = cv2.waitKey(1)
        if key == 'escape':
            quit()


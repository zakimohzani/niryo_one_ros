#! /usr/bin/env python

import rospy
from broadcastObj import ObjRecogniser
import cv2
import pyrealsense2 as rs
import numpy as np
from niryo_one_camera import *
import A3x3
import utilsCopy
from PIL import Image
import thread




def object_visualisation(y,x,width,height):
    objRecogniser = ObjRecogniser()
    objRecogniser.simulateObjRecognitionCallback(y,x,height,width)

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
    area = 0

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

        rate = rospy.Rate(0.2)
        print("frame size",frame.shape)
        #frame = cv2.resize(frame,None,fx = 0.2, fy =0.2, interpolation = cv2.INTER_AREA)
        #print("Reized frame size ",frame.shape)

        # try:
        #     frame,_=extract_img_workspace(color_image,color_image, workspace_ratio=0.37)
        #     print("ws size ",frame.shape)
        # except:
        #     print("no workspace detected")
        #     continue
        frameCopy = frame.copy()
        cv2.line(frameCopy,(0,10),(1280,10),(255,0,0),thickness_small)
        cv2.line(frameCopy,(0,525),(1280,525),(0,0,255),thickness_small)
        frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        shape = frame.shape
        cv2.imshow("frame", frame)
        # calculate mask for frame (black and white image)
        mask = utilsCopy.objs_mask(frame)
        try:
            bounding_box, rect, centre = utilsCopy.bounding_box(frame, mask)
        except:
            continue
        #cv2.imshow("Mask",mask)

        #get x,y
        (_,__),(width,height),angle = rect
        x,y = centre
        new_area = width*height
        print("Centre of co-ordinates (x,y) wrt workspace origin is {}".format(centre))
        
        #dependant on camera position wrt workspace origin. re-measure for accuracy
        x = float((x-20))/float(1000)
        y = ((y-47))/(1000)
        width = float(width)/1000.0
        height = float(height)/1000.0
        print("Centre of co-ordinates (x,y) wrt camera is {},{}".format(x,y))
        print("width and height are : {},{}".format(width,height))
        if abs(area - new_area) >10000:
            thread.start_new_thread(object_visualisation,(y,x,width,height))
            area = new_area
        key = cv2.waitKey(1)
        if key == 'escape':
            quit()
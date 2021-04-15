#! /usr/bin/env python

import rospy
from broadcastObjneel import ObjRecogniser
import cv2
import numpy as np
from niryo_one_camera import *
import A3x3
import utils
from PIL import Image
if __name__ == '__main__':

    rospy.init_node('obj_recog_camera')
    
    #setting up Pi camera(if using pi)
    #camera = PiCamera()
    #camera.resolution = (640,480)
    #camera.framerate = 30
    #rawCapture = PiRGBArray(camera)
    #time.sleep(0.1) #let camera warm up

    while not rospy.is_shutdown():

        rate = rospy.Rate(0.2)

        # Capture frame-by-frame (for RPi)
        #rawCapture = PiRGBArray(camera)
        #camera.capture(rawCapture, format = 'bgr')
        #frame = rawCapture.array

        
        frame = Image.open("./wspic1.jpeg")
        frame = np.asarray(frame)
        #print("frame size",frame.shape)
        frame = cv2.resize(frame,None,fx = 0.2, fy =0.2, interpolation = cv2.INTER_AREA)
        #print("Reized frame size ",frame.shape)
        #cv2.imshow("Full frame",frame)


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
        #cv2.imshow("Mask",mask)
        bounding_box, rect, centre = utils.bounding_box(frame, mask)
        
        #get x,y
        x,y = centre
        print("Centre of co-ordinates (x,y) wrt workspace origin is {}".format(centre))
        
        #dependant on camera position wrt workspace origin. re-measure for accuracy
        x = float((x-7))/float(1000)
        y = ((y-28.7))/(1000)

        print("Centre of co-ordinates (x,y) wrt camera is {},{}".format(x,y))
        objRecogniser = ObjRecogniser()
        objRecogniser.simulateObjRecognitionCallback(x,y)

        # if frame is read correctly ret is True
        key = cv2.waitKey(1)
        if key == 'escape':
            quit()
        rate.sleep()

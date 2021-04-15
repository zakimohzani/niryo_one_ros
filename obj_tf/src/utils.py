
from niryo_one_camera import *
import numpy as np
import cv2
import time
from A3x3 import *

# functions to get slope, area, and center tendency of bounding box


def get_slope(rect):
    try:
        if rect is None:
            return None
        slope = rect[1][0]/rect[1][1]
        return slope
    except:
        return None


def get_area(rect):
    if rect is None:
        return None
    area = rect[1][0]*rect[1][1]
    return area


def get_angle(rect):
    angle = rect[-1]
    return math.radians(angle)


def get_contour_centroid(contour):
    """
    Return centroid of an OpenCV Contour
    :param contour: OpenCV Contour
    :return: centroid
    """
    moments = cv2.moments(contour)
    if moments['m00'] == 0:
        rect = cv2.boundingRect(contour)
        cx, cy, _, _ = rect
    else:
        cx = int(moments['m10'] / moments['m00'])
        cy = int(moments['m01'] / moments['m00'])

    return cx, cy


def check_center_tendency(rect):
    """Check if object is inside the workspace completely"""
    box = cv2.boxPoints(rect)
    box = np.int0(box)
    x_values = [box[0][0], box[1][0], box[2][0], box[3][0]]
    maximum = max(x_values)
    minimum = min(x_values)
    if maximum < 197 and minimum > 3:
        return True
    else:
        return False

# capture workspace image


def take_img(client):
    img_work = depth_calculate.get_frames()
    try:
        img_work, _ = extract_img_workspace(
            img_work, img_work, workspace_ratio=0.37)
        img_work_copy = img_work.copy()
        img_work_copy = cv2.rotate(img_work_copy,cv2.ROTATE_90_COUNTERCLOCKWISE)
        Display3x3("Camera feed + Object Box", img_work_copy, 2)
        #print("Workspace shape at robot side", img_work.shape)
    except:
        print("No workspace detected")
    return True, img_work


# calculate a mask


def objs_mask(img):
    boundaries = [([0, 50, 0], [100, 255, 100])]
    for (lower, upper) in boundaries:
        lower = np.array(lower, dtype="uint8")
        upper = np.array(upper, dtype="uint8")
        mask = cv2.inRange(img, lower, upper)
    thresh = cv2.threshold(
        mask, 0, 255, cv2.THRESH_BINARY_INV | cv2.THRESH_OTSU)[1]
    area1 = np.array([[[0, 0], [200, 0], [200, 20], [0, 20]]], dtype=np.int32)
    cv2.fillPoly(thresh, area1, 0)
    area2 = np.array(
        [[[0, 520], [200, 520], [200, 541], [0, 541]]], dtype=np.int32)
    cv2.fillPoly(thresh, area2, 0)
    return thresh


def bounding_box(frame, mask):
    """Get bounding box of object"""
    cnts, hierarchy = cv2.findContours(
        mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)[-2:]
    selected_cnts = []
    if cnts is not None:
        counter = 0
        while counter < 10:
            counter += 1
            for cnt in cnts:
                bigrect = cv2.boundingRect(cnt)
                rect = cv2.minAreaRect(cnt)
                box = cv2.boxPoints(rect)
                box = np.int0(box)
                y_values = [box[0][1], box[1][1], box[2][1], box[3][1]]
                if min(y_values) > 220:
                    if cv2.contourArea(cnt)>500:
                        selected_cnts.append(cnt)
        try:
            cnt = max(selected_cnts, key=cv2.contourArea)
        except:
            return None
        # for cnt in selected_cnts:
        bigrect = cv2.boundingRect(cnt)
        rect = cv2.minAreaRect(cnt)
        box = cv2.boxPoints(rect)
        box = np.int0(box)
        cv2.drawContours(frame, [box], 0, (0, 255), 2)
       # cv2.imshow('Bounding Box', frame)
        frame_copy = frame.copy()
	cv2.line(frame_copy, (0,220),(200,220),(255,0,0,), thickness_small)
	cv2.line(frame_copy, (0,525),(200,525),(0,0,255,),thickness_small)
        frameCopy = cv2.rotate(frame_copy, cv2.ROTATE_90_COUNTERCLOCKWISE)
        cv2.imshow(" Object Box", frame_copy)
        centre = get_contour_centroid(cnt)
        return box, rect, centre
    return None


def standardize_img(img):
    array_type = img.dtype
    # color balance normalizing
    color_mean = np.mean(img, axis=(0, 1))
    mean_color_mean = np.mean(color_mean)
    img = img[:][:]*mean_color_mean/color_mean

    # color range normalizing
    min, max = np.quantile(img, [0.001, 0.95])
    img = (img - min) * 256 / (max - min)
    img = np.clip(img, 0, 255)
    img = img.astype(array_type)
    return img

# Uncompress and Undistort image


def uncompress_image(compressed_image):
    """
    Take a compressed img and return an OpenCV image
    :param compressed_image: compressed image
    :return: OpenCV image
    """
    np_arr = np.fromstring(compressed_image, np.uint8)
    return cv2.imdecode(np_arr, cv2.IMREAD_COLOR)


def undistort_image(img, mtx, dist, newcameramtx=None):
    """
    Use camera intrinsics to undistort raw image
    :param img: Raw Image
    :param mtx: Camera Intrinsics matrix
    :param dist: Distortion Coefficient
    :param newcameramtx: Camera Intrinsics matrix after correction
    :return: Undistorted image
    """
    return cv2.undistort(src=img, cameraMatrix=mtx,
                         distCoeffs=dist, newCameraMatrix=newcameramtx)

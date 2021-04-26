// Copyright 2020 The MathWorks, Inc.
// Common copy functions of server for niryo_one_msgs/ObjDetectionResponse
#include "boost/date_time.hpp"
#include "boost/shared_array.hpp"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#pragma warning(disable : 4127)
#pragma warning(disable : 4267)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "ros/ros.h"
#include "niryo_one_msgs/ObjDetection.h"
#include "visibility_control.h"
#ifndef FOUNDATION_MATLABDATA_API
#include "MDArray.hpp"
#include "StructArray.hpp"
#include "TypedArrayRef.hpp"
#include "Struct.hpp"
#include "ArrayFactory.hpp"
#include "StructRef.hpp"
#include "Reference.hpp"
#endif
#ifndef FOUNDATION_MATLABDATA_API
typedef matlab::data::Array MDArray_T;
typedef matlab::data::ArrayFactory MDFactory_T;
#else
typedef foundation::matlabdata::Array MDArray_T;
typedef foundation::matlabdata::standalone::ClientArrayFactory MDFactory_T;
#endif
namespace niryo_one_msgs {
namespace matlabhelper {
namespace ObjDetection_Response {
  void copy_from_arr_niryo_one_msgs_ObjectPose(niryo_one_msgs::ObjectPose& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_niryo_one_msgs_ObjectPose(MDFactory_T& factory, const niryo_one_msgs::ObjDetection::Response::_obj_pose_type& val);
  void copy_from_arr_sensor_msgs_CompressedImage(sensor_msgs::CompressedImage& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_sensor_msgs_CompressedImage(MDFactory_T& factory, const niryo_one_msgs::ObjDetection::Response::_img_type& val);
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const sensor_msgs::CompressedImage::_header_type& val);
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_niryo_one_msgs_ObjectPose(niryo_one_msgs::ObjectPose& val, const matlab::data::StructArray& arr) {
    // _niryo_one_msgs_ObjectPose.x
    try {
        const matlab::data::TypedArray<double> _obj_posex_arr = arr[0]["x"];
        val.x = _obj_posex_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_ObjectPose.y
    try {
        const matlab::data::TypedArray<double> _obj_posey_arr = arr[0]["y"];
        val.y = _obj_posey_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_ObjectPose.z
    try {
        const matlab::data::TypedArray<double> _obj_posez_arr = arr[0]["z"];
        val.z = _obj_posez_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_ObjectPose.roll
    try {
        const matlab::data::TypedArray<double> _obj_poseroll_arr = arr[0]["roll"];
        val.roll = _obj_poseroll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roll' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roll' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_ObjectPose.pitch
    try {
        const matlab::data::TypedArray<double> _obj_posepitch_arr = arr[0]["pitch"];
        val.pitch = _obj_posepitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pitch' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_ObjectPose.yaw
    try {
        const matlab::data::TypedArray<double> _obj_poseyaw_arr = arr[0]["yaw"];
        val.yaw = _obj_poseyaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_niryo_one_msgs_ObjectPose(MDFactory_T& factory, const niryo_one_msgs::ObjDetection::Response::_obj_pose_type& val) {
    auto _obj_poseoutArray = factory.createStructArray({1,1},{"x","y","z","roll","pitch","yaw"});
    // _niryo_one_msgs_ObjectPose.x
    _obj_poseoutArray[0]["x"] = factory.createScalar(val.x);
    // _niryo_one_msgs_ObjectPose.y
    _obj_poseoutArray[0]["y"] = factory.createScalar(val.y);
    // _niryo_one_msgs_ObjectPose.z
    _obj_poseoutArray[0]["z"] = factory.createScalar(val.z);
    // _niryo_one_msgs_ObjectPose.roll
    _obj_poseoutArray[0]["roll"] = factory.createScalar(val.roll);
    // _niryo_one_msgs_ObjectPose.pitch
    _obj_poseoutArray[0]["pitch"] = factory.createScalar(val.pitch);
    // _niryo_one_msgs_ObjectPose.yaw
    _obj_poseoutArray[0]["yaw"] = factory.createScalar(val.yaw);
    return std::move(_obj_poseoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_sensor_msgs_CompressedImage(sensor_msgs::CompressedImage& val, const matlab::data::StructArray& arr) {
    // _sensor_msgs_CompressedImage.header
    try {
        const matlab::data::StructArray _imgheader_arr = arr[0]["header"];
        copy_from_arr_std_msgs_Header(val.header,_imgheader_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    // _sensor_msgs_CompressedImage.format
    try {
        const matlab::data::CharArray _imgformat_arr = arr[0]["format"];
        val.format = _imgformat_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'format' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'format' is wrong type; expected a string.");
    }
    // _sensor_msgs_CompressedImage.data
    try {
        const matlab::data::TypedArray<uint8_t> _imgdata_arr = arr[0]["data"];
        size_t nelem = _imgdata_arr.getNumberOfElements();
        	val.data.resize(nelem);
        	std::copy(_imgdata_arr.begin(), _imgdata_arr.begin()+nelem, val.data.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'data' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'data' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_sensor_msgs_CompressedImage(MDFactory_T& factory, const niryo_one_msgs::ObjDetection::Response::_img_type& val) {
    auto _imgoutArray = factory.createStructArray({1,1},{"header","format","data"});
    // _sensor_msgs_CompressedImage.header
    _imgoutArray[0]["header"] = get_arr_std_msgs_Header(factory, val.header);
    // _sensor_msgs_CompressedImage.format
    _imgoutArray[0]["format"] = factory.createCharArray(val.format);
    // _sensor_msgs_CompressedImage.data
    _imgoutArray[0]["data"] = factory.createArray<sensor_msgs::CompressedImage::_data_type::const_iterator, uint8_t>({1, val.data.size()}, val.data.begin(), val.data.end());
    return std::move(_imgoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr) {
    // _std_msgs_Header.seq
    try {
        const matlab::data::TypedArray<uint32_t> _img_headerseq_arr = arr[0]["seq"];
        val.seq = _img_headerseq_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'seq' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'seq' is wrong type; expected a uint32.");
    }
    // _std_msgs_Header.stamp
    try {
        const matlab::data::StructArray _img_headerstamp_arr = arr[0]["stamp"];
        copy_from_arr_ros_Time(val.stamp,_img_headerstamp_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stamp' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'stamp' is wrong type; expected a struct.");
    }
    // _std_msgs_Header.frame_id
    try {
        const matlab::data::CharArray _img_headerframe_id_arr = arr[0]["frame_id"];
        val.frame_id = _img_headerframe_id_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'frame_id' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const sensor_msgs::CompressedImage::_header_type& val) {
    auto _img_headeroutArray = factory.createStructArray({1,1},{"seq","stamp","frame_id"});
    // _std_msgs_Header.seq
    _img_headeroutArray[0]["seq"] = factory.createScalar(val.seq);
    // _std_msgs_Header.stamp
    _img_headeroutArray[0]["stamp"] = get_arr_ros_Time(factory, val.stamp);
    // _std_msgs_Header.frame_id
    _img_headeroutArray[0]["frame_id"] = factory.createCharArray(val.frame_id);
    return std::move(_img_headeroutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr) {
    // _ros_Time.sec
    try {
        const matlab::data::TypedArray<uint32_t> _img_header_stampsec_arr = arr[0]["sec"];
        val.sec = _img_header_stampsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sec' is wrong type; expected a uint32.");
    }
    // _ros_Time.nsec
    try {
        const matlab::data::TypedArray<uint32_t> _img_header_stampnsec_arr = arr[0]["nsec"];
        val.nsec = _img_header_stampnsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nsec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'nsec' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val) {
    auto _img_header_stampoutArray = factory.createStructArray({1,1},{"sec","nsec"});
    // _ros_Time.sec
    _img_header_stampoutArray[0]["sec"] = factory.createScalar(val.sec);
    // _ros_Time.nsec
    _img_header_stampoutArray[0]["nsec"] = factory.createScalar(val.nsec);
    return std::move(_img_header_stampoutArray);
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::ObjDetection::Response& msg, const matlab::data::StructArray arr) {
    try {
        //status
        const matlab::data::TypedArray<int32_t> status_arr = arr[0]["status"];
        msg.status = status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'status' is wrong type; expected a int32.");
    }
    try {
        //obj_pose
        const matlab::data::StructArray obj_pose_arr = arr[0]["obj_pose"];
        copy_from_arr_niryo_one_msgs_ObjectPose(msg.obj_pose,obj_pose_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'obj_pose' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'obj_pose' is wrong type; expected a struct.");
    }
    try {
        //obj_type
        const matlab::data::CharArray obj_type_arr = arr[0]["obj_type"];
        msg.obj_type = obj_type_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'obj_type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'obj_type' is wrong type; expected a string.");
    }
    try {
        //obj_color
        const matlab::data::CharArray obj_color_arr = arr[0]["obj_color"];
        msg.obj_color = obj_color_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'obj_color' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'obj_color' is wrong type; expected a string.");
    }
    try {
        //img
        const matlab::data::StructArray img_arr = arr[0]["img"];
        copy_from_arr_sensor_msgs_CompressedImage(msg.img,img_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'img' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'img' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::ObjDetection::Response& msg) {
    auto outArray = factory.createStructArray({1,1},{"status","SUCCESSFUL","VIDEO_STREAM_NOT_RUNNING","OBJECT_NOT_FOUND","MARKERS_NOT_FOUND","obj_pose","obj_type","obj_color","img"});
    // status
    outArray[0]["status"] = factory.createScalar(msg.status);
    // SUCCESSFUL
    outArray[0]["SUCCESSFUL"] = factory.createScalar(static_cast<int32_t>(msg.SUCCESSFUL));
    // VIDEO_STREAM_NOT_RUNNING
    outArray[0]["VIDEO_STREAM_NOT_RUNNING"] = factory.createScalar(static_cast<int32_t>(msg.VIDEO_STREAM_NOT_RUNNING));
    // OBJECT_NOT_FOUND
    outArray[0]["OBJECT_NOT_FOUND"] = factory.createScalar(static_cast<int32_t>(msg.OBJECT_NOT_FOUND));
    // MARKERS_NOT_FOUND
    outArray[0]["MARKERS_NOT_FOUND"] = factory.createScalar(static_cast<int32_t>(msg.MARKERS_NOT_FOUND));
    // obj_pose
    outArray[0]["obj_pose"] = get_arr_niryo_one_msgs_ObjectPose(factory, msg.obj_pose);
    // obj_type
    outArray[0]["obj_type"] = factory.createCharArray(msg.obj_type);
    // obj_color
    outArray[0]["obj_color"] = factory.createCharArray(msg.obj_color);
    // img
    outArray[0]["img"] = get_arr_sensor_msgs_CompressedImage(factory, msg.img);
    return std::move(outArray);
  }
} //namespace ObjDetection_Response
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
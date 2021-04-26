// Copyright 2020 The MathWorks, Inc.
// Common copy functions of server for niryo_one_msgs/GetCalibrationCamResponse
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
#include "niryo_one_msgs/GetCalibrationCam.h"
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
namespace GetCalibrationCam_Response {
  void copy_from_arr_sensor_msgs_CameraInfo(sensor_msgs::CameraInfo& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_sensor_msgs_CameraInfo(MDFactory_T& factory, const niryo_one_msgs::GetCalibrationCam::Response::_camera_info_type& val);
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const sensor_msgs::CameraInfo::_header_type& val);
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val);
  void copy_from_arr_sensor_msgs_RegionOfInterest(sensor_msgs::RegionOfInterest& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_sensor_msgs_RegionOfInterest(MDFactory_T& factory, const sensor_msgs::CameraInfo::_roi_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_sensor_msgs_CameraInfo(sensor_msgs::CameraInfo& val, const matlab::data::StructArray& arr) {
    // _sensor_msgs_CameraInfo.header
    try {
        const matlab::data::StructArray _camera_infoheader_arr = arr[0]["header"];
        copy_from_arr_std_msgs_Header(val.header,_camera_infoheader_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    // _sensor_msgs_CameraInfo.height
    try {
        const matlab::data::TypedArray<uint32_t> _camera_infoheight_arr = arr[0]["height"];
        val.height = _camera_infoheight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'height' is wrong type; expected a uint32.");
    }
    // _sensor_msgs_CameraInfo.width
    try {
        const matlab::data::TypedArray<uint32_t> _camera_infowidth_arr = arr[0]["width"];
        val.width = _camera_infowidth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'width' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'width' is wrong type; expected a uint32.");
    }
    // _sensor_msgs_CameraInfo.distortion_model
    try {
        const matlab::data::CharArray _camera_infodistortion_model_arr = arr[0]["distortion_model"];
        val.distortion_model = _camera_infodistortion_model_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'distortion_model' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'distortion_model' is wrong type; expected a string.");
    }
    // _sensor_msgs_CameraInfo.D
    try {
        const matlab::data::TypedArray<double> _camera_infoD_arr = arr[0]["D"];
        size_t nelem = _camera_infoD_arr.getNumberOfElements();
        	val.D.resize(nelem);
        	std::copy(_camera_infoD_arr.begin(), _camera_infoD_arr.begin()+nelem, val.D.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'D' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'D' is wrong type; expected a double.");
    }
    // _sensor_msgs_CameraInfo.K
    try {
        const matlab::data::TypedArray<double> _camera_infoK_arr = arr[0]["K"];
        size_t nelem = 9;
        	std::copy(_camera_infoK_arr.begin(), _camera_infoK_arr.begin()+nelem, val.K.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'K' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'K' is wrong type; expected a double.");
    }
    // _sensor_msgs_CameraInfo.R
    try {
        const matlab::data::TypedArray<double> _camera_infoR_arr = arr[0]["R"];
        size_t nelem = 9;
        	std::copy(_camera_infoR_arr.begin(), _camera_infoR_arr.begin()+nelem, val.R.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'R' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'R' is wrong type; expected a double.");
    }
    // _sensor_msgs_CameraInfo.P
    try {
        const matlab::data::TypedArray<double> _camera_infoP_arr = arr[0]["P"];
        size_t nelem = 12;
        	std::copy(_camera_infoP_arr.begin(), _camera_infoP_arr.begin()+nelem, val.P.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'P' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'P' is wrong type; expected a double.");
    }
    // _sensor_msgs_CameraInfo.binning_x
    try {
        const matlab::data::TypedArray<uint32_t> _camera_infobinning_x_arr = arr[0]["binning_x"];
        val.binning_x = _camera_infobinning_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'binning_x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'binning_x' is wrong type; expected a uint32.");
    }
    // _sensor_msgs_CameraInfo.binning_y
    try {
        const matlab::data::TypedArray<uint32_t> _camera_infobinning_y_arr = arr[0]["binning_y"];
        val.binning_y = _camera_infobinning_y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'binning_y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'binning_y' is wrong type; expected a uint32.");
    }
    // _sensor_msgs_CameraInfo.roi
    try {
        const matlab::data::StructArray _camera_inforoi_arr = arr[0]["roi"];
        copy_from_arr_sensor_msgs_RegionOfInterest(val.roi,_camera_inforoi_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roi' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roi' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_sensor_msgs_CameraInfo(MDFactory_T& factory, const niryo_one_msgs::GetCalibrationCam::Response::_camera_info_type& val) {
    auto _camera_infooutArray = factory.createStructArray({1,1},{"header","height","width","distortion_model","D","K","R","P","binning_x","binning_y","roi"});
    // _sensor_msgs_CameraInfo.header
    _camera_infooutArray[0]["header"] = get_arr_std_msgs_Header(factory, val.header);
    // _sensor_msgs_CameraInfo.height
    _camera_infooutArray[0]["height"] = factory.createScalar(val.height);
    // _sensor_msgs_CameraInfo.width
    _camera_infooutArray[0]["width"] = factory.createScalar(val.width);
    // _sensor_msgs_CameraInfo.distortion_model
    _camera_infooutArray[0]["distortion_model"] = factory.createCharArray(val.distortion_model);
    // _sensor_msgs_CameraInfo.D
    _camera_infooutArray[0]["D"] = factory.createArray<sensor_msgs::CameraInfo::_D_type::const_iterator, double>({1, val.D.size()}, val.D.begin(), val.D.end());
    // _sensor_msgs_CameraInfo.K
    _camera_infooutArray[0]["K"] = factory.createArray<sensor_msgs::CameraInfo::_K_type::const_iterator, double>({1, val.K.size()}, val.K.begin(), val.K.end());
    // _sensor_msgs_CameraInfo.R
    _camera_infooutArray[0]["R"] = factory.createArray<sensor_msgs::CameraInfo::_R_type::const_iterator, double>({1, val.R.size()}, val.R.begin(), val.R.end());
    // _sensor_msgs_CameraInfo.P
    _camera_infooutArray[0]["P"] = factory.createArray<sensor_msgs::CameraInfo::_P_type::const_iterator, double>({1, val.P.size()}, val.P.begin(), val.P.end());
    // _sensor_msgs_CameraInfo.binning_x
    _camera_infooutArray[0]["binning_x"] = factory.createScalar(val.binning_x);
    // _sensor_msgs_CameraInfo.binning_y
    _camera_infooutArray[0]["binning_y"] = factory.createScalar(val.binning_y);
    // _sensor_msgs_CameraInfo.roi
    _camera_infooutArray[0]["roi"] = get_arr_sensor_msgs_RegionOfInterest(factory, val.roi);
    return std::move(_camera_infooutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr) {
    // _std_msgs_Header.seq
    try {
        const matlab::data::TypedArray<uint32_t> _camera_info_headerseq_arr = arr[0]["seq"];
        val.seq = _camera_info_headerseq_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'seq' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'seq' is wrong type; expected a uint32.");
    }
    // _std_msgs_Header.stamp
    try {
        const matlab::data::StructArray _camera_info_headerstamp_arr = arr[0]["stamp"];
        copy_from_arr_ros_Time(val.stamp,_camera_info_headerstamp_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stamp' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'stamp' is wrong type; expected a struct.");
    }
    // _std_msgs_Header.frame_id
    try {
        const matlab::data::CharArray _camera_info_headerframe_id_arr = arr[0]["frame_id"];
        val.frame_id = _camera_info_headerframe_id_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'frame_id' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const sensor_msgs::CameraInfo::_header_type& val) {
    auto _camera_info_headeroutArray = factory.createStructArray({1,1},{"seq","stamp","frame_id"});
    // _std_msgs_Header.seq
    _camera_info_headeroutArray[0]["seq"] = factory.createScalar(val.seq);
    // _std_msgs_Header.stamp
    _camera_info_headeroutArray[0]["stamp"] = get_arr_ros_Time(factory, val.stamp);
    // _std_msgs_Header.frame_id
    _camera_info_headeroutArray[0]["frame_id"] = factory.createCharArray(val.frame_id);
    return std::move(_camera_info_headeroutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr) {
    // _ros_Time.sec
    try {
        const matlab::data::TypedArray<uint32_t> _camera_info_header_stampsec_arr = arr[0]["sec"];
        val.sec = _camera_info_header_stampsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sec' is wrong type; expected a uint32.");
    }
    // _ros_Time.nsec
    try {
        const matlab::data::TypedArray<uint32_t> _camera_info_header_stampnsec_arr = arr[0]["nsec"];
        val.nsec = _camera_info_header_stampnsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nsec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'nsec' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val) {
    auto _camera_info_header_stampoutArray = factory.createStructArray({1,1},{"sec","nsec"});
    // _ros_Time.sec
    _camera_info_header_stampoutArray[0]["sec"] = factory.createScalar(val.sec);
    // _ros_Time.nsec
    _camera_info_header_stampoutArray[0]["nsec"] = factory.createScalar(val.nsec);
    return std::move(_camera_info_header_stampoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_sensor_msgs_RegionOfInterest(sensor_msgs::RegionOfInterest& val, const matlab::data::StructArray& arr) {
    // _sensor_msgs_RegionOfInterest.x_offset
    try {
        const matlab::data::TypedArray<uint32_t> _camera_info_roix_offset_arr = arr[0]["x_offset"];
        val.x_offset = _camera_info_roix_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x_offset' is wrong type; expected a uint32.");
    }
    // _sensor_msgs_RegionOfInterest.y_offset
    try {
        const matlab::data::TypedArray<uint32_t> _camera_info_roiy_offset_arr = arr[0]["y_offset"];
        val.y_offset = _camera_info_roiy_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y_offset' is wrong type; expected a uint32.");
    }
    // _sensor_msgs_RegionOfInterest.height
    try {
        const matlab::data::TypedArray<uint32_t> _camera_info_roiheight_arr = arr[0]["height"];
        val.height = _camera_info_roiheight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'height' is wrong type; expected a uint32.");
    }
    // _sensor_msgs_RegionOfInterest.width
    try {
        const matlab::data::TypedArray<uint32_t> _camera_info_roiwidth_arr = arr[0]["width"];
        val.width = _camera_info_roiwidth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'width' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'width' is wrong type; expected a uint32.");
    }
    // _sensor_msgs_RegionOfInterest.do_rectify
    try {
        const matlab::data::TypedArray<bool> _camera_info_roido_rectify_arr = arr[0]["do_rectify"];
        val.do_rectify = _camera_info_roido_rectify_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'do_rectify' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'do_rectify' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_sensor_msgs_RegionOfInterest(MDFactory_T& factory, const sensor_msgs::CameraInfo::_roi_type& val) {
    auto _camera_info_roioutArray = factory.createStructArray({1,1},{"x_offset","y_offset","height","width","do_rectify"});
    // _sensor_msgs_RegionOfInterest.x_offset
    _camera_info_roioutArray[0]["x_offset"] = factory.createScalar(val.x_offset);
    // _sensor_msgs_RegionOfInterest.y_offset
    _camera_info_roioutArray[0]["y_offset"] = factory.createScalar(val.y_offset);
    // _sensor_msgs_RegionOfInterest.height
    _camera_info_roioutArray[0]["height"] = factory.createScalar(val.height);
    // _sensor_msgs_RegionOfInterest.width
    _camera_info_roioutArray[0]["width"] = factory.createScalar(val.width);
    // _sensor_msgs_RegionOfInterest.do_rectify
    _camera_info_roioutArray[0]["do_rectify"] = factory.createScalar(static_cast<bool>(val.do_rectify));
    return std::move(_camera_info_roioutArray);
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::GetCalibrationCam::Response& msg, const matlab::data::StructArray arr) {
    try {
        //is_set
        const matlab::data::TypedArray<bool> is_set_arr = arr[0]["is_set"];
        msg.is_set = is_set_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'is_set' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'is_set' is wrong type; expected a logical.");
    }
    try {
        //camera_info
        const matlab::data::StructArray camera_info_arr = arr[0]["camera_info"];
        copy_from_arr_sensor_msgs_CameraInfo(msg.camera_info,camera_info_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'camera_info' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'camera_info' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::GetCalibrationCam::Response& msg) {
    auto outArray = factory.createStructArray({1,1},{"is_set","camera_info"});
    // is_set
    outArray[0]["is_set"] = factory.createScalar(static_cast<bool>(msg.is_set));
    // camera_info
    outArray[0]["camera_info"] = get_arr_sensor_msgs_CameraInfo(factory, msg.camera_info);
    return std::move(outArray);
  }
} //namespace GetCalibrationCam_Response
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/DebugColorDetectionResponse
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
#include "niryo_one_msgs/DebugColorDetectionResponse.h"
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
namespace DebugColorDetectionResponse {
  void copy_from_arr_sensor_msgs_CompressedImage(sensor_msgs::CompressedImage& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_sensor_msgs_CompressedImage(MDFactory_T& factory, const niryo_one_msgs::DebugColorDetectionResponse::_img_type& val);
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const sensor_msgs::CompressedImage::_header_type& val);
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val);
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
  MDArray_T get_arr_sensor_msgs_CompressedImage(MDFactory_T& factory, const niryo_one_msgs::DebugColorDetectionResponse::_img_type& val) {
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
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<niryo_one_msgs::DebugColorDetectionResponse>& msg, const matlab::data::StructArray arr) {
    try {
        //img
        const matlab::data::StructArray img_arr = arr[0]["img"];
        copy_from_arr_sensor_msgs_CompressedImage(msg->img,img_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'img' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'img' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const niryo_one_msgs::DebugColorDetectionResponse>& msg) {
    auto outArray = factory.createStructArray({1,1},{"img"});
    // img
    outArray[0]["img"] = get_arr_sensor_msgs_CompressedImage(factory, msg->img);
    return std::move(outArray);
  }
} //namespace DebugColorDetectionResponse
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
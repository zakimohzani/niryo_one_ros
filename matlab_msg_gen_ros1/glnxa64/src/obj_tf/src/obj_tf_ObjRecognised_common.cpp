// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for obj_tf/ObjRecognised
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
#include "obj_tf/ObjRecognised.h"
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
namespace obj_tf {
namespace matlabhelper {
namespace ObjRecognised {
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const obj_tf::ObjRecognised::_detectedTime_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr) {
    // _ros_Time.sec
    try {
        const matlab::data::TypedArray<uint32_t> _detectedTimesec_arr = arr[0]["sec"];
        val.sec = _detectedTimesec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sec' is wrong type; expected a uint32.");
    }
    // _ros_Time.nsec
    try {
        const matlab::data::TypedArray<uint32_t> _detectedTimensec_arr = arr[0]["nsec"];
        val.nsec = _detectedTimensec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nsec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'nsec' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const obj_tf::ObjRecognised::_detectedTime_type& val) {
    auto _detectedTimeoutArray = factory.createStructArray({1,1},{"sec","nsec"});
    // _ros_Time.sec
    _detectedTimeoutArray[0]["sec"] = factory.createScalar(val.sec);
    // _ros_Time.nsec
    _detectedTimeoutArray[0]["nsec"] = factory.createScalar(val.nsec);
    return std::move(_detectedTimeoutArray);
  }
  //----------------------------------------------------------------------------
  OBJ_TF_EXPORT void copy_from_arr(boost::shared_ptr<obj_tf::ObjRecognised>& msg, const matlab::data::StructArray arr) {
    try {
        //detectedTime
        const matlab::data::StructArray detectedTime_arr = arr[0]["detectedTime"];
        copy_from_arr_ros_Time(msg->detectedTime,detectedTime_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'detectedTime' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'detectedTime' is wrong type; expected a struct.");
    }
    try {
        //x
        const matlab::data::TypedArray<float> x_arr = arr[0]["x"];
        msg->x = x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a single.");
    }
    try {
        //y
        const matlab::data::TypedArray<float> y_arr = arr[0]["y"];
        msg->y = y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a single.");
    }
    try {
        //z
        const matlab::data::TypedArray<float> z_arr = arr[0]["z"];
        msg->z = z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  OBJ_TF_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const obj_tf::ObjRecognised>& msg) {
    auto outArray = factory.createStructArray({1,1},{"detectedTime","x","y","z"});
    // detectedTime
    outArray[0]["detectedTime"] = get_arr_ros_Time(factory, msg->detectedTime);
    // x
    outArray[0]["x"] = factory.createScalar(msg->x);
    // y
    outArray[0]["y"] = factory.createScalar(msg->y);
    // z
    outArray[0]["z"] = factory.createScalar(msg->z);
    return std::move(outArray);
  }
} //namespace ObjRecognised
} //namespace matlabhelper
} //namespace obj_tf
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
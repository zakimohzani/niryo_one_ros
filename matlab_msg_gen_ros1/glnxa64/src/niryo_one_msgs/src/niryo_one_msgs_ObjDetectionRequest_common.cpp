// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/ObjDetectionRequest
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
#include "niryo_one_msgs/ObjDetectionRequest.h"
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
namespace ObjDetectionRequest {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<niryo_one_msgs::ObjDetectionRequest>& msg, const matlab::data::StructArray arr) {
    try {
        //obj_type
        const matlab::data::CharArray obj_type_arr = arr[0]["obj_type"];
        msg->obj_type = obj_type_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'obj_type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'obj_type' is wrong type; expected a string.");
    }
    try {
        //obj_color
        const matlab::data::CharArray obj_color_arr = arr[0]["obj_color"];
        msg->obj_color = obj_color_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'obj_color' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'obj_color' is wrong type; expected a string.");
    }
    try {
        //workspace_ratio
        const matlab::data::TypedArray<float> workspace_ratio_arr = arr[0]["workspace_ratio"];
        msg->workspace_ratio = workspace_ratio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'workspace_ratio' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'workspace_ratio' is wrong type; expected a single.");
    }
    try {
        //ret_image
        const matlab::data::TypedArray<bool> ret_image_arr = arr[0]["ret_image"];
        msg->ret_image = ret_image_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ret_image' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'ret_image' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const niryo_one_msgs::ObjDetectionRequest>& msg) {
    auto outArray = factory.createStructArray({1,1},{"obj_type","obj_color","workspace_ratio","ret_image"});
    // obj_type
    outArray[0]["obj_type"] = factory.createCharArray(msg->obj_type);
    // obj_color
    outArray[0]["obj_color"] = factory.createCharArray(msg->obj_color);
    // workspace_ratio
    outArray[0]["workspace_ratio"] = factory.createScalar(msg->workspace_ratio);
    // ret_image
    outArray[0]["ret_image"] = factory.createScalar(static_cast<bool>(msg->ret_image));
    return std::move(outArray);
  }
} //namespace ObjDetectionRequest
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
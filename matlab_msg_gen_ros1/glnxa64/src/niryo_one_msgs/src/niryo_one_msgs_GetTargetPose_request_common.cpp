// Copyright 2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/GetTargetPoseRequest
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
#include "niryo_one_msgs/GetTargetPose.h"
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
namespace GetTargetPose_Request {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::GetTargetPose::Request& msg, const matlab::data::StructArray arr) {
    try {
        //workspace
        const matlab::data::CharArray workspace_arr = arr[0]["workspace"];
        msg.workspace = workspace_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'workspace' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'workspace' is wrong type; expected a string.");
    }
    try {
        //grip
        const matlab::data::CharArray grip_arr = arr[0]["grip"];
        msg.grip = grip_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'grip' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'grip' is wrong type; expected a string.");
    }
    try {
        //tool_id
        const matlab::data::TypedArray<int32_t> tool_id_arr = arr[0]["tool_id"];
        msg.tool_id = tool_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tool_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'tool_id' is wrong type; expected a int32.");
    }
    try {
        //height_offset
        const matlab::data::TypedArray<float> height_offset_arr = arr[0]["height_offset"];
        msg.height_offset = height_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'height_offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'height_offset' is wrong type; expected a single.");
    }
    try {
        //x_rel
        const matlab::data::TypedArray<float> x_rel_arr = arr[0]["x_rel"];
        msg.x_rel = x_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_rel' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x_rel' is wrong type; expected a single.");
    }
    try {
        //y_rel
        const matlab::data::TypedArray<float> y_rel_arr = arr[0]["y_rel"];
        msg.y_rel = y_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_rel' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y_rel' is wrong type; expected a single.");
    }
    try {
        //yaw_rel
        const matlab::data::TypedArray<float> yaw_rel_arr = arr[0]["yaw_rel"];
        msg.yaw_rel = yaw_rel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw_rel' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'yaw_rel' is wrong type; expected a single.");
    }
  }
  NIRYO_ONE_MSGS_EXPORT int64_t get_requestId_from_arr(const matlab::data::StructArray arr) {
    // Get the request ID
    int64_t requestId = 0;
    try {
        // data
        const matlab::data::TypedArray<int64_t> data_arr = arr[0]["requestId"];
        requestId = data_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'requestId' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'requestId' is wrong type; expected a int64.");
    }
    return requestId;
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::GetTargetPose::Request& msg) {
    auto outArray = factory.createStructArray({1,1},{"GRIP_AUTO","workspace","grip","tool_id","height_offset","x_rel","y_rel","yaw_rel"});
    // GRIP_AUTO
    outArray[0]["GRIP_AUTO"] = factory.createCharArray(msg.GRIP_AUTO);
    // workspace
    outArray[0]["workspace"] = factory.createCharArray(msg.workspace);
    // grip
    outArray[0]["grip"] = factory.createCharArray(msg.grip);
    // tool_id
    outArray[0]["tool_id"] = factory.createScalar(msg.tool_id);
    // height_offset
    outArray[0]["height_offset"] = factory.createScalar(msg.height_offset);
    // x_rel
    outArray[0]["x_rel"] = factory.createScalar(msg.x_rel);
    // y_rel
    outArray[0]["y_rel"] = factory.createScalar(msg.y_rel);
    // yaw_rel
    outArray[0]["yaw_rel"] = factory.createScalar(msg.yaw_rel);
    return std::move(outArray);
  }
} //namespace GetTargetPose_Request
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
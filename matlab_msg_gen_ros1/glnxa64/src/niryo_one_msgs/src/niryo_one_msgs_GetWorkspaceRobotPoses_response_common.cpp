// Copyright 2020 The MathWorks, Inc.
// Common copy functions of server for niryo_one_msgs/GetWorkspaceRobotPosesResponse
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
#include "niryo_one_msgs/GetWorkspaceRobotPoses.h"
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
namespace GetWorkspaceRobotPoses_Response {
  void copy_from_arr_niryo_one_msgs_RobotState(niryo_one_msgs::RobotState& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_niryo_one_msgs_RobotState(MDFactory_T& factory, const niryo_one_msgs::GetWorkspaceRobotPoses::Response::_pose_origin_type& val);
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const niryo_one_msgs::RobotState::_position_type& val);
  void copy_from_arr_niryo_one_msgs_RPY(niryo_one_msgs::RPY& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_niryo_one_msgs_RPY(MDFactory_T& factory, const niryo_one_msgs::RobotState::_rpy_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_niryo_one_msgs_RobotState(niryo_one_msgs::RobotState& val, const matlab::data::StructArray& arr) {
    // _niryo_one_msgs_RobotState.position
    try {
        const matlab::data::StructArray _pose_originposition_arr = arr[0]["position"];
        copy_from_arr_geometry_msgs_Point(val.position,_pose_originposition_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'position' is wrong type; expected a struct.");
    }
    // _niryo_one_msgs_RobotState.rpy
    try {
        const matlab::data::StructArray _pose_originrpy_arr = arr[0]["rpy"];
        copy_from_arr_niryo_one_msgs_RPY(val.rpy,_pose_originrpy_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rpy' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'rpy' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_niryo_one_msgs_RobotState(MDFactory_T& factory, const niryo_one_msgs::GetWorkspaceRobotPoses::Response::_pose_origin_type& val) {
    auto _pose_originoutArray = factory.createStructArray({1,1},{"position","rpy"});
    // _niryo_one_msgs_RobotState.position
    _pose_originoutArray[0]["position"] = get_arr_geometry_msgs_Point(factory, val.position);
    // _niryo_one_msgs_RobotState.rpy
    _pose_originoutArray[0]["rpy"] = get_arr_niryo_one_msgs_RPY(factory, val.rpy);
    return std::move(_pose_originoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Point.x
    try {
        const matlab::data::TypedArray<double> _pose_origin_positionx_arr = arr[0]["x"];
        val.x = _pose_origin_positionx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.y
    try {
        const matlab::data::TypedArray<double> _pose_origin_positiony_arr = arr[0]["y"];
        val.y = _pose_origin_positiony_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.z
    try {
        const matlab::data::TypedArray<double> _pose_origin_positionz_arr = arr[0]["z"];
        val.z = _pose_origin_positionz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const niryo_one_msgs::RobotState::_position_type& val) {
    auto _pose_origin_positionoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // _geometry_msgs_Point.x
    _pose_origin_positionoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Point.y
    _pose_origin_positionoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Point.z
    _pose_origin_positionoutArray[0]["z"] = factory.createScalar(val.z);
    return std::move(_pose_origin_positionoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_niryo_one_msgs_RPY(niryo_one_msgs::RPY& val, const matlab::data::StructArray& arr) {
    // _niryo_one_msgs_RPY.roll
    try {
        const matlab::data::TypedArray<double> _pose_origin_rpyroll_arr = arr[0]["roll"];
        val.roll = _pose_origin_rpyroll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roll' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roll' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_RPY.pitch
    try {
        const matlab::data::TypedArray<double> _pose_origin_rpypitch_arr = arr[0]["pitch"];
        val.pitch = _pose_origin_rpypitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pitch' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_RPY.yaw
    try {
        const matlab::data::TypedArray<double> _pose_origin_rpyyaw_arr = arr[0]["yaw"];
        val.yaw = _pose_origin_rpyyaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_niryo_one_msgs_RPY(MDFactory_T& factory, const niryo_one_msgs::RobotState::_rpy_type& val) {
    auto _pose_origin_rpyoutArray = factory.createStructArray({1,1},{"roll","pitch","yaw"});
    // _niryo_one_msgs_RPY.roll
    _pose_origin_rpyoutArray[0]["roll"] = factory.createScalar(val.roll);
    // _niryo_one_msgs_RPY.pitch
    _pose_origin_rpyoutArray[0]["pitch"] = factory.createScalar(val.pitch);
    // _niryo_one_msgs_RPY.yaw
    _pose_origin_rpyoutArray[0]["yaw"] = factory.createScalar(val.yaw);
    return std::move(_pose_origin_rpyoutArray);
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::GetWorkspaceRobotPoses::Response& msg, const matlab::data::StructArray arr) {
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
        //message
        const matlab::data::CharArray message_arr = arr[0]["message"];
        msg.message = message_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'message' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'message' is wrong type; expected a string.");
    }
    try {
        //pose_origin
        const matlab::data::StructArray pose_origin_arr = arr[0]["pose_origin"];
        copy_from_arr_niryo_one_msgs_RobotState(msg.pose_origin,pose_origin_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pose_origin' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pose_origin' is wrong type; expected a struct.");
    }
    try {
        //pose_1
        const matlab::data::StructArray pose_1_arr = arr[0]["pose_1"];
        copy_from_arr_niryo_one_msgs_RobotState(msg.pose_1,pose_1_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pose_1' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pose_1' is wrong type; expected a struct.");
    }
    try {
        //pose_2
        const matlab::data::StructArray pose_2_arr = arr[0]["pose_2"];
        copy_from_arr_niryo_one_msgs_RobotState(msg.pose_2,pose_2_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pose_2' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pose_2' is wrong type; expected a struct.");
    }
    try {
        //pose_3
        const matlab::data::StructArray pose_3_arr = arr[0]["pose_3"];
        copy_from_arr_niryo_one_msgs_RobotState(msg.pose_3,pose_3_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pose_3' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pose_3' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::GetWorkspaceRobotPoses::Response& msg) {
    auto outArray = factory.createStructArray({1,1},{"status","message","pose_origin","pose_1","pose_2","pose_3"});
    // status
    outArray[0]["status"] = factory.createScalar(msg.status);
    // message
    outArray[0]["message"] = factory.createCharArray(msg.message);
    // pose_origin
    outArray[0]["pose_origin"] = get_arr_niryo_one_msgs_RobotState(factory, msg.pose_origin);
    // pose_1
    outArray[0]["pose_1"] = get_arr_niryo_one_msgs_RobotState(factory, msg.pose_1);
    // pose_2
    outArray[0]["pose_2"] = get_arr_niryo_one_msgs_RobotState(factory, msg.pose_2);
    // pose_3
    outArray[0]["pose_3"] = get_arr_niryo_one_msgs_RobotState(factory, msg.pose_3);
    return std::move(outArray);
  }
} //namespace GetWorkspaceRobotPoses_Response
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
// Copyright 2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/EditGripRequest
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
#include "niryo_one_msgs/EditGrip.h"
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
namespace EditGrip_Request {
  void copy_from_arr_niryo_one_msgs_RobotState(niryo_one_msgs::RobotState& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_niryo_one_msgs_RobotState(MDFactory_T& factory, const niryo_one_msgs::EditGrip::Request::_robot_pose_type& val);
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const niryo_one_msgs::RobotState::_position_type& val);
  void copy_from_arr_niryo_one_msgs_RPY(niryo_one_msgs::RPY& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_niryo_one_msgs_RPY(MDFactory_T& factory, const niryo_one_msgs::RobotState::_rpy_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_niryo_one_msgs_RobotState(niryo_one_msgs::RobotState& val, const matlab::data::StructArray& arr) {
    // _niryo_one_msgs_RobotState.position
    try {
        const matlab::data::StructArray _robot_poseposition_arr = arr[0]["position"];
        copy_from_arr_geometry_msgs_Point(val.position,_robot_poseposition_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'position' is wrong type; expected a struct.");
    }
    // _niryo_one_msgs_RobotState.rpy
    try {
        const matlab::data::StructArray _robot_poserpy_arr = arr[0]["rpy"];
        copy_from_arr_niryo_one_msgs_RPY(val.rpy,_robot_poserpy_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rpy' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'rpy' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_niryo_one_msgs_RobotState(MDFactory_T& factory, const niryo_one_msgs::EditGrip::Request::_robot_pose_type& val) {
    auto _robot_poseoutArray = factory.createStructArray({1,1},{"position","rpy"});
    // _niryo_one_msgs_RobotState.position
    _robot_poseoutArray[0]["position"] = get_arr_geometry_msgs_Point(factory, val.position);
    // _niryo_one_msgs_RobotState.rpy
    _robot_poseoutArray[0]["rpy"] = get_arr_niryo_one_msgs_RPY(factory, val.rpy);
    return std::move(_robot_poseoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Point.x
    try {
        const matlab::data::TypedArray<double> _robot_pose_positionx_arr = arr[0]["x"];
        val.x = _robot_pose_positionx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.y
    try {
        const matlab::data::TypedArray<double> _robot_pose_positiony_arr = arr[0]["y"];
        val.y = _robot_pose_positiony_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.z
    try {
        const matlab::data::TypedArray<double> _robot_pose_positionz_arr = arr[0]["z"];
        val.z = _robot_pose_positionz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const niryo_one_msgs::RobotState::_position_type& val) {
    auto _robot_pose_positionoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // _geometry_msgs_Point.x
    _robot_pose_positionoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Point.y
    _robot_pose_positionoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Point.z
    _robot_pose_positionoutArray[0]["z"] = factory.createScalar(val.z);
    return std::move(_robot_pose_positionoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_niryo_one_msgs_RPY(niryo_one_msgs::RPY& val, const matlab::data::StructArray& arr) {
    // _niryo_one_msgs_RPY.roll
    try {
        const matlab::data::TypedArray<double> _robot_pose_rpyroll_arr = arr[0]["roll"];
        val.roll = _robot_pose_rpyroll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roll' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roll' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_RPY.pitch
    try {
        const matlab::data::TypedArray<double> _robot_pose_rpypitch_arr = arr[0]["pitch"];
        val.pitch = _robot_pose_rpypitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pitch' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_RPY.yaw
    try {
        const matlab::data::TypedArray<double> _robot_pose_rpyyaw_arr = arr[0]["yaw"];
        val.yaw = _robot_pose_rpyyaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_niryo_one_msgs_RPY(MDFactory_T& factory, const niryo_one_msgs::RobotState::_rpy_type& val) {
    auto _robot_pose_rpyoutArray = factory.createStructArray({1,1},{"roll","pitch","yaw"});
    // _niryo_one_msgs_RPY.roll
    _robot_pose_rpyoutArray[0]["roll"] = factory.createScalar(val.roll);
    // _niryo_one_msgs_RPY.pitch
    _robot_pose_rpyoutArray[0]["pitch"] = factory.createScalar(val.pitch);
    // _niryo_one_msgs_RPY.yaw
    _robot_pose_rpyoutArray[0]["yaw"] = factory.createScalar(val.yaw);
    return std::move(_robot_pose_rpyoutArray);
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::EditGrip::Request& msg, const matlab::data::StructArray arr) {
    try {
        //cmd
        const matlab::data::TypedArray<int32_t> cmd_arr = arr[0]["cmd"];
        msg.cmd = cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cmd' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'cmd' is wrong type; expected a int32.");
    }
    try {
        //name
        const matlab::data::CharArray name_arr = arr[0]["name"];
        msg.name = name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
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
        //robot_pose
        const matlab::data::StructArray robot_pose_arr = arr[0]["robot_pose"];
        copy_from_arr_niryo_one_msgs_RobotState(msg.robot_pose,robot_pose_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'robot_pose' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'robot_pose' is wrong type; expected a struct.");
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
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::EditGrip::Request& msg) {
    auto outArray = factory.createStructArray({1,1},{"CREATE","REMOVE","cmd","name","workspace","robot_pose"});
    // CREATE
    outArray[0]["CREATE"] = factory.createScalar(static_cast<int32_t>(msg.CREATE));
    // REMOVE
    outArray[0]["REMOVE"] = factory.createScalar(static_cast<int32_t>(msg.REMOVE));
    // cmd
    outArray[0]["cmd"] = factory.createScalar(msg.cmd);
    // name
    outArray[0]["name"] = factory.createCharArray(msg.name);
    // workspace
    outArray[0]["workspace"] = factory.createCharArray(msg.workspace);
    // robot_pose
    outArray[0]["robot_pose"] = get_arr_niryo_one_msgs_RobotState(factory, msg.robot_pose);
    return std::move(outArray);
  }
} //namespace EditGrip_Request
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
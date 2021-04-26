// Copyright 2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/ManagePositionRequest
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
#include "niryo_one_msgs/ManagePosition.h"
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
namespace ManagePosition_Request {
  void copy_from_arr_niryo_one_msgs_Position(niryo_one_msgs::Position& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_niryo_one_msgs_Position(MDFactory_T& factory, const niryo_one_msgs::ManagePosition::Request::_position_type& val);
  void copy_from_arr_niryo_one_msgs_RPY(niryo_one_msgs::RPY& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_niryo_one_msgs_RPY(MDFactory_T& factory, const niryo_one_msgs::Position::_rpy_type& val);
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const niryo_one_msgs::Position::_point_type& val);
  void copy_from_arr_geometry_msgs_Quaternion(geometry_msgs::Quaternion& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geometry_msgs_Quaternion(MDFactory_T& factory, const niryo_one_msgs::Position::_quaternion_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_niryo_one_msgs_Position(niryo_one_msgs::Position& val, const matlab::data::StructArray& arr) {
    // _niryo_one_msgs_Position.name
    try {
        const matlab::data::CharArray _positionname_arr = arr[0]["name"];
        val.name = _positionname_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    // _niryo_one_msgs_Position.joints
    try {
        const matlab::data::TypedArray<double> _positionjoints_arr = arr[0]["joints"];
        size_t nelem = _positionjoints_arr.getNumberOfElements();
        	val.joints.resize(nelem);
        	std::copy(_positionjoints_arr.begin(), _positionjoints_arr.begin()+nelem, val.joints.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'joints' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'joints' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_Position.rpy
    try {
        const matlab::data::StructArray _positionrpy_arr = arr[0]["rpy"];
        copy_from_arr_niryo_one_msgs_RPY(val.rpy,_positionrpy_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rpy' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'rpy' is wrong type; expected a struct.");
    }
    // _niryo_one_msgs_Position.point
    try {
        const matlab::data::StructArray _positionpoint_arr = arr[0]["point"];
        copy_from_arr_geometry_msgs_Point(val.point,_positionpoint_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'point' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'point' is wrong type; expected a struct.");
    }
    // _niryo_one_msgs_Position.quaternion
    try {
        const matlab::data::StructArray _positionquaternion_arr = arr[0]["quaternion"];
        copy_from_arr_geometry_msgs_Quaternion(val.quaternion,_positionquaternion_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'quaternion' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'quaternion' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_niryo_one_msgs_Position(MDFactory_T& factory, const niryo_one_msgs::ManagePosition::Request::_position_type& val) {
    auto _positionoutArray = factory.createStructArray({1,1},{"name","joints","rpy","point","quaternion"});
    // _niryo_one_msgs_Position.name
    _positionoutArray[0]["name"] = factory.createCharArray(val.name);
    // _niryo_one_msgs_Position.joints
    _positionoutArray[0]["joints"] = factory.createArray<niryo_one_msgs::Position::_joints_type::const_iterator, double>({1, val.joints.size()}, val.joints.begin(), val.joints.end());
    // _niryo_one_msgs_Position.rpy
    _positionoutArray[0]["rpy"] = get_arr_niryo_one_msgs_RPY(factory, val.rpy);
    // _niryo_one_msgs_Position.point
    _positionoutArray[0]["point"] = get_arr_geometry_msgs_Point(factory, val.point);
    // _niryo_one_msgs_Position.quaternion
    _positionoutArray[0]["quaternion"] = get_arr_geometry_msgs_Quaternion(factory, val.quaternion);
    return std::move(_positionoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_niryo_one_msgs_RPY(niryo_one_msgs::RPY& val, const matlab::data::StructArray& arr) {
    // _niryo_one_msgs_RPY.roll
    try {
        const matlab::data::TypedArray<double> _position_rpyroll_arr = arr[0]["roll"];
        val.roll = _position_rpyroll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roll' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roll' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_RPY.pitch
    try {
        const matlab::data::TypedArray<double> _position_rpypitch_arr = arr[0]["pitch"];
        val.pitch = _position_rpypitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pitch' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_RPY.yaw
    try {
        const matlab::data::TypedArray<double> _position_rpyyaw_arr = arr[0]["yaw"];
        val.yaw = _position_rpyyaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_niryo_one_msgs_RPY(MDFactory_T& factory, const niryo_one_msgs::Position::_rpy_type& val) {
    auto _position_rpyoutArray = factory.createStructArray({1,1},{"roll","pitch","yaw"});
    // _niryo_one_msgs_RPY.roll
    _position_rpyoutArray[0]["roll"] = factory.createScalar(val.roll);
    // _niryo_one_msgs_RPY.pitch
    _position_rpyoutArray[0]["pitch"] = factory.createScalar(val.pitch);
    // _niryo_one_msgs_RPY.yaw
    _position_rpyoutArray[0]["yaw"] = factory.createScalar(val.yaw);
    return std::move(_position_rpyoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Point.x
    try {
        const matlab::data::TypedArray<double> _position_pointx_arr = arr[0]["x"];
        val.x = _position_pointx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.y
    try {
        const matlab::data::TypedArray<double> _position_pointy_arr = arr[0]["y"];
        val.y = _position_pointy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.z
    try {
        const matlab::data::TypedArray<double> _position_pointz_arr = arr[0]["z"];
        val.z = _position_pointz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const niryo_one_msgs::Position::_point_type& val) {
    auto _position_pointoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // _geometry_msgs_Point.x
    _position_pointoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Point.y
    _position_pointoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Point.z
    _position_pointoutArray[0]["z"] = factory.createScalar(val.z);
    return std::move(_position_pointoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Quaternion(geometry_msgs::Quaternion& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Quaternion.x
    try {
        const matlab::data::TypedArray<double> _position_quaternionx_arr = arr[0]["x"];
        val.x = _position_quaternionx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Quaternion.y
    try {
        const matlab::data::TypedArray<double> _position_quaterniony_arr = arr[0]["y"];
        val.y = _position_quaterniony_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Quaternion.z
    try {
        const matlab::data::TypedArray<double> _position_quaternionz_arr = arr[0]["z"];
        val.z = _position_quaternionz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
    // _geometry_msgs_Quaternion.w
    try {
        const matlab::data::TypedArray<double> _position_quaternionw_arr = arr[0]["w"];
        val.w = _position_quaternionw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'w' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'w' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Quaternion(MDFactory_T& factory, const niryo_one_msgs::Position::_quaternion_type& val) {
    auto _position_quaternionoutArray = factory.createStructArray({1,1},{"x","y","z","w"});
    // _geometry_msgs_Quaternion.x
    _position_quaternionoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Quaternion.y
    _position_quaternionoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Quaternion.z
    _position_quaternionoutArray[0]["z"] = factory.createScalar(val.z);
    // _geometry_msgs_Quaternion.w
    _position_quaternionoutArray[0]["w"] = factory.createScalar(val.w);
    return std::move(_position_quaternionoutArray);
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::ManagePosition::Request& msg, const matlab::data::StructArray arr) {
    try {
        //cmd_type
        const matlab::data::TypedArray<int32_t> cmd_type_arr = arr[0]["cmd_type"];
        msg.cmd_type = cmd_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cmd_type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'cmd_type' is wrong type; expected a int32.");
    }
    try {
        //position_name
        const matlab::data::CharArray position_name_arr = arr[0]["position_name"];
        msg.position_name = position_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position_name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'position_name' is wrong type; expected a string.");
    }
    try {
        //position
        const matlab::data::StructArray position_arr = arr[0]["position"];
        copy_from_arr_niryo_one_msgs_Position(msg.position,position_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'position' is wrong type; expected a struct.");
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
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::ManagePosition::Request& msg) {
    auto outArray = factory.createStructArray({1,1},{"cmd_type","position_name","position"});
    // cmd_type
    outArray[0]["cmd_type"] = factory.createScalar(msg.cmd_type);
    // position_name
    outArray[0]["position_name"] = factory.createCharArray(msg.position_name);
    // position
    outArray[0]["position"] = get_arr_niryo_one_msgs_Position(factory, msg.position);
    return std::move(outArray);
  }
} //namespace ManagePosition_Request
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
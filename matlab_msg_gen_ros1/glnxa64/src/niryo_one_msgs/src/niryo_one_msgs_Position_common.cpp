// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/Position
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
#include "niryo_one_msgs/Position.h"
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
namespace Position {
  void copy_from_arr_niryo_one_msgs_RPY(niryo_one_msgs::RPY& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_niryo_one_msgs_RPY(MDFactory_T& factory, const niryo_one_msgs::Position::_rpy_type& val);
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const niryo_one_msgs::Position::_point_type& val);
  void copy_from_arr_geometry_msgs_Quaternion(geometry_msgs::Quaternion& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geometry_msgs_Quaternion(MDFactory_T& factory, const niryo_one_msgs::Position::_quaternion_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_niryo_one_msgs_RPY(niryo_one_msgs::RPY& val, const matlab::data::StructArray& arr) {
    // _niryo_one_msgs_RPY.roll
    try {
        const matlab::data::TypedArray<double> _rpyroll_arr = arr[0]["roll"];
        val.roll = _rpyroll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roll' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roll' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_RPY.pitch
    try {
        const matlab::data::TypedArray<double> _rpypitch_arr = arr[0]["pitch"];
        val.pitch = _rpypitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pitch' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_RPY.yaw
    try {
        const matlab::data::TypedArray<double> _rpyyaw_arr = arr[0]["yaw"];
        val.yaw = _rpyyaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_niryo_one_msgs_RPY(MDFactory_T& factory, const niryo_one_msgs::Position::_rpy_type& val) {
    auto _rpyoutArray = factory.createStructArray({1,1},{"roll","pitch","yaw"});
    // _niryo_one_msgs_RPY.roll
    _rpyoutArray[0]["roll"] = factory.createScalar(val.roll);
    // _niryo_one_msgs_RPY.pitch
    _rpyoutArray[0]["pitch"] = factory.createScalar(val.pitch);
    // _niryo_one_msgs_RPY.yaw
    _rpyoutArray[0]["yaw"] = factory.createScalar(val.yaw);
    return std::move(_rpyoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Point.x
    try {
        const matlab::data::TypedArray<double> _pointx_arr = arr[0]["x"];
        val.x = _pointx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.y
    try {
        const matlab::data::TypedArray<double> _pointy_arr = arr[0]["y"];
        val.y = _pointy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.z
    try {
        const matlab::data::TypedArray<double> _pointz_arr = arr[0]["z"];
        val.z = _pointz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const niryo_one_msgs::Position::_point_type& val) {
    auto _pointoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // _geometry_msgs_Point.x
    _pointoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Point.y
    _pointoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Point.z
    _pointoutArray[0]["z"] = factory.createScalar(val.z);
    return std::move(_pointoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Quaternion(geometry_msgs::Quaternion& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Quaternion.x
    try {
        const matlab::data::TypedArray<double> _quaternionx_arr = arr[0]["x"];
        val.x = _quaternionx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Quaternion.y
    try {
        const matlab::data::TypedArray<double> _quaterniony_arr = arr[0]["y"];
        val.y = _quaterniony_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Quaternion.z
    try {
        const matlab::data::TypedArray<double> _quaternionz_arr = arr[0]["z"];
        val.z = _quaternionz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
    // _geometry_msgs_Quaternion.w
    try {
        const matlab::data::TypedArray<double> _quaternionw_arr = arr[0]["w"];
        val.w = _quaternionw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'w' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'w' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Quaternion(MDFactory_T& factory, const niryo_one_msgs::Position::_quaternion_type& val) {
    auto _quaternionoutArray = factory.createStructArray({1,1},{"x","y","z","w"});
    // _geometry_msgs_Quaternion.x
    _quaternionoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Quaternion.y
    _quaternionoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Quaternion.z
    _quaternionoutArray[0]["z"] = factory.createScalar(val.z);
    // _geometry_msgs_Quaternion.w
    _quaternionoutArray[0]["w"] = factory.createScalar(val.w);
    return std::move(_quaternionoutArray);
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<niryo_one_msgs::Position>& msg, const matlab::data::StructArray arr) {
    try {
        //name
        const matlab::data::CharArray name_arr = arr[0]["name"];
        msg->name = name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    try {
        //joints
        const matlab::data::TypedArray<double> joints_arr = arr[0]["joints"];
        size_t nelem = joints_arr.getNumberOfElements();
        	msg->joints.resize(nelem);
        	std::copy(joints_arr.begin(), joints_arr.begin()+nelem, msg->joints.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'joints' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'joints' is wrong type; expected a double.");
    }
    try {
        //rpy
        const matlab::data::StructArray rpy_arr = arr[0]["rpy"];
        copy_from_arr_niryo_one_msgs_RPY(msg->rpy,rpy_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rpy' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'rpy' is wrong type; expected a struct.");
    }
    try {
        //point
        const matlab::data::StructArray point_arr = arr[0]["point"];
        copy_from_arr_geometry_msgs_Point(msg->point,point_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'point' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'point' is wrong type; expected a struct.");
    }
    try {
        //quaternion
        const matlab::data::StructArray quaternion_arr = arr[0]["quaternion"];
        copy_from_arr_geometry_msgs_Quaternion(msg->quaternion,quaternion_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'quaternion' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'quaternion' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const niryo_one_msgs::Position>& msg) {
    auto outArray = factory.createStructArray({1,1},{"name","joints","rpy","point","quaternion"});
    // name
    outArray[0]["name"] = factory.createCharArray(msg->name);
    // joints
    outArray[0]["joints"] = factory.createArray<niryo_one_msgs::Position::_joints_type::const_iterator, double>({1, msg->joints.size()}, msg->joints.begin(), msg->joints.end());
    // rpy
    outArray[0]["rpy"] = get_arr_niryo_one_msgs_RPY(factory, msg->rpy);
    // point
    outArray[0]["point"] = get_arr_geometry_msgs_Point(factory, msg->point);
    // quaternion
    outArray[0]["quaternion"] = get_arr_geometry_msgs_Quaternion(factory, msg->quaternion);
    return std::move(outArray);
  }
} //namespace Position
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
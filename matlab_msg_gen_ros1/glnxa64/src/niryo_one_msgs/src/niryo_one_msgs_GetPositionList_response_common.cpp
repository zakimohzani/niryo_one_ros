// Copyright 2020 The MathWorks, Inc.
// Common copy functions of server for niryo_one_msgs/GetPositionListResponse
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
#include "niryo_one_msgs/GetPositionList.h"
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
namespace GetPositionList_Response {
  void copy_from_arr_niryo_one_msgs_Position_var_arr(niryo_one_msgs::Position& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_niryo_one_msgs_Position_var_arr(MDFactory_T& factory, const niryo_one_msgs::GetPositionList::Response::_positions_type& val);
  void copy_from_arr_niryo_one_msgs_RPY(niryo_one_msgs::RPY& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_niryo_one_msgs_RPY(MDFactory_T& factory, const niryo_one_msgs::Position::_rpy_type& val);
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const niryo_one_msgs::Position::_point_type& val);
  void copy_from_arr_geometry_msgs_Quaternion(geometry_msgs::Quaternion& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geometry_msgs_Quaternion(MDFactory_T& factory, const niryo_one_msgs::Position::_quaternion_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_niryo_one_msgs_Position_var_arr(niryo_one_msgs::Position& val, const matlab::data::Struct& arr) {
    // _niryo_one_msgs_Position_var_arr.name
    try {
        const matlab::data::CharArray _positionsname_arr = arr["name"];
        val.name = _positionsname_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    // _niryo_one_msgs_Position_var_arr.joints
    try {
        const matlab::data::TypedArray<double> _positionsjoints_arr = arr["joints"];
        size_t nelem = _positionsjoints_arr.getNumberOfElements();
        	val.joints.resize(nelem);
        	std::copy(_positionsjoints_arr.begin(), _positionsjoints_arr.begin()+nelem, val.joints.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'joints' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'joints' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_Position_var_arr.rpy
    try {
        const matlab::data::StructArray _positionsrpy_arr = arr["rpy"];
        copy_from_arr_niryo_one_msgs_RPY(val.rpy,_positionsrpy_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rpy' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'rpy' is wrong type; expected a struct.");
    }
    // _niryo_one_msgs_Position_var_arr.point
    try {
        const matlab::data::StructArray _positionspoint_arr = arr["point"];
        copy_from_arr_geometry_msgs_Point(val.point,_positionspoint_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'point' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'point' is wrong type; expected a struct.");
    }
    // _niryo_one_msgs_Position_var_arr.quaternion
    try {
        const matlab::data::StructArray _positionsquaternion_arr = arr["quaternion"];
        copy_from_arr_geometry_msgs_Quaternion(val.quaternion,_positionsquaternion_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'quaternion' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'quaternion' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_niryo_one_msgs_Position_var_arr(MDFactory_T& factory, const niryo_one_msgs::GetPositionList::Response::_positions_type& val) {
    auto _positionsoutArray = factory.createStructArray({1,val.size()},{"name","joints","rpy","point","quaternion"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _niryo_one_msgs_Position_var_arr.name
    	_positionsoutArray[idx]["name"] = factory.createCharArray(val[idx].name);
    // _niryo_one_msgs_Position_var_arr.joints
    	_positionsoutArray[idx]["joints"] = factory.createArray<niryo_one_msgs::Position::_joints_type::const_iterator, double>({1, val[idx].joints.size()}, val[idx].joints.begin(), val[idx].joints.end());
    // _niryo_one_msgs_Position_var_arr.rpy
    _positionsoutArray[idx]["rpy"] = get_arr_niryo_one_msgs_RPY(factory, val[idx].rpy);
    // _niryo_one_msgs_Position_var_arr.point
    _positionsoutArray[idx]["point"] = get_arr_geometry_msgs_Point(factory, val[idx].point);
    // _niryo_one_msgs_Position_var_arr.quaternion
    _positionsoutArray[idx]["quaternion"] = get_arr_geometry_msgs_Quaternion(factory, val[idx].quaternion);
    }
    return std::move(_positionsoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_niryo_one_msgs_RPY(niryo_one_msgs::RPY& val, const matlab::data::StructArray& arr) {
    // _niryo_one_msgs_RPY.roll
    try {
        const matlab::data::TypedArray<double> _positions_rpyroll_arr = arr[0]["roll"];
        val.roll = _positions_rpyroll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roll' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'roll' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_RPY.pitch
    try {
        const matlab::data::TypedArray<double> _positions_rpypitch_arr = arr[0]["pitch"];
        val.pitch = _positions_rpypitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pitch' is wrong type; expected a double.");
    }
    // _niryo_one_msgs_RPY.yaw
    try {
        const matlab::data::TypedArray<double> _positions_rpyyaw_arr = arr[0]["yaw"];
        val.yaw = _positions_rpyyaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_niryo_one_msgs_RPY(MDFactory_T& factory, const niryo_one_msgs::Position::_rpy_type& val) {
    auto _positions_rpyoutArray = factory.createStructArray({1,1},{"roll","pitch","yaw"});
    // _niryo_one_msgs_RPY.roll
    _positions_rpyoutArray[0]["roll"] = factory.createScalar(val.roll);
    // _niryo_one_msgs_RPY.pitch
    _positions_rpyoutArray[0]["pitch"] = factory.createScalar(val.pitch);
    // _niryo_one_msgs_RPY.yaw
    _positions_rpyoutArray[0]["yaw"] = factory.createScalar(val.yaw);
    return std::move(_positions_rpyoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Point.x
    try {
        const matlab::data::TypedArray<double> _positions_pointx_arr = arr[0]["x"];
        val.x = _positions_pointx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.y
    try {
        const matlab::data::TypedArray<double> _positions_pointy_arr = arr[0]["y"];
        val.y = _positions_pointy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.z
    try {
        const matlab::data::TypedArray<double> _positions_pointz_arr = arr[0]["z"];
        val.z = _positions_pointz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const niryo_one_msgs::Position::_point_type& val) {
    auto _positions_pointoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // _geometry_msgs_Point.x
    _positions_pointoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Point.y
    _positions_pointoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Point.z
    _positions_pointoutArray[0]["z"] = factory.createScalar(val.z);
    return std::move(_positions_pointoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Quaternion(geometry_msgs::Quaternion& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Quaternion.x
    try {
        const matlab::data::TypedArray<double> _positions_quaternionx_arr = arr[0]["x"];
        val.x = _positions_quaternionx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Quaternion.y
    try {
        const matlab::data::TypedArray<double> _positions_quaterniony_arr = arr[0]["y"];
        val.y = _positions_quaterniony_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Quaternion.z
    try {
        const matlab::data::TypedArray<double> _positions_quaternionz_arr = arr[0]["z"];
        val.z = _positions_quaternionz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
    // _geometry_msgs_Quaternion.w
    try {
        const matlab::data::TypedArray<double> _positions_quaternionw_arr = arr[0]["w"];
        val.w = _positions_quaternionw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'w' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'w' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Quaternion(MDFactory_T& factory, const niryo_one_msgs::Position::_quaternion_type& val) {
    auto _positions_quaternionoutArray = factory.createStructArray({1,1},{"x","y","z","w"});
    // _geometry_msgs_Quaternion.x
    _positions_quaternionoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Quaternion.y
    _positions_quaternionoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Quaternion.z
    _positions_quaternionoutArray[0]["z"] = factory.createScalar(val.z);
    // _geometry_msgs_Quaternion.w
    _positions_quaternionoutArray[0]["w"] = factory.createScalar(val.w);
    return std::move(_positions_quaternionoutArray);
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::GetPositionList::Response& msg, const matlab::data::StructArray arr) {
    try {
        //positions
        const matlab::data::StructArray positions_arr = arr[0]["positions"];
        for (auto _positionsarr : positions_arr) {
        	niryo_one_msgs::Position _val;
        	copy_from_arr_niryo_one_msgs_Position_var_arr(_val,_positionsarr);
        	msg.positions.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'positions' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'positions' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::GetPositionList::Response& msg) {
    auto outArray = factory.createStructArray({1,1},{"positions"});
    // positions
    outArray[0]["positions"] = get_arr_niryo_one_msgs_Position_var_arr(factory, msg.positions);
    return std::move(outArray);
  }
} //namespace GetPositionList_Response
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
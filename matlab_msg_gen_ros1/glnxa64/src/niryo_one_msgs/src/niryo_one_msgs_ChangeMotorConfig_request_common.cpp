// Copyright 2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/ChangeMotorConfigRequest
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
#include "niryo_one_msgs/ChangeMotorConfig.h"
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
namespace ChangeMotorConfig_Request {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::ChangeMotorConfig::Request& msg, const matlab::data::StructArray arr) {
    try {
        //can_required_motor_id_list
        const matlab::data::TypedArray<int32_t> can_required_motor_id_list_arr = arr[0]["can_required_motor_id_list"];
        size_t nelem = can_required_motor_id_list_arr.getNumberOfElements();
        	msg.can_required_motor_id_list.resize(nelem);
        	std::copy(can_required_motor_id_list_arr.begin(), can_required_motor_id_list_arr.begin()+nelem, msg.can_required_motor_id_list.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'can_required_motor_id_list' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'can_required_motor_id_list' is wrong type; expected a int32.");
    }
    try {
        //dxl_required_motor_id_list
        const matlab::data::TypedArray<int32_t> dxl_required_motor_id_list_arr = arr[0]["dxl_required_motor_id_list"];
        size_t nelem = dxl_required_motor_id_list_arr.getNumberOfElements();
        	msg.dxl_required_motor_id_list.resize(nelem);
        	std::copy(dxl_required_motor_id_list_arr.begin(), dxl_required_motor_id_list_arr.begin()+nelem, msg.dxl_required_motor_id_list.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dxl_required_motor_id_list' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'dxl_required_motor_id_list' is wrong type; expected a int32.");
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
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::ChangeMotorConfig::Request& msg) {
    auto outArray = factory.createStructArray({1,1},{"can_required_motor_id_list","dxl_required_motor_id_list"});
    // can_required_motor_id_list
    outArray[0]["can_required_motor_id_list"] = factory.createArray<niryo_one_msgs::ChangeMotorConfig::Request::_can_required_motor_id_list_type::const_iterator, int32_t>({1, msg.can_required_motor_id_list.size()}, msg.can_required_motor_id_list.begin(), msg.can_required_motor_id_list.end());
    // dxl_required_motor_id_list
    outArray[0]["dxl_required_motor_id_list"] = factory.createArray<niryo_one_msgs::ChangeMotorConfig::Request::_dxl_required_motor_id_list_type::const_iterator, int32_t>({1, msg.dxl_required_motor_id_list.size()}, msg.dxl_required_motor_id_list.begin(), msg.dxl_required_motor_id_list.end());
    return std::move(outArray);
  }
} //namespace ChangeMotorConfig_Request
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
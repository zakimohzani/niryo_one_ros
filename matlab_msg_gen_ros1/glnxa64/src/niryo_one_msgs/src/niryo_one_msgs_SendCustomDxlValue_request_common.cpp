// Copyright 2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/SendCustomDxlValueRequest
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
#include "niryo_one_msgs/SendCustomDxlValue.h"
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
namespace SendCustomDxlValue_Request {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::SendCustomDxlValue::Request& msg, const matlab::data::StructArray arr) {
    try {
        //motor_type
        const matlab::data::TypedArray<int32_t> motor_type_arr = arr[0]["motor_type"];
        msg.motor_type = motor_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'motor_type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'motor_type' is wrong type; expected a int32.");
    }
    try {
        //id
        const matlab::data::TypedArray<uint8_t> id_arr = arr[0]["id"];
        msg.id = id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a uint8.");
    }
    try {
        //value
        const matlab::data::TypedArray<int32_t> value_arr = arr[0]["value"];
        msg.value = value_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'value' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'value' is wrong type; expected a int32.");
    }
    try {
        //reg_address
        const matlab::data::TypedArray<int32_t> reg_address_arr = arr[0]["reg_address"];
        msg.reg_address = reg_address_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reg_address' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'reg_address' is wrong type; expected a int32.");
    }
    try {
        //byte_number
        const matlab::data::TypedArray<int32_t> byte_number_arr = arr[0]["byte_number"];
        msg.byte_number = byte_number_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'byte_number' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'byte_number' is wrong type; expected a int32.");
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
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::SendCustomDxlValue::Request& msg) {
    auto outArray = factory.createStructArray({1,1},{"motor_type","id","value","reg_address","byte_number"});
    // motor_type
    outArray[0]["motor_type"] = factory.createScalar(msg.motor_type);
    // id
    outArray[0]["id"] = factory.createScalar(msg.id);
    // value
    outArray[0]["value"] = factory.createScalar(msg.value);
    // reg_address
    outArray[0]["reg_address"] = factory.createScalar(msg.reg_address);
    // byte_number
    outArray[0]["byte_number"] = factory.createScalar(msg.byte_number);
    return std::move(outArray);
  }
} //namespace SendCustomDxlValue_Request
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
// Copyright 2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/UpdateConveyorIdRequest
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
#include "niryo_one_msgs/UpdateConveyorId.h"
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
namespace UpdateConveyorId_Request {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::UpdateConveyorId::Request& msg, const matlab::data::StructArray arr) {
    try {
        //old_id
        const matlab::data::TypedArray<uint8_t> old_id_arr = arr[0]["old_id"];
        msg.old_id = old_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'old_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'old_id' is wrong type; expected a uint8.");
    }
    try {
        //new_id
        const matlab::data::TypedArray<uint8_t> new_id_arr = arr[0]["new_id"];
        msg.new_id = new_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'new_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'new_id' is wrong type; expected a uint8.");
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
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::UpdateConveyorId::Request& msg) {
    auto outArray = factory.createStructArray({1,1},{"old_id","new_id"});
    // old_id
    outArray[0]["old_id"] = factory.createScalar(msg.old_id);
    // new_id
    outArray[0]["new_id"] = factory.createScalar(msg.new_id);
    return std::move(outArray);
  }
} //namespace UpdateConveyorId_Request
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
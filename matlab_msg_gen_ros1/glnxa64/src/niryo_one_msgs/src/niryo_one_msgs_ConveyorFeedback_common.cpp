// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/ConveyorFeedback
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
#include "niryo_one_msgs/ConveyorFeedback.h"
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
namespace ConveyorFeedback {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<niryo_one_msgs::ConveyorFeedback>& msg, const matlab::data::StructArray arr) {
    try {
        //conveyor_id
        const matlab::data::TypedArray<uint8_t> conveyor_id_arr = arr[0]["conveyor_id"];
        msg->conveyor_id = conveyor_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'conveyor_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'conveyor_id' is wrong type; expected a uint8.");
    }
    try {
        //connection_state
        const matlab::data::TypedArray<bool> connection_state_arr = arr[0]["connection_state"];
        msg->connection_state = connection_state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'connection_state' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'connection_state' is wrong type; expected a logical.");
    }
    try {
        //running
        const matlab::data::TypedArray<bool> running_arr = arr[0]["running"];
        msg->running = running_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'running' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'running' is wrong type; expected a logical.");
    }
    try {
        //speed
        const matlab::data::TypedArray<int16_t> speed_arr = arr[0]["speed"];
        msg->speed = speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'speed' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'speed' is wrong type; expected a int16.");
    }
    try {
        //direction
        const matlab::data::TypedArray<int8_t> direction_arr = arr[0]["direction"];
        msg->direction = direction_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'direction' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'direction' is wrong type; expected a int8.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const niryo_one_msgs::ConveyorFeedback>& msg) {
    auto outArray = factory.createStructArray({1,1},{"conveyor_id","connection_state","running","speed","direction"});
    // conveyor_id
    outArray[0]["conveyor_id"] = factory.createScalar(msg->conveyor_id);
    // connection_state
    outArray[0]["connection_state"] = factory.createScalar(static_cast<bool>(msg->connection_state));
    // running
    outArray[0]["running"] = factory.createScalar(static_cast<bool>(msg->running));
    // speed
    outArray[0]["speed"] = factory.createScalar(msg->speed);
    // direction
    outArray[0]["direction"] = factory.createScalar(msg->direction);
    return std::move(outArray);
  }
} //namespace ConveyorFeedback
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/PullAirVacuumPumpRequest
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
#include "niryo_one_msgs/PullAirVacuumPumpRequest.h"
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
namespace PullAirVacuumPumpRequest {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<niryo_one_msgs::PullAirVacuumPumpRequest>& msg, const matlab::data::StructArray arr) {
    try {
        //id
        const matlab::data::TypedArray<uint8_t> id_arr = arr[0]["id"];
        msg->id = id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a uint8.");
    }
    try {
        //pull_air_position
        const matlab::data::TypedArray<int16_t> pull_air_position_arr = arr[0]["pull_air_position"];
        msg->pull_air_position = pull_air_position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pull_air_position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pull_air_position' is wrong type; expected a int16.");
    }
    try {
        //pull_air_hold_torque
        const matlab::data::TypedArray<int16_t> pull_air_hold_torque_arr = arr[0]["pull_air_hold_torque"];
        msg->pull_air_hold_torque = pull_air_hold_torque_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pull_air_hold_torque' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pull_air_hold_torque' is wrong type; expected a int16.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const niryo_one_msgs::PullAirVacuumPumpRequest>& msg) {
    auto outArray = factory.createStructArray({1,1},{"id","pull_air_position","pull_air_hold_torque"});
    // id
    outArray[0]["id"] = factory.createScalar(msg->id);
    // pull_air_position
    outArray[0]["pull_air_position"] = factory.createScalar(msg->pull_air_position);
    // pull_air_hold_torque
    outArray[0]["pull_air_hold_torque"] = factory.createScalar(msg->pull_air_hold_torque);
    return std::move(outArray);
  }
} //namespace PullAirVacuumPumpRequest
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
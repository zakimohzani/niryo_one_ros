// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/ToolCommand
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
#include "niryo_one_msgs/ToolCommand.h"
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
namespace ToolCommand {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<niryo_one_msgs::ToolCommand>& msg, const matlab::data::StructArray arr) {
    try {
        //tool_id
        const matlab::data::TypedArray<uint8_t> tool_id_arr = arr[0]["tool_id"];
        msg->tool_id = tool_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tool_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'tool_id' is wrong type; expected a uint8.");
    }
    try {
        //cmd_type
        const matlab::data::TypedArray<uint8_t> cmd_type_arr = arr[0]["cmd_type"];
        msg->cmd_type = cmd_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cmd_type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'cmd_type' is wrong type; expected a uint8.");
    }
    try {
        //gripper_close_speed
        const matlab::data::TypedArray<uint16_t> gripper_close_speed_arr = arr[0]["gripper_close_speed"];
        msg->gripper_close_speed = gripper_close_speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gripper_close_speed' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'gripper_close_speed' is wrong type; expected a uint16.");
    }
    try {
        //gripper_open_speed
        const matlab::data::TypedArray<uint16_t> gripper_open_speed_arr = arr[0]["gripper_open_speed"];
        msg->gripper_open_speed = gripper_open_speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gripper_open_speed' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'gripper_open_speed' is wrong type; expected a uint16.");
    }
    try {
        //activate
        const matlab::data::TypedArray<bool> activate_arr = arr[0]["activate"];
        msg->activate = activate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'activate' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'activate' is wrong type; expected a logical.");
    }
    try {
        //gpio
        const matlab::data::TypedArray<uint8_t> gpio_arr = arr[0]["gpio"];
        msg->gpio = gpio_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gpio' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'gpio' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const niryo_one_msgs::ToolCommand>& msg) {
    auto outArray = factory.createStructArray({1,1},{"tool_id","cmd_type","gripper_close_speed","gripper_open_speed","activate","gpio"});
    // tool_id
    outArray[0]["tool_id"] = factory.createScalar(msg->tool_id);
    // cmd_type
    outArray[0]["cmd_type"] = factory.createScalar(msg->cmd_type);
    // gripper_close_speed
    outArray[0]["gripper_close_speed"] = factory.createScalar(msg->gripper_close_speed);
    // gripper_open_speed
    outArray[0]["gripper_open_speed"] = factory.createScalar(msg->gripper_open_speed);
    // activate
    outArray[0]["activate"] = factory.createScalar(static_cast<bool>(msg->activate));
    // gpio
    outArray[0]["gpio"] = factory.createScalar(msg->gpio);
    return std::move(outArray);
  }
} //namespace ToolCommand
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
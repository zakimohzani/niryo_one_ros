// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/SoftwareVersion
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
#include "niryo_one_msgs/SoftwareVersion.h"
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
namespace SoftwareVersion {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<niryo_one_msgs::SoftwareVersion>& msg, const matlab::data::StructArray arr) {
    try {
        //rpi_image_version
        const matlab::data::CharArray rpi_image_version_arr = arr[0]["rpi_image_version"];
        msg->rpi_image_version = rpi_image_version_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rpi_image_version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'rpi_image_version' is wrong type; expected a string.");
    }
    try {
        //ros_niryo_one_version
        const matlab::data::CharArray ros_niryo_one_version_arr = arr[0]["ros_niryo_one_version"];
        msg->ros_niryo_one_version = ros_niryo_one_version_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ros_niryo_one_version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'ros_niryo_one_version' is wrong type; expected a string.");
    }
    try {
        //motor_names
        const matlab::data::CellArray motor_names_cellarr = arr[0]["motor_names"];
        size_t nelem = motor_names_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray motor_names_arr = motor_names_cellarr[idx];
        	msg->motor_names.push_back(motor_names_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'motor_names' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'motor_names' is wrong type; expected a string.");
    }
    try {
        //stepper_firmware_versions
        const matlab::data::CellArray stepper_firmware_versions_cellarr = arr[0]["stepper_firmware_versions"];
        size_t nelem = stepper_firmware_versions_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray stepper_firmware_versions_arr = stepper_firmware_versions_cellarr[idx];
        	msg->stepper_firmware_versions.push_back(stepper_firmware_versions_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stepper_firmware_versions' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'stepper_firmware_versions' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const niryo_one_msgs::SoftwareVersion>& msg) {
    auto outArray = factory.createStructArray({1,1},{"rpi_image_version","ros_niryo_one_version","motor_names","stepper_firmware_versions"});
    // rpi_image_version
    outArray[0]["rpi_image_version"] = factory.createCharArray(msg->rpi_image_version);
    // ros_niryo_one_version
    outArray[0]["ros_niryo_one_version"] = factory.createCharArray(msg->ros_niryo_one_version);
    // motor_names
    auto motor_namesoutCell = factory.createCellArray({1,msg->motor_names.size()});
    for(size_t idxin = 0; idxin < msg->motor_names.size(); ++ idxin){
    	motor_namesoutCell[idxin] = factory.createCharArray(msg->motor_names[idxin]);
    }
    outArray[0]["motor_names"] = motor_namesoutCell;
    // stepper_firmware_versions
    auto stepper_firmware_versionsoutCell = factory.createCellArray({1,msg->stepper_firmware_versions.size()});
    for(size_t idxin = 0; idxin < msg->stepper_firmware_versions.size(); ++ idxin){
    	stepper_firmware_versionsoutCell[idxin] = factory.createCharArray(msg->stepper_firmware_versions[idxin]);
    }
    outArray[0]["stepper_firmware_versions"] = stepper_firmware_versionsoutCell;
    return std::move(outArray);
  }
} //namespace SoftwareVersion
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
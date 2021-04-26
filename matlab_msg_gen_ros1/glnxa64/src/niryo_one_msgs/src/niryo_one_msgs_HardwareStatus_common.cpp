// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/HardwareStatus
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
#include "niryo_one_msgs/HardwareStatus.h"
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
namespace HardwareStatus {
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const niryo_one_msgs::HardwareStatus::_header_type& val);
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr) {
    // _std_msgs_Header.seq
    try {
        const matlab::data::TypedArray<uint32_t> _headerseq_arr = arr[0]["seq"];
        val.seq = _headerseq_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'seq' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'seq' is wrong type; expected a uint32.");
    }
    // _std_msgs_Header.stamp
    try {
        const matlab::data::StructArray _headerstamp_arr = arr[0]["stamp"];
        copy_from_arr_ros_Time(val.stamp,_headerstamp_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stamp' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'stamp' is wrong type; expected a struct.");
    }
    // _std_msgs_Header.frame_id
    try {
        const matlab::data::CharArray _headerframe_id_arr = arr[0]["frame_id"];
        val.frame_id = _headerframe_id_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'frame_id' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const niryo_one_msgs::HardwareStatus::_header_type& val) {
    auto _headeroutArray = factory.createStructArray({1,1},{"seq","stamp","frame_id"});
    // _std_msgs_Header.seq
    _headeroutArray[0]["seq"] = factory.createScalar(val.seq);
    // _std_msgs_Header.stamp
    _headeroutArray[0]["stamp"] = get_arr_ros_Time(factory, val.stamp);
    // _std_msgs_Header.frame_id
    _headeroutArray[0]["frame_id"] = factory.createCharArray(val.frame_id);
    return std::move(_headeroutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr) {
    // _ros_Time.sec
    try {
        const matlab::data::TypedArray<uint32_t> _header_stampsec_arr = arr[0]["sec"];
        val.sec = _header_stampsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sec' is wrong type; expected a uint32.");
    }
    // _ros_Time.nsec
    try {
        const matlab::data::TypedArray<uint32_t> _header_stampnsec_arr = arr[0]["nsec"];
        val.nsec = _header_stampnsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nsec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'nsec' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val) {
    auto _header_stampoutArray = factory.createStructArray({1,1},{"sec","nsec"});
    // _ros_Time.sec
    _header_stampoutArray[0]["sec"] = factory.createScalar(val.sec);
    // _ros_Time.nsec
    _header_stampoutArray[0]["nsec"] = factory.createScalar(val.nsec);
    return std::move(_header_stampoutArray);
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<niryo_one_msgs::HardwareStatus>& msg, const matlab::data::StructArray arr) {
    try {
        //header
        const matlab::data::StructArray header_arr = arr[0]["header"];
        copy_from_arr_std_msgs_Header(msg->header,header_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    try {
        //rpi_temperature
        const matlab::data::TypedArray<int32_t> rpi_temperature_arr = arr[0]["rpi_temperature"];
        msg->rpi_temperature = rpi_temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rpi_temperature' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'rpi_temperature' is wrong type; expected a int32.");
    }
    try {
        //hardware_version
        const matlab::data::TypedArray<int32_t> hardware_version_arr = arr[0]["hardware_version"];
        msg->hardware_version = hardware_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hardware_version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'hardware_version' is wrong type; expected a int32.");
    }
    try {
        //connection_up
        const matlab::data::TypedArray<bool> connection_up_arr = arr[0]["connection_up"];
        msg->connection_up = connection_up_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'connection_up' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'connection_up' is wrong type; expected a logical.");
    }
    try {
        //error_message
        const matlab::data::CharArray error_message_arr = arr[0]["error_message"];
        msg->error_message = error_message_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'error_message' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'error_message' is wrong type; expected a string.");
    }
    try {
        //calibration_needed
        const matlab::data::TypedArray<int32_t> calibration_needed_arr = arr[0]["calibration_needed"];
        msg->calibration_needed = calibration_needed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'calibration_needed' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'calibration_needed' is wrong type; expected a int32.");
    }
    try {
        //calibration_in_progress
        const matlab::data::TypedArray<bool> calibration_in_progress_arr = arr[0]["calibration_in_progress"];
        msg->calibration_in_progress = calibration_in_progress_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'calibration_in_progress' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'calibration_in_progress' is wrong type; expected a logical.");
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
        //motor_types
        const matlab::data::CellArray motor_types_cellarr = arr[0]["motor_types"];
        size_t nelem = motor_types_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray motor_types_arr = motor_types_cellarr[idx];
        	msg->motor_types.push_back(motor_types_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'motor_types' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'motor_types' is wrong type; expected a string.");
    }
    try {
        //temperatures
        const matlab::data::TypedArray<int32_t> temperatures_arr = arr[0]["temperatures"];
        size_t nelem = temperatures_arr.getNumberOfElements();
        	msg->temperatures.resize(nelem);
        	std::copy(temperatures_arr.begin(), temperatures_arr.begin()+nelem, msg->temperatures.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'temperatures' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'temperatures' is wrong type; expected a int32.");
    }
    try {
        //voltages
        const matlab::data::TypedArray<double> voltages_arr = arr[0]["voltages"];
        size_t nelem = voltages_arr.getNumberOfElements();
        	msg->voltages.resize(nelem);
        	std::copy(voltages_arr.begin(), voltages_arr.begin()+nelem, msg->voltages.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'voltages' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'voltages' is wrong type; expected a double.");
    }
    try {
        //hardware_errors
        const matlab::data::TypedArray<int32_t> hardware_errors_arr = arr[0]["hardware_errors"];
        size_t nelem = hardware_errors_arr.getNumberOfElements();
        	msg->hardware_errors.resize(nelem);
        	std::copy(hardware_errors_arr.begin(), hardware_errors_arr.begin()+nelem, msg->hardware_errors.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hardware_errors' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'hardware_errors' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const niryo_one_msgs::HardwareStatus>& msg) {
    auto outArray = factory.createStructArray({1,1},{"header","rpi_temperature","hardware_version","connection_up","error_message","calibration_needed","calibration_in_progress","motor_names","motor_types","temperatures","voltages","hardware_errors"});
    // header
    outArray[0]["header"] = get_arr_std_msgs_Header(factory, msg->header);
    // rpi_temperature
    outArray[0]["rpi_temperature"] = factory.createScalar(msg->rpi_temperature);
    // hardware_version
    outArray[0]["hardware_version"] = factory.createScalar(msg->hardware_version);
    // connection_up
    outArray[0]["connection_up"] = factory.createScalar(static_cast<bool>(msg->connection_up));
    // error_message
    outArray[0]["error_message"] = factory.createCharArray(msg->error_message);
    // calibration_needed
    outArray[0]["calibration_needed"] = factory.createScalar(msg->calibration_needed);
    // calibration_in_progress
    outArray[0]["calibration_in_progress"] = factory.createScalar(static_cast<bool>(msg->calibration_in_progress));
    // motor_names
    auto motor_namesoutCell = factory.createCellArray({1,msg->motor_names.size()});
    for(size_t idxin = 0; idxin < msg->motor_names.size(); ++ idxin){
    	motor_namesoutCell[idxin] = factory.createCharArray(msg->motor_names[idxin]);
    }
    outArray[0]["motor_names"] = motor_namesoutCell;
    // motor_types
    auto motor_typesoutCell = factory.createCellArray({1,msg->motor_types.size()});
    for(size_t idxin = 0; idxin < msg->motor_types.size(); ++ idxin){
    	motor_typesoutCell[idxin] = factory.createCharArray(msg->motor_types[idxin]);
    }
    outArray[0]["motor_types"] = motor_typesoutCell;
    // temperatures
    outArray[0]["temperatures"] = factory.createArray<niryo_one_msgs::HardwareStatus::_temperatures_type::const_iterator, int32_t>({1, msg->temperatures.size()}, msg->temperatures.begin(), msg->temperatures.end());
    // voltages
    outArray[0]["voltages"] = factory.createArray<niryo_one_msgs::HardwareStatus::_voltages_type::const_iterator, double>({1, msg->voltages.size()}, msg->voltages.begin(), msg->voltages.end());
    // hardware_errors
    outArray[0]["hardware_errors"] = factory.createArray<niryo_one_msgs::HardwareStatus::_hardware_errors_type::const_iterator, int32_t>({1, msg->hardware_errors.size()}, msg->hardware_errors.begin(), msg->hardware_errors.end());
    return std::move(outArray);
  }
} //namespace HardwareStatus
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
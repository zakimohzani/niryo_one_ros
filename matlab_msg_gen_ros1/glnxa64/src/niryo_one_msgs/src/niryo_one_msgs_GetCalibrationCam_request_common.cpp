// Copyright 2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/GetCalibrationCamRequest
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
#include "niryo_one_msgs/GetCalibrationCam.h"
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
namespace GetCalibrationCam_Request {
  void copy_from_arr_std_msgs_Empty(std_msgs::Empty& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Empty(MDFactory_T& factory, const niryo_one_msgs::GetCalibrationCam::Request::_empty_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_std_msgs_Empty(std_msgs::Empty& val, const matlab::data::StructArray& arr) {
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_std_msgs_Empty(MDFactory_T& factory, const niryo_one_msgs::GetCalibrationCam::Request::_empty_type& val) {
    auto _emptyoutArray = factory.createStructArray({1,1},{});
    return std::move(_emptyoutArray);
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::GetCalibrationCam::Request& msg, const matlab::data::StructArray arr) {
    try {
        //empty
        const matlab::data::StructArray empty_arr = arr[0]["empty"];
        copy_from_arr_std_msgs_Empty(msg.empty,empty_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'empty' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'empty' is wrong type; expected a struct.");
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
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::GetCalibrationCam::Request& msg) {
    auto outArray = factory.createStructArray({1,1},{"empty"});
    // empty
    outArray[0]["empty"] = get_arr_std_msgs_Empty(factory, msg.empty);
    return std::move(outArray);
  }
} //namespace GetCalibrationCam_Request
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
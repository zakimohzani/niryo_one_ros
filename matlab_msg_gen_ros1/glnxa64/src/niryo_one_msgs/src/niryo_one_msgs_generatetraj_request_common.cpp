// Copyright 2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/generatetrajRequest
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
#include "niryo_one_msgs/generatetraj.h"
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
namespace generatetraj_Request {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::generatetraj::Request& msg, const matlab::data::StructArray arr) {
    try {
        //j0
        const matlab::data::TypedArray<double> j0_arr = arr[0]["j0"];
        size_t nelem = j0_arr.getNumberOfElements();
        	msg.j0.resize(nelem);
        	std::copy(j0_arr.begin(), j0_arr.begin()+nelem, msg.j0.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'j0' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'j0' is wrong type; expected a double.");
    }
    try {
        //j1
        const matlab::data::TypedArray<double> j1_arr = arr[0]["j1"];
        size_t nelem = j1_arr.getNumberOfElements();
        	msg.j1.resize(nelem);
        	std::copy(j1_arr.begin(), j1_arr.begin()+nelem, msg.j1.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'j1' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'j1' is wrong type; expected a double.");
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
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::generatetraj::Request& msg) {
    auto outArray = factory.createStructArray({1,1},{"j0","j1"});
    // j0
    outArray[0]["j0"] = factory.createArray<niryo_one_msgs::generatetraj::Request::_j0_type::const_iterator, double>({1, msg.j0.size()}, msg.j0.begin(), msg.j0.end());
    // j1
    outArray[0]["j1"] = factory.createArray<niryo_one_msgs::generatetraj::Request::_j1_type::const_iterator, double>({1, msg.j1.size()}, msg.j1.begin(), msg.j1.end());
    return std::move(outArray);
  }
} //namespace generatetraj_Request
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
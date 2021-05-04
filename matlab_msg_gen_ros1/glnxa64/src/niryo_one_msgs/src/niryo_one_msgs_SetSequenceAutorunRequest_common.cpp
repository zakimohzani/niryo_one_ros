// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/SetSequenceAutorunRequest
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
#include "niryo_one_msgs/SetSequenceAutorunRequest.h"
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
namespace SetSequenceAutorunRequest {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<niryo_one_msgs::SetSequenceAutorunRequest>& msg, const matlab::data::StructArray arr) {
    try {
        //enable
        const matlab::data::TypedArray<bool> enable_arr = arr[0]["enable"];
        msg->enable = enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'enable' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'enable' is wrong type; expected a logical.");
    }
    try {
        //mode
        const matlab::data::TypedArray<int32_t> mode_arr = arr[0]["mode"];
        msg->mode = mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'mode' is wrong type; expected a int32.");
    }
    try {
        //sequence_ids
        const matlab::data::TypedArray<int32_t> sequence_ids_arr = arr[0]["sequence_ids"];
        size_t nelem = sequence_ids_arr.getNumberOfElements();
        	msg->sequence_ids.resize(nelem);
        	std::copy(sequence_ids_arr.begin(), sequence_ids_arr.begin()+nelem, msg->sequence_ids.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sequence_ids' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sequence_ids' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const niryo_one_msgs::SetSequenceAutorunRequest>& msg) {
    auto outArray = factory.createStructArray({1,1},{"enable","mode","sequence_ids"});
    // enable
    outArray[0]["enable"] = factory.createScalar(static_cast<bool>(msg->enable));
    // mode
    outArray[0]["mode"] = factory.createScalar(msg->mode);
    // sequence_ids
    outArray[0]["sequence_ids"] = factory.createArray<niryo_one_msgs::SetSequenceAutorunRequest::_sequence_ids_type::const_iterator, int32_t>({1, msg->sequence_ids.size()}, msg->sequence_ids.begin(), msg->sequence_ids.end());
    return std::move(outArray);
  }
} //namespace SetSequenceAutorunRequest
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
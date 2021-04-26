// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/ManageSequenceRequest
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
#include "niryo_one_msgs/ManageSequenceRequest.h"
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
namespace ManageSequenceRequest {
  void copy_from_arr_niryo_one_msgs_Sequence(niryo_one_msgs::Sequence& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_niryo_one_msgs_Sequence(MDFactory_T& factory, const niryo_one_msgs::ManageSequenceRequest::_sequence_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_niryo_one_msgs_Sequence(niryo_one_msgs::Sequence& val, const matlab::data::StructArray& arr) {
    // _niryo_one_msgs_Sequence.id
    try {
        const matlab::data::TypedArray<int32_t> _sequenceid_arr = arr[0]["id"];
        val.id = _sequenceid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a int32.");
    }
    // _niryo_one_msgs_Sequence.name
    try {
        const matlab::data::CharArray _sequencename_arr = arr[0]["name"];
        val.name = _sequencename_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    // _niryo_one_msgs_Sequence.description
    try {
        const matlab::data::CharArray _sequencedescription_arr = arr[0]["description"];
        val.description = _sequencedescription_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'description' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'description' is wrong type; expected a string.");
    }
    // _niryo_one_msgs_Sequence.created
    try {
        const matlab::data::TypedArray<int32_t> _sequencecreated_arr = arr[0]["created"];
        val.created = _sequencecreated_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'created' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'created' is wrong type; expected a int32.");
    }
    // _niryo_one_msgs_Sequence.updated
    try {
        const matlab::data::TypedArray<int32_t> _sequenceupdated_arr = arr[0]["updated"];
        val.updated = _sequenceupdated_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'updated' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'updated' is wrong type; expected a int32.");
    }
    // _niryo_one_msgs_Sequence.blockly_xml
    try {
        const matlab::data::CharArray _sequenceblockly_xml_arr = arr[0]["blockly_xml"];
        val.blockly_xml = _sequenceblockly_xml_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'blockly_xml' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'blockly_xml' is wrong type; expected a string.");
    }
    // _niryo_one_msgs_Sequence.python_code
    try {
        const matlab::data::CharArray _sequencepython_code_arr = arr[0]["python_code"];
        val.python_code = _sequencepython_code_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'python_code' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'python_code' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_niryo_one_msgs_Sequence(MDFactory_T& factory, const niryo_one_msgs::ManageSequenceRequest::_sequence_type& val) {
    auto _sequenceoutArray = factory.createStructArray({1,1},{"id","name","description","created","updated","blockly_xml","python_code"});
    // _niryo_one_msgs_Sequence.id
    _sequenceoutArray[0]["id"] = factory.createScalar(val.id);
    // _niryo_one_msgs_Sequence.name
    _sequenceoutArray[0]["name"] = factory.createCharArray(val.name);
    // _niryo_one_msgs_Sequence.description
    _sequenceoutArray[0]["description"] = factory.createCharArray(val.description);
    // _niryo_one_msgs_Sequence.created
    _sequenceoutArray[0]["created"] = factory.createScalar(val.created);
    // _niryo_one_msgs_Sequence.updated
    _sequenceoutArray[0]["updated"] = factory.createScalar(val.updated);
    // _niryo_one_msgs_Sequence.blockly_xml
    _sequenceoutArray[0]["blockly_xml"] = factory.createCharArray(val.blockly_xml);
    // _niryo_one_msgs_Sequence.python_code
    _sequenceoutArray[0]["python_code"] = factory.createCharArray(val.python_code);
    return std::move(_sequenceoutArray);
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<niryo_one_msgs::ManageSequenceRequest>& msg, const matlab::data::StructArray arr) {
    try {
        //cmd_type
        const matlab::data::TypedArray<int32_t> cmd_type_arr = arr[0]["cmd_type"];
        msg->cmd_type = cmd_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cmd_type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'cmd_type' is wrong type; expected a int32.");
    }
    try {
        //sequence_id
        const matlab::data::TypedArray<int32_t> sequence_id_arr = arr[0]["sequence_id"];
        msg->sequence_id = sequence_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sequence_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sequence_id' is wrong type; expected a int32.");
    }
    try {
        //sequence
        const matlab::data::StructArray sequence_arr = arr[0]["sequence"];
        copy_from_arr_niryo_one_msgs_Sequence(msg->sequence,sequence_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sequence' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sequence' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const niryo_one_msgs::ManageSequenceRequest>& msg) {
    auto outArray = factory.createStructArray({1,1},{"cmd_type","sequence_id","sequence"});
    // cmd_type
    outArray[0]["cmd_type"] = factory.createScalar(msg->cmd_type);
    // sequence_id
    outArray[0]["sequence_id"] = factory.createScalar(msg->sequence_id);
    // sequence
    outArray[0]["sequence"] = get_arr_niryo_one_msgs_Sequence(factory, msg->sequence);
    return std::move(outArray);
  }
} //namespace ManageSequenceRequest
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
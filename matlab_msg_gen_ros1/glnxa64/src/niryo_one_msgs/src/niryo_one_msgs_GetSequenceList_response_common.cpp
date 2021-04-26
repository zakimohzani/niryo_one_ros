// Copyright 2020 The MathWorks, Inc.
// Common copy functions of server for niryo_one_msgs/GetSequenceListResponse
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
#include "niryo_one_msgs/GetSequenceList.h"
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
namespace GetSequenceList_Response {
  void copy_from_arr_niryo_one_msgs_Sequence_var_arr(niryo_one_msgs::Sequence& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_niryo_one_msgs_Sequence_var_arr(MDFactory_T& factory, const niryo_one_msgs::GetSequenceList::Response::_sequences_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_niryo_one_msgs_Sequence_var_arr(niryo_one_msgs::Sequence& val, const matlab::data::Struct& arr) {
    // _niryo_one_msgs_Sequence_var_arr.id
    try {
        const matlab::data::TypedArray<int32_t> _sequencesid_arr = arr["id"];
        val.id = _sequencesid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a int32.");
    }
    // _niryo_one_msgs_Sequence_var_arr.name
    try {
        const matlab::data::CharArray _sequencesname_arr = arr["name"];
        val.name = _sequencesname_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    // _niryo_one_msgs_Sequence_var_arr.description
    try {
        const matlab::data::CharArray _sequencesdescription_arr = arr["description"];
        val.description = _sequencesdescription_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'description' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'description' is wrong type; expected a string.");
    }
    // _niryo_one_msgs_Sequence_var_arr.created
    try {
        const matlab::data::TypedArray<int32_t> _sequencescreated_arr = arr["created"];
        val.created = _sequencescreated_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'created' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'created' is wrong type; expected a int32.");
    }
    // _niryo_one_msgs_Sequence_var_arr.updated
    try {
        const matlab::data::TypedArray<int32_t> _sequencesupdated_arr = arr["updated"];
        val.updated = _sequencesupdated_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'updated' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'updated' is wrong type; expected a int32.");
    }
    // _niryo_one_msgs_Sequence_var_arr.blockly_xml
    try {
        const matlab::data::CharArray _sequencesblockly_xml_arr = arr["blockly_xml"];
        val.blockly_xml = _sequencesblockly_xml_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'blockly_xml' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'blockly_xml' is wrong type; expected a string.");
    }
    // _niryo_one_msgs_Sequence_var_arr.python_code
    try {
        const matlab::data::CharArray _sequencespython_code_arr = arr["python_code"];
        val.python_code = _sequencespython_code_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'python_code' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'python_code' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_niryo_one_msgs_Sequence_var_arr(MDFactory_T& factory, const niryo_one_msgs::GetSequenceList::Response::_sequences_type& val) {
    auto _sequencesoutArray = factory.createStructArray({1,val.size()},{"id","name","description","created","updated","blockly_xml","python_code"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _niryo_one_msgs_Sequence_var_arr.id
    	_sequencesoutArray[idx]["id"] = factory.createScalar(val[idx].id);
    // _niryo_one_msgs_Sequence_var_arr.name
    	_sequencesoutArray[idx]["name"] = factory.createCharArray(val[idx].name);
    // _niryo_one_msgs_Sequence_var_arr.description
    	_sequencesoutArray[idx]["description"] = factory.createCharArray(val[idx].description);
    // _niryo_one_msgs_Sequence_var_arr.created
    	_sequencesoutArray[idx]["created"] = factory.createScalar(val[idx].created);
    // _niryo_one_msgs_Sequence_var_arr.updated
    	_sequencesoutArray[idx]["updated"] = factory.createScalar(val[idx].updated);
    // _niryo_one_msgs_Sequence_var_arr.blockly_xml
    	_sequencesoutArray[idx]["blockly_xml"] = factory.createCharArray(val[idx].blockly_xml);
    // _niryo_one_msgs_Sequence_var_arr.python_code
    	_sequencesoutArray[idx]["python_code"] = factory.createCharArray(val[idx].python_code);
    }
    return std::move(_sequencesoutArray);
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::GetSequenceList::Response& msg, const matlab::data::StructArray arr) {
    try {
        //sequences
        const matlab::data::StructArray sequences_arr = arr[0]["sequences"];
        for (auto _sequencesarr : sequences_arr) {
        	niryo_one_msgs::Sequence _val;
        	copy_from_arr_niryo_one_msgs_Sequence_var_arr(_val,_sequencesarr);
        	msg.sequences.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sequences' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sequences' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::GetSequenceList::Response& msg) {
    auto outArray = factory.createStructArray({1,1},{"sequences"});
    // sequences
    outArray[0]["sequences"] = get_arr_niryo_one_msgs_Sequence_var_arr(factory, msg.sequences);
    return std::move(outArray);
  }
} //namespace GetSequenceList_Response
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
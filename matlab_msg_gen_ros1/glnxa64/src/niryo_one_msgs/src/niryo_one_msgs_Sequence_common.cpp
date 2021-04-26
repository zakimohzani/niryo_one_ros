// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/Sequence
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
#include "niryo_one_msgs/Sequence.h"
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
namespace Sequence {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<niryo_one_msgs::Sequence>& msg, const matlab::data::StructArray arr) {
    try {
        //id
        const matlab::data::TypedArray<int32_t> id_arr = arr[0]["id"];
        msg->id = id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a int32.");
    }
    try {
        //name
        const matlab::data::CharArray name_arr = arr[0]["name"];
        msg->name = name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    try {
        //description
        const matlab::data::CharArray description_arr = arr[0]["description"];
        msg->description = description_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'description' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'description' is wrong type; expected a string.");
    }
    try {
        //created
        const matlab::data::TypedArray<int32_t> created_arr = arr[0]["created"];
        msg->created = created_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'created' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'created' is wrong type; expected a int32.");
    }
    try {
        //updated
        const matlab::data::TypedArray<int32_t> updated_arr = arr[0]["updated"];
        msg->updated = updated_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'updated' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'updated' is wrong type; expected a int32.");
    }
    try {
        //blockly_xml
        const matlab::data::CharArray blockly_xml_arr = arr[0]["blockly_xml"];
        msg->blockly_xml = blockly_xml_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'blockly_xml' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'blockly_xml' is wrong type; expected a string.");
    }
    try {
        //python_code
        const matlab::data::CharArray python_code_arr = arr[0]["python_code"];
        msg->python_code = python_code_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'python_code' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'python_code' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const niryo_one_msgs::Sequence>& msg) {
    auto outArray = factory.createStructArray({1,1},{"id","name","description","created","updated","blockly_xml","python_code"});
    // id
    outArray[0]["id"] = factory.createScalar(msg->id);
    // name
    outArray[0]["name"] = factory.createCharArray(msg->name);
    // description
    outArray[0]["description"] = factory.createCharArray(msg->description);
    // created
    outArray[0]["created"] = factory.createScalar(msg->created);
    // updated
    outArray[0]["updated"] = factory.createScalar(msg->updated);
    // blockly_xml
    outArray[0]["blockly_xml"] = factory.createCharArray(msg->blockly_xml);
    // python_code
    outArray[0]["python_code"] = factory.createCharArray(msg->python_code);
    return std::move(outArray);
  }
} //namespace Sequence
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/ProcessState
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
#include "niryo_one_msgs/ProcessState.h"
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
namespace ProcessState {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<niryo_one_msgs::ProcessState>& msg, const matlab::data::StructArray arr) {
    try {
        //name
        const matlab::data::CellArray name_cellarr = arr[0]["name"];
        size_t nelem = name_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray name_arr = name_cellarr[idx];
        	msg->name.push_back(name_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    try {
        //is_active
        const matlab::data::TypedArray<bool> is_active_arr = arr[0]["is_active"];
        size_t nelem = is_active_arr.getNumberOfElements();
        	msg->is_active.resize(nelem);
        	std::copy(is_active_arr.begin(), is_active_arr.begin()+nelem, msg->is_active.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'is_active' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'is_active' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const niryo_one_msgs::ProcessState>& msg) {
    auto outArray = factory.createStructArray({1,1},{"name","is_active"});
    // name
    auto nameoutCell = factory.createCellArray({1,msg->name.size()});
    for(size_t idxin = 0; idxin < msg->name.size(); ++ idxin){
    	nameoutCell[idxin] = factory.createCharArray(msg->name[idxin]);
    }
    outArray[0]["name"] = nameoutCell;
    // is_active
    auto is_active_bool = std::vector<bool>(std::begin(msg->is_active),std::end(msg->is_active));
    outArray[0]["is_active"] = factory.createArray<std::vector<bool>::const_iterator, bool>({1, is_active_bool.size()}, is_active_bool.begin(), is_active_bool.end());
    return std::move(outArray);
  }
} //namespace ProcessState
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
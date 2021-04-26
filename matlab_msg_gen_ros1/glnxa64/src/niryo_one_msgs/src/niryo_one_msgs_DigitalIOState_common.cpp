// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for niryo_one_msgs/DigitalIOState
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
#include "niryo_one_msgs/DigitalIOState.h"
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
namespace DigitalIOState {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<niryo_one_msgs::DigitalIOState>& msg, const matlab::data::StructArray arr) {
    try {
        //pins
        const matlab::data::TypedArray<int32_t> pins_arr = arr[0]["pins"];
        size_t nelem = pins_arr.getNumberOfElements();
        	msg->pins.resize(nelem);
        	std::copy(pins_arr.begin(), pins_arr.begin()+nelem, msg->pins.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pins' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'pins' is wrong type; expected a int32.");
    }
    try {
        //names
        const matlab::data::CellArray names_cellarr = arr[0]["names"];
        size_t nelem = names_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray names_arr = names_cellarr[idx];
        	msg->names.push_back(names_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'names' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'names' is wrong type; expected a string.");
    }
    try {
        //modes
        const matlab::data::TypedArray<int32_t> modes_arr = arr[0]["modes"];
        size_t nelem = modes_arr.getNumberOfElements();
        	msg->modes.resize(nelem);
        	std::copy(modes_arr.begin(), modes_arr.begin()+nelem, msg->modes.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'modes' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'modes' is wrong type; expected a int32.");
    }
    try {
        //states
        const matlab::data::TypedArray<int32_t> states_arr = arr[0]["states"];
        size_t nelem = states_arr.getNumberOfElements();
        	msg->states.resize(nelem);
        	std::copy(states_arr.begin(), states_arr.begin()+nelem, msg->states.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'states' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'states' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const niryo_one_msgs::DigitalIOState>& msg) {
    auto outArray = factory.createStructArray({1,1},{"pins","names","modes","states"});
    // pins
    outArray[0]["pins"] = factory.createArray<niryo_one_msgs::DigitalIOState::_pins_type::const_iterator, int32_t>({1, msg->pins.size()}, msg->pins.begin(), msg->pins.end());
    // names
    auto namesoutCell = factory.createCellArray({1,msg->names.size()});
    for(size_t idxin = 0; idxin < msg->names.size(); ++ idxin){
    	namesoutCell[idxin] = factory.createCharArray(msg->names[idxin]);
    }
    outArray[0]["names"] = namesoutCell;
    // modes
    outArray[0]["modes"] = factory.createArray<niryo_one_msgs::DigitalIOState::_modes_type::const_iterator, int32_t>({1, msg->modes.size()}, msg->modes.begin(), msg->modes.end());
    // states
    outArray[0]["states"] = factory.createArray<niryo_one_msgs::DigitalIOState::_states_type::const_iterator, int32_t>({1, msg->states.size()}, msg->states.begin(), msg->states.end());
    return std::move(outArray);
  }
} //namespace DigitalIOState
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
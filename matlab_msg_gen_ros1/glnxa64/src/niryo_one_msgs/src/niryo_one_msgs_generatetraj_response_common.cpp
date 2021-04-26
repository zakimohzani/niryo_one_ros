// Copyright 2020 The MathWorks, Inc.
// Common copy functions of server for niryo_one_msgs/generatetrajResponse
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
namespace generatetraj_Response {
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::generatetraj::Response& msg, const matlab::data::StructArray arr) {
    try {
        //positions
        const matlab::data::TypedArray<double> positions_arr = arr[0]["positions"];
        size_t nelem = positions_arr.getNumberOfElements();
        	msg.positions.resize(nelem);
        	std::copy(positions_arr.begin(), positions_arr.begin()+nelem, msg.positions.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'positions' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'positions' is wrong type; expected a double.");
    }
    try {
        //velocities
        const matlab::data::TypedArray<double> velocities_arr = arr[0]["velocities"];
        size_t nelem = velocities_arr.getNumberOfElements();
        	msg.velocities.resize(nelem);
        	std::copy(velocities_arr.begin(), velocities_arr.begin()+nelem, msg.velocities.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocities' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'velocities' is wrong type; expected a double.");
    }
    try {
        //acceleration
        const matlab::data::TypedArray<double> acceleration_arr = arr[0]["acceleration"];
        size_t nelem = acceleration_arr.getNumberOfElements();
        	msg.acceleration.resize(nelem);
        	std::copy(acceleration_arr.begin(), acceleration_arr.begin()+nelem, msg.acceleration.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'acceleration' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'acceleration' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::generatetraj::Response& msg) {
    auto outArray = factory.createStructArray({1,1},{"positions","velocities","acceleration"});
    // positions
    outArray[0]["positions"] = factory.createArray<niryo_one_msgs::generatetraj::Response::_positions_type::const_iterator, double>({1, msg.positions.size()}, msg.positions.begin(), msg.positions.end());
    // velocities
    outArray[0]["velocities"] = factory.createArray<niryo_one_msgs::generatetraj::Response::_velocities_type::const_iterator, double>({1, msg.velocities.size()}, msg.velocities.begin(), msg.velocities.end());
    // acceleration
    outArray[0]["acceleration"] = factory.createArray<niryo_one_msgs::generatetraj::Response::_acceleration_type::const_iterator, double>({1, msg.acceleration.size()}, msg.acceleration.begin(), msg.acceleration.end());
    return std::move(outArray);
  }
} //namespace generatetraj_Response
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
// Generated by gencpp from file niryo_one_msgs/ControlConveyor.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_CONTROLCONVEYOR_H
#define NIRYO_ONE_MSGS_MESSAGE_CONTROLCONVEYOR_H

#include <ros/service_traits.h>


#include <niryo_one_msgs/ControlConveyorRequest.h>
#include <niryo_one_msgs/ControlConveyorResponse.h>


namespace niryo_one_msgs
{

struct ControlConveyor
{

typedef ControlConveyorRequest Request;
typedef ControlConveyorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ControlConveyor
} // namespace niryo_one_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::niryo_one_msgs::ControlConveyor > {
  static const char* value()
  {
    return "eddd3ce9c808a77e2842b11b76f25761";
  }

  static const char* value(const ::niryo_one_msgs::ControlConveyor&) { return value(); }
};

template<>
struct DataType< ::niryo_one_msgs::ControlConveyor > {
  static const char* value()
  {
    return "niryo_one_msgs/ControlConveyor";
  }

  static const char* value(const ::niryo_one_msgs::ControlConveyor&) { return value(); }
};


// service_traits::MD5Sum< ::niryo_one_msgs::ControlConveyorRequest> should match 
// service_traits::MD5Sum< ::niryo_one_msgs::ControlConveyor > 
template<>
struct MD5Sum< ::niryo_one_msgs::ControlConveyorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::ControlConveyor >::value();
  }
  static const char* value(const ::niryo_one_msgs::ControlConveyorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::ControlConveyorRequest> should match 
// service_traits::DataType< ::niryo_one_msgs::ControlConveyor > 
template<>
struct DataType< ::niryo_one_msgs::ControlConveyorRequest>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::ControlConveyor >::value();
  }
  static const char* value(const ::niryo_one_msgs::ControlConveyorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::niryo_one_msgs::ControlConveyorResponse> should match 
// service_traits::MD5Sum< ::niryo_one_msgs::ControlConveyor > 
template<>
struct MD5Sum< ::niryo_one_msgs::ControlConveyorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::ControlConveyor >::value();
  }
  static const char* value(const ::niryo_one_msgs::ControlConveyorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::ControlConveyorResponse> should match 
// service_traits::DataType< ::niryo_one_msgs::ControlConveyor > 
template<>
struct DataType< ::niryo_one_msgs::ControlConveyorResponse>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::ControlConveyor >::value();
  }
  static const char* value(const ::niryo_one_msgs::ControlConveyorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_CONTROLCONVEYOR_H

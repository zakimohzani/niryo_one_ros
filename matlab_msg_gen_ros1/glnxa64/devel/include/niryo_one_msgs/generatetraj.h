// Generated by gencpp from file niryo_one_msgs/generatetraj.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_GENERATETRAJ_H
#define NIRYO_ONE_MSGS_MESSAGE_GENERATETRAJ_H

#include <ros/service_traits.h>


#include <niryo_one_msgs/generatetrajRequest.h>
#include <niryo_one_msgs/generatetrajResponse.h>


namespace niryo_one_msgs
{

struct generatetraj
{

typedef generatetrajRequest Request;
typedef generatetrajResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct generatetraj
} // namespace niryo_one_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::niryo_one_msgs::generatetraj > {
  static const char* value()
  {
    return "41373520bbba7fa913ef925bb8013dbd";
  }

  static const char* value(const ::niryo_one_msgs::generatetraj&) { return value(); }
};

template<>
struct DataType< ::niryo_one_msgs::generatetraj > {
  static const char* value()
  {
    return "niryo_one_msgs/generatetraj";
  }

  static const char* value(const ::niryo_one_msgs::generatetraj&) { return value(); }
};


// service_traits::MD5Sum< ::niryo_one_msgs::generatetrajRequest> should match 
// service_traits::MD5Sum< ::niryo_one_msgs::generatetraj > 
template<>
struct MD5Sum< ::niryo_one_msgs::generatetrajRequest>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::generatetraj >::value();
  }
  static const char* value(const ::niryo_one_msgs::generatetrajRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::generatetrajRequest> should match 
// service_traits::DataType< ::niryo_one_msgs::generatetraj > 
template<>
struct DataType< ::niryo_one_msgs::generatetrajRequest>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::generatetraj >::value();
  }
  static const char* value(const ::niryo_one_msgs::generatetrajRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::niryo_one_msgs::generatetrajResponse> should match 
// service_traits::MD5Sum< ::niryo_one_msgs::generatetraj > 
template<>
struct MD5Sum< ::niryo_one_msgs::generatetrajResponse>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::generatetraj >::value();
  }
  static const char* value(const ::niryo_one_msgs::generatetrajResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::generatetrajResponse> should match 
// service_traits::DataType< ::niryo_one_msgs::generatetraj > 
template<>
struct DataType< ::niryo_one_msgs::generatetrajResponse>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::generatetraj >::value();
  }
  static const char* value(const ::niryo_one_msgs::generatetrajResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_GENERATETRAJ_H
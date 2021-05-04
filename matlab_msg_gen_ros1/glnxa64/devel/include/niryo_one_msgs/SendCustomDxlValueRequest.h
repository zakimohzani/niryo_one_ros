// Generated by gencpp from file niryo_one_msgs/SendCustomDxlValueRequest.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_SENDCUSTOMDXLVALUEREQUEST_H
#define NIRYO_ONE_MSGS_MESSAGE_SENDCUSTOMDXLVALUEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace niryo_one_msgs
{
template <class ContainerAllocator>
struct SendCustomDxlValueRequest_
{
  typedef SendCustomDxlValueRequest_<ContainerAllocator> Type;

  SendCustomDxlValueRequest_()
    : motor_type(0)
    , id(0)
    , value(0)
    , reg_address(0)
    , byte_number(0)  {
    }
  SendCustomDxlValueRequest_(const ContainerAllocator& _alloc)
    : motor_type(0)
    , id(0)
    , value(0)
    , reg_address(0)
    , byte_number(0)  {
  (void)_alloc;
    }



   typedef int32_t _motor_type_type;
  _motor_type_type motor_type;

   typedef uint8_t _id_type;
  _id_type id;

   typedef int32_t _value_type;
  _value_type value;

   typedef int32_t _reg_address_type;
  _reg_address_type reg_address;

   typedef int32_t _byte_number_type;
  _byte_number_type byte_number;





  typedef boost::shared_ptr< ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SendCustomDxlValueRequest_

typedef ::niryo_one_msgs::SendCustomDxlValueRequest_<std::allocator<void> > SendCustomDxlValueRequest;

typedef boost::shared_ptr< ::niryo_one_msgs::SendCustomDxlValueRequest > SendCustomDxlValueRequestPtr;
typedef boost::shared_ptr< ::niryo_one_msgs::SendCustomDxlValueRequest const> SendCustomDxlValueRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace niryo_one_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg'], 'actionlib_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/octomap_msgs/cmake/../msg'], 'niryo_one_msgs': ['/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg'], 'geometry_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'actionlib': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9cc34e89b5ce860f1d87d7de4d367a5b";
  }

  static const char* value(const ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9cc34e89b5ce860fULL;
  static const uint64_t static_value2 = 0x1d87d7de4d367a5bULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_one_msgs/SendCustomDxlValueRequest";
  }

  static const char* value(const ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"\n"
"int32 motor_type\n"
"uint8 id\n"
"int32 value\n"
"int32 reg_address\n"
"int32 byte_number\n"
;
  }

  static const char* value(const ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.motor_type);
      stream.next(m.id);
      stream.next(m.value);
      stream.next(m.reg_address);
      stream.next(m.byte_number);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SendCustomDxlValueRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_one_msgs::SendCustomDxlValueRequest_<ContainerAllocator>& v)
  {
    s << indent << "motor_type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.motor_type);
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.value);
    s << indent << "reg_address: ";
    Printer<int32_t>::stream(s, indent + "  ", v.reg_address);
    s << indent << "byte_number: ";
    Printer<int32_t>::stream(s, indent + "  ", v.byte_number);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_SENDCUSTOMDXLVALUEREQUEST_H
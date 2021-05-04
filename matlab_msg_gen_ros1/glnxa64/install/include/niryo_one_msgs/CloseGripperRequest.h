// Generated by gencpp from file niryo_one_msgs/CloseGripperRequest.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_CLOSEGRIPPERREQUEST_H
#define NIRYO_ONE_MSGS_MESSAGE_CLOSEGRIPPERREQUEST_H


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
struct CloseGripperRequest_
{
  typedef CloseGripperRequest_<ContainerAllocator> Type;

  CloseGripperRequest_()
    : id(0)
    , close_position(0)
    , close_speed(0)
    , close_hold_torque(0)
    , close_max_torque(0)  {
    }
  CloseGripperRequest_(const ContainerAllocator& _alloc)
    : id(0)
    , close_position(0)
    , close_speed(0)
    , close_hold_torque(0)
    , close_max_torque(0)  {
  (void)_alloc;
    }



   typedef uint8_t _id_type;
  _id_type id;

   typedef int16_t _close_position_type;
  _close_position_type close_position;

   typedef int16_t _close_speed_type;
  _close_speed_type close_speed;

   typedef int16_t _close_hold_torque_type;
  _close_hold_torque_type close_hold_torque;

   typedef int16_t _close_max_torque_type;
  _close_max_torque_type close_max_torque;





  typedef boost::shared_ptr< ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CloseGripperRequest_

typedef ::niryo_one_msgs::CloseGripperRequest_<std::allocator<void> > CloseGripperRequest;

typedef boost::shared_ptr< ::niryo_one_msgs::CloseGripperRequest > CloseGripperRequestPtr;
typedef boost::shared_ptr< ::niryo_one_msgs::CloseGripperRequest const> CloseGripperRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "44ae3b67a5ebbc045039caba07d974fa";
  }

  static const char* value(const ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x44ae3b67a5ebbc04ULL;
  static const uint64_t static_value2 = 0x5039caba07d974faULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_one_msgs/CloseGripperRequest";
  }

  static const char* value(const ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint8 id\n"
"\n"
"int16 close_position\n"
"int16 close_speed\n"
"int16 close_hold_torque\n"
"int16 close_max_torque\n"
;
  }

  static const char* value(const ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.close_position);
      stream.next(m.close_speed);
      stream.next(m.close_hold_torque);
      stream.next(m.close_max_torque);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CloseGripperRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_one_msgs::CloseGripperRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "close_position: ";
    Printer<int16_t>::stream(s, indent + "  ", v.close_position);
    s << indent << "close_speed: ";
    Printer<int16_t>::stream(s, indent + "  ", v.close_speed);
    s << indent << "close_hold_torque: ";
    Printer<int16_t>::stream(s, indent + "  ", v.close_hold_torque);
    s << indent << "close_max_torque: ";
    Printer<int16_t>::stream(s, indent + "  ", v.close_max_torque);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_CLOSEGRIPPERREQUEST_H
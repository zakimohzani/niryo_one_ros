// Generated by gencpp from file niryo_one_msgs/GetSequenceListRequest.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_GETSEQUENCELISTREQUEST_H
#define NIRYO_ONE_MSGS_MESSAGE_GETSEQUENCELISTREQUEST_H


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
struct GetSequenceListRequest_
{
  typedef GetSequenceListRequest_<ContainerAllocator> Type;

  GetSequenceListRequest_()
    : info_header_only(false)  {
    }
  GetSequenceListRequest_(const ContainerAllocator& _alloc)
    : info_header_only(false)  {
  (void)_alloc;
    }



   typedef uint8_t _info_header_only_type;
  _info_header_only_type info_header_only;





  typedef boost::shared_ptr< ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetSequenceListRequest_

typedef ::niryo_one_msgs::GetSequenceListRequest_<std::allocator<void> > GetSequenceListRequest;

typedef boost::shared_ptr< ::niryo_one_msgs::GetSequenceListRequest > GetSequenceListRequestPtr;
typedef boost::shared_ptr< ::niryo_one_msgs::GetSequenceListRequest const> GetSequenceListRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d4fb5fb836b8f25a9ed3470500197359";
  }

  static const char* value(const ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd4fb5fb836b8f25aULL;
  static const uint64_t static_value2 = 0x9ed3470500197359ULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_one_msgs/GetSequenceListRequest";
  }

  static const char* value(const ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool info_header_only\n"
;
  }

  static const char* value(const ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.info_header_only);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetSequenceListRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_one_msgs::GetSequenceListRequest_<ContainerAllocator>& v)
  {
    s << indent << "info_header_only: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.info_header_only);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_GETSEQUENCELISTREQUEST_H

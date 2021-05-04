// Generated by gencpp from file niryo_one_msgs/TakePictureRequest.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_TAKEPICTUREREQUEST_H
#define NIRYO_ONE_MSGS_MESSAGE_TAKEPICTUREREQUEST_H


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
struct TakePictureRequest_
{
  typedef TakePictureRequest_<ContainerAllocator> Type;

  TakePictureRequest_()
    : path()  {
    }
  TakePictureRequest_(const ContainerAllocator& _alloc)
    : path(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _path_type;
  _path_type path;





  typedef boost::shared_ptr< ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TakePictureRequest_

typedef ::niryo_one_msgs::TakePictureRequest_<std::allocator<void> > TakePictureRequest;

typedef boost::shared_ptr< ::niryo_one_msgs::TakePictureRequest > TakePictureRequestPtr;
typedef boost::shared_ptr< ::niryo_one_msgs::TakePictureRequest const> TakePictureRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace niryo_one_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg'], 'actionlib_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/octomap_msgs/cmake/../msg'], 'niryo_one_msgs': ['/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg'], 'geometry_msgs': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'actionlib': ['/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1d00cd540af97efeb6b1589112fab63e";
  }

  static const char* value(const ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1d00cd540af97efeULL;
  static const uint64_t static_value2 = 0xb6b1589112fab63eULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_one_msgs/TakePictureRequest";
  }

  static const char* value(const ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string path\n"
;
  }

  static const char* value(const ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TakePictureRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_one_msgs::TakePictureRequest_<ContainerAllocator>& v)
  {
    s << indent << "path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.path);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_TAKEPICTUREREQUEST_H
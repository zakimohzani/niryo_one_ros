// Generated by gencpp from file niryo_one_msgs/Sequence.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_SEQUENCE_H
#define NIRYO_ONE_MSGS_MESSAGE_SEQUENCE_H


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
struct Sequence_
{
  typedef Sequence_<ContainerAllocator> Type;

  Sequence_()
    : id(0)
    , name()
    , description()
    , created(0)
    , updated(0)
    , blockly_xml()
    , python_code()  {
    }
  Sequence_(const ContainerAllocator& _alloc)
    : id(0)
    , name(_alloc)
    , description(_alloc)
    , created(0)
    , updated(0)
    , blockly_xml(_alloc)
    , python_code(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _description_type;
  _description_type description;

   typedef int32_t _created_type;
  _created_type created;

   typedef int32_t _updated_type;
  _updated_type updated;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _blockly_xml_type;
  _blockly_xml_type blockly_xml;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _python_code_type;
  _python_code_type python_code;





  typedef boost::shared_ptr< ::niryo_one_msgs::Sequence_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_one_msgs::Sequence_<ContainerAllocator> const> ConstPtr;

}; // struct Sequence_

typedef ::niryo_one_msgs::Sequence_<std::allocator<void> > Sequence;

typedef boost::shared_ptr< ::niryo_one_msgs::Sequence > SequencePtr;
typedef boost::shared_ptr< ::niryo_one_msgs::Sequence const> SequenceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_one_msgs::Sequence_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_one_msgs::Sequence_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::niryo_one_msgs::Sequence_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::Sequence_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::Sequence_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::Sequence_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::Sequence_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::Sequence_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_one_msgs::Sequence_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f6a77265c058342138b72e566370ac7a";
  }

  static const char* value(const ::niryo_one_msgs::Sequence_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf6a77265c0583421ULL;
  static const uint64_t static_value2 = 0x38b72e566370ac7aULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_one_msgs::Sequence_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_one_msgs/Sequence";
  }

  static const char* value(const ::niryo_one_msgs::Sequence_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_one_msgs::Sequence_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n"
"string name\n"
"string description\n"
"\n"
"int32 created\n"
"int32 updated\n"
"\n"
"string blockly_xml\n"
"string python_code\n"
;
  }

  static const char* value(const ::niryo_one_msgs::Sequence_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_one_msgs::Sequence_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.name);
      stream.next(m.description);
      stream.next(m.created);
      stream.next(m.updated);
      stream.next(m.blockly_xml);
      stream.next(m.python_code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Sequence_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_one_msgs::Sequence_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_one_msgs::Sequence_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.description);
    s << indent << "created: ";
    Printer<int32_t>::stream(s, indent + "  ", v.created);
    s << indent << "updated: ";
    Printer<int32_t>::stream(s, indent + "  ", v.updated);
    s << indent << "blockly_xml: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.blockly_xml);
    s << indent << "python_code: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.python_code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_SEQUENCE_H
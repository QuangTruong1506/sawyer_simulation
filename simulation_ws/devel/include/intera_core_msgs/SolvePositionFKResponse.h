// Generated by gencpp from file intera_core_msgs/SolvePositionFKResponse.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_SOLVEPOSITIONFKRESPONSE_H
#define INTERA_CORE_MSGS_MESSAGE_SOLVEPOSITIONFKRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace intera_core_msgs
{
template <class ContainerAllocator>
struct SolvePositionFKResponse_
{
  typedef SolvePositionFKResponse_<ContainerAllocator> Type;

  SolvePositionFKResponse_()
    : pose_stamp()
    , isValid()
    , inCollision()  {
    }
  SolvePositionFKResponse_(const ContainerAllocator& _alloc)
    : pose_stamp(_alloc)
    , isValid(_alloc)
    , inCollision(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::geometry_msgs::PoseStamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::other >  _pose_stamp_type;
  _pose_stamp_type pose_stamp;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _isValid_type;
  _isValid_type isValid;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _inCollision_type;
  _inCollision_type inCollision;





  typedef boost::shared_ptr< ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SolvePositionFKResponse_

typedef ::intera_core_msgs::SolvePositionFKResponse_<std::allocator<void> > SolvePositionFKResponse;

typedef boost::shared_ptr< ::intera_core_msgs::SolvePositionFKResponse > SolvePositionFKResponsePtr;
typedef boost::shared_ptr< ::intera_core_msgs::SolvePositionFKResponse const> SolvePositionFKResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'intera_core_msgs': ['/home/user/simulation_ws/src/intera_common/intera_core_msgs/msg', '/home/user/simulation_ws/devel/share/intera_core_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "907cf9ee4b255127ce59627076bd1e85";
  }

  static const char* value(const ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x907cf9ee4b255127ULL;
  static const uint64_t static_value2 = 0xce59627076bd1e85ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/SolvePositionFKResponse";
  }

  static const char* value(const ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
geometry_msgs/PoseStamped[] pose_stamp\n\
bool[] isValid\n\
bool[] inCollision\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose_stamp);
      stream.next(m.isValid);
      stream.next(m.inCollision);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SolvePositionFKResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::SolvePositionFKResponse_<ContainerAllocator>& v)
  {
    s << indent << "pose_stamp[]" << std::endl;
    for (size_t i = 0; i < v.pose_stamp.size(); ++i)
    {
      s << indent << "  pose_stamp[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "    ", v.pose_stamp[i]);
    }
    s << indent << "isValid[]" << std::endl;
    for (size_t i = 0; i < v.isValid.size(); ++i)
    {
      s << indent << "  isValid[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.isValid[i]);
    }
    s << indent << "inCollision[]" << std::endl;
    for (size_t i = 0; i < v.inCollision.size(); ++i)
    {
      s << indent << "  inCollision[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.inCollision[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_SOLVEPOSITIONFKRESPONSE_H

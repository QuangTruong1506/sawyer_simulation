// Generated by gencpp from file intera_motion_msgs/EndpointTrackingError.msg
// DO NOT EDIT!


#ifndef INTERA_MOTION_MSGS_MESSAGE_ENDPOINTTRACKINGERROR_H
#define INTERA_MOTION_MSGS_MESSAGE_ENDPOINTTRACKINGERROR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>

namespace intera_motion_msgs
{
template <class ContainerAllocator>
struct EndpointTrackingError_
{
  typedef EndpointTrackingError_<ContainerAllocator> Type;

  EndpointTrackingError_()
    : header()
    , trajectory_id(0)
    , trajectory_time(0.0)
    , active_endpoint()
    , pose_error()
    , twist_error()
    , pose_command()
    , twist_command()  {
    }
  EndpointTrackingError_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , trajectory_id(0)
    , trajectory_time(0.0)
    , active_endpoint(_alloc)
    , pose_error(_alloc)
    , twist_error(_alloc)
    , pose_command(_alloc)
    , twist_command(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _trajectory_id_type;
  _trajectory_id_type trajectory_id;

   typedef double _trajectory_time_type;
  _trajectory_time_type trajectory_time;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _active_endpoint_type;
  _active_endpoint_type active_endpoint;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_error_type;
  _pose_error_type pose_error;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _twist_error_type;
  _twist_error_type twist_error;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_command_type;
  _pose_command_type pose_command;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _twist_command_type;
  _twist_command_type twist_command;





  typedef boost::shared_ptr< ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> const> ConstPtr;

}; // struct EndpointTrackingError_

typedef ::intera_motion_msgs::EndpointTrackingError_<std::allocator<void> > EndpointTrackingError;

typedef boost::shared_ptr< ::intera_motion_msgs::EndpointTrackingError > EndpointTrackingErrorPtr;
typedef boost::shared_ptr< ::intera_motion_msgs::EndpointTrackingError const> EndpointTrackingErrorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intera_motion_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'intera_core_msgs': ['/home/user/simulation_ws/src/intera_common/intera_core_msgs/msg', '/home/user/simulation_ws/devel/share/intera_core_msgs/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'intera_motion_msgs': ['/home/user/simulation_ws/src/intera_common/intera_motion_msgs/msg', '/home/user/simulation_ws/devel/share/intera_motion_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c266cbf60fc5f871b5909394c05032fc";
  }

  static const char* value(const ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc266cbf60fc5f871ULL;
  static const uint64_t static_value2 = 0xb5909394c05032fcULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_motion_msgs/EndpointTrackingError";
  }

  static const char* value(const ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message will be published from the TrackingController\n\
# It contains the endpoint tracking error data for diagnostics.\n\
Header header\n\
\n\
# ID for the trajectory.\n\
uint32 trajectory_id\n\
\n\
# Reference time since start of trajectory in seconds.\n\
float64 trajectory_time\n\
\n\
# Name of the endpoint that is currently active (coordinate frame name)\n\
string active_endpoint\n\
\n\
# pose_error transforms from pose_command to pose_measured\n\
# units: translation (meters) ; orientation (quaternion)\n\
geometry_msgs/Pose pose_error\n\
\n\
# twist_error = twist_measured) - twist_command\n\
# units: linear (meters) ; angular (radians per second)\n\
geometry_msgs/Twist twist_error\n\
\n\
# pose that is commanded at the active_endpoint\n\
# units: translation (meters) ; orientation (quaternion)\n\
geometry_msgs/Pose pose_command\n\
\n\
# twist that is commanded at the active_endpoint\n\
# units: linear (meters) ; angular (radians per second)\n\
geometry_msgs/Twist twist_command\n\
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
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.trajectory_id);
      stream.next(m.trajectory_time);
      stream.next(m.active_endpoint);
      stream.next(m.pose_error);
      stream.next(m.twist_error);
      stream.next(m.pose_command);
      stream.next(m.twist_command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EndpointTrackingError_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_motion_msgs::EndpointTrackingError_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "trajectory_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.trajectory_id);
    s << indent << "trajectory_time: ";
    Printer<double>::stream(s, indent + "  ", v.trajectory_time);
    s << indent << "active_endpoint: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.active_endpoint);
    s << indent << "pose_error: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose_error);
    s << indent << "twist_error: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.twist_error);
    s << indent << "pose_command: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose_command);
    s << indent << "twist_command: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.twist_command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_MOTION_MSGS_MESSAGE_ENDPOINTTRACKINGERROR_H

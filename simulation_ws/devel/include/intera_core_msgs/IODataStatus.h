// Generated by gencpp from file intera_core_msgs/IODataStatus.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_IODATASTATUS_H
#define INTERA_CORE_MSGS_MESSAGE_IODATASTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <intera_core_msgs/IOStatus.h>

namespace intera_core_msgs
{
template <class ContainerAllocator>
struct IODataStatus_
{
  typedef IODataStatus_<ContainerAllocator> Type;

  IODataStatus_()
    : name()
    , format()
    , data()
    , status()  {
    }
  IODataStatus_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , format(_alloc)
    , data(_alloc)
    , status(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _format_type;
  _format_type format;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _data_type;
  _data_type data;

   typedef  ::intera_core_msgs::IOStatus_<ContainerAllocator>  _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::intera_core_msgs::IODataStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::IODataStatus_<ContainerAllocator> const> ConstPtr;

}; // struct IODataStatus_

typedef ::intera_core_msgs::IODataStatus_<std::allocator<void> > IODataStatus;

typedef boost::shared_ptr< ::intera_core_msgs::IODataStatus > IODataStatusPtr;
typedef boost::shared_ptr< ::intera_core_msgs::IODataStatus const> IODataStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::IODataStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::IODataStatus_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::intera_core_msgs::IODataStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::IODataStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::IODataStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::IODataStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::IODataStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::IODataStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::IODataStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bb31283c6afc4ddea2f5f157264e5909";
  }

  static const char* value(const ::intera_core_msgs::IODataStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbb31283c6afc4ddeULL;
  static const uint64_t static_value2 = 0xa2f5f157264e5909ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::IODataStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/IODataStatus";
  }

  static const char* value(const ::intera_core_msgs::IODataStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::IODataStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## IO Data Status\n\
string name       # IO Data Component name\n\
string format     # data format:\n\
                  # A JSON object containing one or more of the following fields:\n\
                  # Required:\n\
                  #   \"type\" : \"<type>\"  JSON Type, one of:\n\
                  #                      \"bool\", \"int\", \"float\", \"string\", \"object\", \"array\"\n\
                  #\n\
                  # Optional:\n\
                  #   \"dimensions\" : [ N,...] if absent, [ 1 ] is assumed.\n\
                  #   \"role\"       : Signal: \"input\", \"output\"; Port:  \"sink\", \"source\"\n\
                  #   \"data_type\"  : qualifier for the JSON type, may be device-specific\n\
                  #                  int data_types:  \"uN\", \"sN\", \"NqM\"\n\
                  #   other device-specific qualifiers may be used and will be passed through.\n\
string data       # JSON data value.  An Array is expected, for example \"[ 0 ]\"\n\
IOStatus status   # Data Component status\n\
\n\
================================================================================\n\
MSG: intera_core_msgs/IOStatus\n\
## IO status data\n\
#\n\
string tag             # one of the values listed below\n\
#   down     Inoperative, not fully instantiated\n\
#   ready    OK, fully operational\n\
#   busy     OK, not ready to output data; input data value may be stale\n\
#   unready  OK, not operational; data is invalid\n\
#   error    Error, not operational\n\
string DOWN      = down\n\
string READY     = ready\n\
string BUSY      = busy\n\
string UNREADY   = unready\n\
string ERROR     = error\n\
#\n\
string id             # message id, for internationalization\n\
#\n\
string detail         # optional additional status detail\n\
#\n\
";
  }

  static const char* value(const ::intera_core_msgs::IODataStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::IODataStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.format);
      stream.next(m.data);
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IODataStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::IODataStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::IODataStatus_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "format: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.format);
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.data);
    s << indent << "status: ";
    s << std::endl;
    Printer< ::intera_core_msgs::IOStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_IODATASTATUS_H

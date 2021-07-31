// Generated by gencpp from file intera_core_msgs/IOStatus.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_IOSTATUS_H
#define INTERA_CORE_MSGS_MESSAGE_IOSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace intera_core_msgs
{
template <class ContainerAllocator>
struct IOStatus_
{
  typedef IOStatus_<ContainerAllocator> Type;

  IOStatus_()
    : tag()
    , id()
    , detail()  {
    }
  IOStatus_(const ContainerAllocator& _alloc)
    : tag(_alloc)
    , id(_alloc)
    , detail(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _tag_type;
  _tag_type tag;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _detail_type;
  _detail_type detail;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DOWN;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  READY;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  BUSY;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  UNREADY;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ERROR;

  typedef boost::shared_ptr< ::intera_core_msgs::IOStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::IOStatus_<ContainerAllocator> const> ConstPtr;

}; // struct IOStatus_

typedef ::intera_core_msgs::IOStatus_<std::allocator<void> > IOStatus;

typedef boost::shared_ptr< ::intera_core_msgs::IOStatus > IOStatusPtr;
typedef boost::shared_ptr< ::intera_core_msgs::IOStatus const> IOStatusConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      IOStatus_<ContainerAllocator>::DOWN =
        
          "down"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      IOStatus_<ContainerAllocator>::READY =
        
          "ready"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      IOStatus_<ContainerAllocator>::BUSY =
        
          "busy"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      IOStatus_<ContainerAllocator>::UNREADY =
        
          "unready"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      IOStatus_<ContainerAllocator>::ERROR =
        
          "error"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::IOStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::IOStatus_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::intera_core_msgs::IOStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::IOStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::IOStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::IOStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::IOStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::IOStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::IOStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a8daeb84c9abffc88ad8ca636f5fd8a0";
  }

  static const char* value(const ::intera_core_msgs::IOStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa8daeb84c9abffc8ULL;
  static const uint64_t static_value2 = 0x8ad8ca636f5fd8a0ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::IOStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/IOStatus";
  }

  static const char* value(const ::intera_core_msgs::IOStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::IOStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## IO status data\n\
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

  static const char* value(const ::intera_core_msgs::IOStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::IOStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tag);
      stream.next(m.id);
      stream.next(m.detail);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IOStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::IOStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::IOStatus_<ContainerAllocator>& v)
  {
    s << indent << "tag: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tag);
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.id);
    s << indent << "detail: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.detail);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_IOSTATUS_H

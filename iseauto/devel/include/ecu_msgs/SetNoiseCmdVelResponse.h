// Generated by gencpp from file ecu_msgs/SetNoiseCmdVelResponse.msg
// DO NOT EDIT!


#ifndef ECU_MSGS_MESSAGE_SETNOISECMDVELRESPONSE_H
#define ECU_MSGS_MESSAGE_SETNOISECMDVELRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ecu_msgs
{
template <class ContainerAllocator>
struct SetNoiseCmdVelResponse_
{
  typedef SetNoiseCmdVelResponse_<ContainerAllocator> Type;

  SetNoiseCmdVelResponse_()
    : result(0.0)
    , message()  {
    }
  SetNoiseCmdVelResponse_(const ContainerAllocator& _alloc)
    : result(0.0)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef double _result_type;
  _result_type result;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetNoiseCmdVelResponse_

typedef ::ecu_msgs::SetNoiseCmdVelResponse_<std::allocator<void> > SetNoiseCmdVelResponse;

typedef boost::shared_ptr< ::ecu_msgs::SetNoiseCmdVelResponse > SetNoiseCmdVelResponsePtr;
typedef boost::shared_ptr< ::ecu_msgs::SetNoiseCmdVelResponse const> SetNoiseCmdVelResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ecu_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'ecu_msgs': ['/home/user/milrem/src/ecu_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4c149b2183b45b3aae9f20b4bf113766";
  }

  static const char* value(const ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4c149b2183b45b3aULL;
  static const uint64_t static_value2 = 0xae9f20b4bf113766ULL;
};

template<class ContainerAllocator>
struct DataType< ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ecu_msgs/SetNoiseCmdVelResponse";
  }

  static const char* value(const ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 result\n"
"string message\n"
"\n"
;
  }

  static const char* value(const ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetNoiseCmdVelResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ecu_msgs::SetNoiseCmdVelResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<double>::stream(s, indent + "  ", v.result);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ECU_MSGS_MESSAGE_SETNOISECMDVELRESPONSE_H

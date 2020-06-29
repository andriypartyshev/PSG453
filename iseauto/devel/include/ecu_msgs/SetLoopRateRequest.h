// Generated by gencpp from file ecu_msgs/SetLoopRateRequest.msg
// DO NOT EDIT!


#ifndef ECU_MSGS_MESSAGE_SETLOOPRATEREQUEST_H
#define ECU_MSGS_MESSAGE_SETLOOPRATEREQUEST_H


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
struct SetLoopRateRequest_
{
  typedef SetLoopRateRequest_<ContainerAllocator> Type;

  SetLoopRateRequest_()
    : rate(0)  {
    }
  SetLoopRateRequest_(const ContainerAllocator& _alloc)
    : rate(0)  {
  (void)_alloc;
    }



   typedef int64_t _rate_type;
  _rate_type rate;





  typedef boost::shared_ptr< ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetLoopRateRequest_

typedef ::ecu_msgs::SetLoopRateRequest_<std::allocator<void> > SetLoopRateRequest;

typedef boost::shared_ptr< ::ecu_msgs::SetLoopRateRequest > SetLoopRateRequestPtr;
typedef boost::shared_ptr< ::ecu_msgs::SetLoopRateRequest const> SetLoopRateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ecu_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'ecu_msgs': ['/home/user/milrem/src/ecu_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9b2ab16752b70cb6f786c76730929609";
  }

  static const char* value(const ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9b2ab16752b70cb6ULL;
  static const uint64_t static_value2 = 0xf786c76730929609ULL;
};

template<class ContainerAllocator>
struct DataType< ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ecu_msgs/SetLoopRateRequest";
  }

  static const char* value(const ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"int64 rate\n"
;
  }

  static const char* value(const ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetLoopRateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ecu_msgs::SetLoopRateRequest_<ContainerAllocator>& v)
  {
    s << indent << "rate: ";
    Printer<int64_t>::stream(s, indent + "  ", v.rate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ECU_MSGS_MESSAGE_SETLOOPRATEREQUEST_H

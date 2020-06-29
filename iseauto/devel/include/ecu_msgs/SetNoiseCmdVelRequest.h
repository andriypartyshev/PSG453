// Generated by gencpp from file ecu_msgs/SetNoiseCmdVelRequest.msg
// DO NOT EDIT!


#ifndef ECU_MSGS_MESSAGE_SETNOISECMDVELREQUEST_H
#define ECU_MSGS_MESSAGE_SETNOISECMDVELREQUEST_H


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
struct SetNoiseCmdVelRequest_
{
  typedef SetNoiseCmdVelRequest_<ContainerAllocator> Type;

  SetNoiseCmdVelRequest_()
    : linear(0.0)
    , angular(0.0)  {
    }
  SetNoiseCmdVelRequest_(const ContainerAllocator& _alloc)
    : linear(0.0)
    , angular(0.0)  {
  (void)_alloc;
    }



   typedef double _linear_type;
  _linear_type linear;

   typedef double _angular_type;
  _angular_type angular;





  typedef boost::shared_ptr< ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetNoiseCmdVelRequest_

typedef ::ecu_msgs::SetNoiseCmdVelRequest_<std::allocator<void> > SetNoiseCmdVelRequest;

typedef boost::shared_ptr< ::ecu_msgs::SetNoiseCmdVelRequest > SetNoiseCmdVelRequestPtr;
typedef boost::shared_ptr< ::ecu_msgs::SetNoiseCmdVelRequest const> SetNoiseCmdVelRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "144a16e4d6b53a0dbadc2e617460a173";
  }

  static const char* value(const ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x144a16e4d6b53a0dULL;
  static const uint64_t static_value2 = 0xbadc2e617460a173ULL;
};

template<class ContainerAllocator>
struct DataType< ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ecu_msgs/SetNoiseCmdVelRequest";
  }

  static const char* value(const ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 linear\n"
"float64 angular\n"
;
  }

  static const char* value(const ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.linear);
      stream.next(m.angular);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetNoiseCmdVelRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ecu_msgs::SetNoiseCmdVelRequest_<ContainerAllocator>& v)
  {
    s << indent << "linear: ";
    Printer<double>::stream(s, indent + "  ", v.linear);
    s << indent << "angular: ";
    Printer<double>::stream(s, indent + "  ", v.angular);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ECU_MSGS_MESSAGE_SETNOISECMDVELREQUEST_H

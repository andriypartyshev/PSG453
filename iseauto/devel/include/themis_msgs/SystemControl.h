// Generated by gencpp from file themis_msgs/SystemControl.msg
// DO NOT EDIT!


#ifndef THEMIS_MSGS_MESSAGE_SYSTEMCONTROL_H
#define THEMIS_MSGS_MESSAGE_SYSTEMCONTROL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace themis_msgs
{
template <class ContainerAllocator>
struct SystemControl_
{
  typedef SystemControl_<ContainerAllocator> Type;

  SystemControl_()
    : high_voltage(false)
    , fan_override(false)
    , generator(false)
    , work_lights(false)
    , signal_lights(false)
    , imd_override(false)  {
    }
  SystemControl_(const ContainerAllocator& _alloc)
    : high_voltage(false)
    , fan_override(false)
    , generator(false)
    , work_lights(false)
    , signal_lights(false)
    , imd_override(false)  {
  (void)_alloc;
    }



   typedef uint8_t _high_voltage_type;
  _high_voltage_type high_voltage;

   typedef uint8_t _fan_override_type;
  _fan_override_type fan_override;

   typedef uint8_t _generator_type;
  _generator_type generator;

   typedef uint8_t _work_lights_type;
  _work_lights_type work_lights;

   typedef uint8_t _signal_lights_type;
  _signal_lights_type signal_lights;

   typedef uint8_t _imd_override_type;
  _imd_override_type imd_override;





  typedef boost::shared_ptr< ::themis_msgs::SystemControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::themis_msgs::SystemControl_<ContainerAllocator> const> ConstPtr;

}; // struct SystemControl_

typedef ::themis_msgs::SystemControl_<std::allocator<void> > SystemControl;

typedef boost::shared_ptr< ::themis_msgs::SystemControl > SystemControlPtr;
typedef boost::shared_ptr< ::themis_msgs::SystemControl const> SystemControlConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::themis_msgs::SystemControl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::themis_msgs::SystemControl_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace themis_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'themis_msgs': ['/home/user/milrem/src/themis_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::themis_msgs::SystemControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::themis_msgs::SystemControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::themis_msgs::SystemControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::themis_msgs::SystemControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::themis_msgs::SystemControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::themis_msgs::SystemControl_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::themis_msgs::SystemControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c55c2f064ee67c58e2e454e066c5cc98";
  }

  static const char* value(const ::themis_msgs::SystemControl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc55c2f064ee67c58ULL;
  static const uint64_t static_value2 = 0xe2e454e066c5cc98ULL;
};

template<class ContainerAllocator>
struct DataType< ::themis_msgs::SystemControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "themis_msgs/SystemControl";
  }

  static const char* value(const ::themis_msgs::SystemControl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::themis_msgs::SystemControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool high_voltage\n"
"bool fan_override\n"
"bool generator\n"
"bool work_lights\n"
"bool signal_lights\n"
"bool imd_override\n"
;
  }

  static const char* value(const ::themis_msgs::SystemControl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::themis_msgs::SystemControl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.high_voltage);
      stream.next(m.fan_override);
      stream.next(m.generator);
      stream.next(m.work_lights);
      stream.next(m.signal_lights);
      stream.next(m.imd_override);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SystemControl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::themis_msgs::SystemControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::themis_msgs::SystemControl_<ContainerAllocator>& v)
  {
    s << indent << "high_voltage: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.high_voltage);
    s << indent << "fan_override: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fan_override);
    s << indent << "generator: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.generator);
    s << indent << "work_lights: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.work_lights);
    s << indent << "signal_lights: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.signal_lights);
    s << indent << "imd_override: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.imd_override);
  }
};

} // namespace message_operations
} // namespace ros

#endif // THEMIS_MSGS_MESSAGE_SYSTEMCONTROL_H

// Generated by gencpp from file ecu_msgs/TrackControl.msg
// DO NOT EDIT!


#ifndef ECU_MSGS_MESSAGE_TRACKCONTROL_H
#define ECU_MSGS_MESSAGE_TRACKCONTROL_H


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
struct TrackControl_
{
  typedef TrackControl_<ContainerAllocator> Type;

  TrackControl_()
    : speed(0.0)
    , break_status(false)  {
    }
  TrackControl_(const ContainerAllocator& _alloc)
    : speed(0.0)
    , break_status(false)  {
  (void)_alloc;
    }



   typedef double _speed_type;
  _speed_type speed;

   typedef uint8_t _break_status_type;
  _break_status_type break_status;





  typedef boost::shared_ptr< ::ecu_msgs::TrackControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ecu_msgs::TrackControl_<ContainerAllocator> const> ConstPtr;

}; // struct TrackControl_

typedef ::ecu_msgs::TrackControl_<std::allocator<void> > TrackControl;

typedef boost::shared_ptr< ::ecu_msgs::TrackControl > TrackControlPtr;
typedef boost::shared_ptr< ::ecu_msgs::TrackControl const> TrackControlConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ecu_msgs::TrackControl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ecu_msgs::TrackControl_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ecu_msgs::TrackControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ecu_msgs::TrackControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ecu_msgs::TrackControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ecu_msgs::TrackControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ecu_msgs::TrackControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ecu_msgs::TrackControl_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ecu_msgs::TrackControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "64fde1397f518d8d0c581337f6291249";
  }

  static const char* value(const ::ecu_msgs::TrackControl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x64fde1397f518d8dULL;
  static const uint64_t static_value2 = 0x0c581337f6291249ULL;
};

template<class ContainerAllocator>
struct DataType< ::ecu_msgs::TrackControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ecu_msgs/TrackControl";
  }

  static const char* value(const ::ecu_msgs::TrackControl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ecu_msgs::TrackControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 speed\n"
"bool break_status\n"
;
  }

  static const char* value(const ::ecu_msgs::TrackControl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ecu_msgs::TrackControl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.speed);
      stream.next(m.break_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackControl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ecu_msgs::TrackControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ecu_msgs::TrackControl_<ContainerAllocator>& v)
  {
    s << indent << "speed: ";
    Printer<double>::stream(s, indent + "  ", v.speed);
    s << indent << "break_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.break_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ECU_MSGS_MESSAGE_TRACKCONTROL_H

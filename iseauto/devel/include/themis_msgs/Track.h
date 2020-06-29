// Generated by gencpp from file themis_msgs/Track.msg
// DO NOT EDIT!


#ifndef THEMIS_MSGS_MESSAGE_TRACK_H
#define THEMIS_MSGS_MESSAGE_TRACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <themis_msgs/Sevcon.h>
#include <themis_msgs/TrackPdm.h>

namespace themis_msgs
{
template <class ContainerAllocator>
struct Track_
{
  typedef Track_<ContainerAllocator> Type;

  Track_()
    : sevcon()
    , pdm()  {
    }
  Track_(const ContainerAllocator& _alloc)
    : sevcon(_alloc)
    , pdm(_alloc)  {
  (void)_alloc;
    }



   typedef  ::themis_msgs::Sevcon_<ContainerAllocator>  _sevcon_type;
  _sevcon_type sevcon;

   typedef  ::themis_msgs::TrackPdm_<ContainerAllocator>  _pdm_type;
  _pdm_type pdm;





  typedef boost::shared_ptr< ::themis_msgs::Track_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::themis_msgs::Track_<ContainerAllocator> const> ConstPtr;

}; // struct Track_

typedef ::themis_msgs::Track_<std::allocator<void> > Track;

typedef boost::shared_ptr< ::themis_msgs::Track > TrackPtr;
typedef boost::shared_ptr< ::themis_msgs::Track const> TrackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::themis_msgs::Track_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::themis_msgs::Track_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::themis_msgs::Track_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::themis_msgs::Track_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::themis_msgs::Track_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::themis_msgs::Track_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::themis_msgs::Track_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::themis_msgs::Track_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::themis_msgs::Track_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aa218d79e211eae1ef0c9fb3af2a36a1";
  }

  static const char* value(const ::themis_msgs::Track_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaa218d79e211eae1ULL;
  static const uint64_t static_value2 = 0xef0c9fb3af2a36a1ULL;
};

template<class ContainerAllocator>
struct DataType< ::themis_msgs::Track_<ContainerAllocator> >
{
  static const char* value()
  {
    return "themis_msgs/Track";
  }

  static const char* value(const ::themis_msgs::Track_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::themis_msgs::Track_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Sevcon sevcon\n"
"TrackPdm pdm\n"
"\n"
"================================================================================\n"
"MSG: themis_msgs/Sevcon\n"
"uint16 hour_count\n"
"int32 real_rpm\n"
"float32 real_torque\n"
"float32 battery_current\n"
"float32 battery_voltage\n"
"int16 motor_temp\n"
"int8 temp\n"
"\n"
"================================================================================\n"
"MSG: themis_msgs/TrackPdm\n"
"float32 track_coolant_temp\n"
"bool brake_status\n"
;
  }

  static const char* value(const ::themis_msgs::Track_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::themis_msgs::Track_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sevcon);
      stream.next(m.pdm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Track_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::themis_msgs::Track_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::themis_msgs::Track_<ContainerAllocator>& v)
  {
    s << indent << "sevcon: ";
    s << std::endl;
    Printer< ::themis_msgs::Sevcon_<ContainerAllocator> >::stream(s, indent + "  ", v.sevcon);
    s << indent << "pdm: ";
    s << std::endl;
    Printer< ::themis_msgs::TrackPdm_<ContainerAllocator> >::stream(s, indent + "  ", v.pdm);
  }
};

} // namespace message_operations
} // namespace ros

#endif // THEMIS_MSGS_MESSAGE_TRACK_H

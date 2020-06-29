// Generated by gencpp from file themis_msgs/TrackPdm.msg
// DO NOT EDIT!


#ifndef THEMIS_MSGS_MESSAGE_TRACKPDM_H
#define THEMIS_MSGS_MESSAGE_TRACKPDM_H


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
struct TrackPdm_
{
  typedef TrackPdm_<ContainerAllocator> Type;

  TrackPdm_()
    : track_coolant_temp(0.0)
    , brake_status(false)  {
    }
  TrackPdm_(const ContainerAllocator& _alloc)
    : track_coolant_temp(0.0)
    , brake_status(false)  {
  (void)_alloc;
    }



   typedef float _track_coolant_temp_type;
  _track_coolant_temp_type track_coolant_temp;

   typedef uint8_t _brake_status_type;
  _brake_status_type brake_status;





  typedef boost::shared_ptr< ::themis_msgs::TrackPdm_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::themis_msgs::TrackPdm_<ContainerAllocator> const> ConstPtr;

}; // struct TrackPdm_

typedef ::themis_msgs::TrackPdm_<std::allocator<void> > TrackPdm;

typedef boost::shared_ptr< ::themis_msgs::TrackPdm > TrackPdmPtr;
typedef boost::shared_ptr< ::themis_msgs::TrackPdm const> TrackPdmConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::themis_msgs::TrackPdm_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::themis_msgs::TrackPdm_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::themis_msgs::TrackPdm_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::themis_msgs::TrackPdm_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::themis_msgs::TrackPdm_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::themis_msgs::TrackPdm_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::themis_msgs::TrackPdm_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::themis_msgs::TrackPdm_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::themis_msgs::TrackPdm_<ContainerAllocator> >
{
  static const char* value()
  {
    return "65d433095f8620e2fabfbc1e2f848f60";
  }

  static const char* value(const ::themis_msgs::TrackPdm_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x65d433095f8620e2ULL;
  static const uint64_t static_value2 = 0xfabfbc1e2f848f60ULL;
};

template<class ContainerAllocator>
struct DataType< ::themis_msgs::TrackPdm_<ContainerAllocator> >
{
  static const char* value()
  {
    return "themis_msgs/TrackPdm";
  }

  static const char* value(const ::themis_msgs::TrackPdm_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::themis_msgs::TrackPdm_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 track_coolant_temp\n"
"bool brake_status\n"
;
  }

  static const char* value(const ::themis_msgs::TrackPdm_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::themis_msgs::TrackPdm_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.track_coolant_temp);
      stream.next(m.brake_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackPdm_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::themis_msgs::TrackPdm_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::themis_msgs::TrackPdm_<ContainerAllocator>& v)
  {
    s << indent << "track_coolant_temp: ";
    Printer<float>::stream(s, indent + "  ", v.track_coolant_temp);
    s << indent << "brake_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.brake_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // THEMIS_MSGS_MESSAGE_TRACKPDM_H

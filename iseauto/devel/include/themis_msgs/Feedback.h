// Generated by gencpp from file themis_msgs/Feedback.msg
// DO NOT EDIT!


#ifndef THEMIS_MSGS_MESSAGE_FEEDBACK_H
#define THEMIS_MSGS_MESSAGE_FEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <themis_msgs/Battery.h>
#include <themis_msgs/Track.h>
#include <themis_msgs/Track.h>
#include <themis_msgs/Generator.h>
#include <themis_msgs/Vehicle.h>

namespace themis_msgs
{
template <class ContainerAllocator>
struct Feedback_
{
  typedef Feedback_<ContainerAllocator> Type;

  Feedback_()
    : header()
    , battery()
    , left()
    , right()
    , generator()
    , vehicle()  {
    }
  Feedback_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , battery(_alloc)
    , left(_alloc)
    , right(_alloc)
    , generator(_alloc)
    , vehicle(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::themis_msgs::Battery_<ContainerAllocator>  _battery_type;
  _battery_type battery;

   typedef  ::themis_msgs::Track_<ContainerAllocator>  _left_type;
  _left_type left;

   typedef  ::themis_msgs::Track_<ContainerAllocator>  _right_type;
  _right_type right;

   typedef  ::themis_msgs::Generator_<ContainerAllocator>  _generator_type;
  _generator_type generator;

   typedef  ::themis_msgs::Vehicle_<ContainerAllocator>  _vehicle_type;
  _vehicle_type vehicle;





  typedef boost::shared_ptr< ::themis_msgs::Feedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::themis_msgs::Feedback_<ContainerAllocator> const> ConstPtr;

}; // struct Feedback_

typedef ::themis_msgs::Feedback_<std::allocator<void> > Feedback;

typedef boost::shared_ptr< ::themis_msgs::Feedback > FeedbackPtr;
typedef boost::shared_ptr< ::themis_msgs::Feedback const> FeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::themis_msgs::Feedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::themis_msgs::Feedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace themis_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'themis_msgs': ['/home/user/milrem/src/themis_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::themis_msgs::Feedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::themis_msgs::Feedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::themis_msgs::Feedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::themis_msgs::Feedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::themis_msgs::Feedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::themis_msgs::Feedback_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::themis_msgs::Feedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8b3115dccfc099de2189cfdd7df2ec24";
  }

  static const char* value(const ::themis_msgs::Feedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8b3115dccfc099deULL;
  static const uint64_t static_value2 = 0x2189cfdd7df2ec24ULL;
};

template<class ContainerAllocator>
struct DataType< ::themis_msgs::Feedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "themis_msgs/Feedback";
  }

  static const char* value(const ::themis_msgs::Feedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::themis_msgs::Feedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"Battery battery\n"
"Track left\n"
"Track right\n"
"Generator generator\n"
"Vehicle vehicle\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: themis_msgs/Battery\n"
"State air_state\n"
"float32 low_voltage\n"
"float32 high_voltage\n"
"float32 charge_level\n"
"\n"
"# uint16 UNDEFINED_STATE = 0\n"
"# uint16 INIT_STATE = 1\n"
"# uint16 OFF_STATE = 2\n"
"# uint16 SWITCH_ON_STATE = 3\n"
"# uint16 ON_STATE = 4\n"
"# uint16 SWITCH_OFF_STATE = 5\n"
"# uint16 CHARGE_STATE = 6\n"
"\n"
"================================================================================\n"
"MSG: themis_msgs/State\n"
"uint16 id\n"
"string desc\n"
"\n"
"================================================================================\n"
"MSG: themis_msgs/Track\n"
"Sevcon sevcon\n"
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
"\n"
"================================================================================\n"
"MSG: themis_msgs/Generator\n"
"State state\n"
"float32 fuel_level\n"
"Sevcon sevcon\n"
"GeneratorPdm pdm\n"
"\n"
"================================================================================\n"
"MSG: themis_msgs/GeneratorPdm\n"
"float32 motor_coolant_temp\n"
"float32 engine_coolant_temp\n"
"\n"
"================================================================================\n"
"MSG: themis_msgs/Vehicle\n"
"State state\n"
"float32 speed\n"
"State drive_state\n"
"uint8 brake_feedback\n"
"bool imd_error\n"
"VehicleMode mode\n"
"\n"
"================================================================================\n"
"MSG: themis_msgs/VehicleMode\n"
"State vehicle\n"
"State generator\n"
"State speed\n"
"State brake\n"
"State charge\n"
;
  }

  static const char* value(const ::themis_msgs::Feedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::themis_msgs::Feedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.battery);
      stream.next(m.left);
      stream.next(m.right);
      stream.next(m.generator);
      stream.next(m.vehicle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Feedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::themis_msgs::Feedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::themis_msgs::Feedback_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "battery: ";
    s << std::endl;
    Printer< ::themis_msgs::Battery_<ContainerAllocator> >::stream(s, indent + "  ", v.battery);
    s << indent << "left: ";
    s << std::endl;
    Printer< ::themis_msgs::Track_<ContainerAllocator> >::stream(s, indent + "  ", v.left);
    s << indent << "right: ";
    s << std::endl;
    Printer< ::themis_msgs::Track_<ContainerAllocator> >::stream(s, indent + "  ", v.right);
    s << indent << "generator: ";
    s << std::endl;
    Printer< ::themis_msgs::Generator_<ContainerAllocator> >::stream(s, indent + "  ", v.generator);
    s << indent << "vehicle: ";
    s << std::endl;
    Printer< ::themis_msgs::Vehicle_<ContainerAllocator> >::stream(s, indent + "  ", v.vehicle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // THEMIS_MSGS_MESSAGE_FEEDBACK_H

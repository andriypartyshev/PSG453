// Generated by gencpp from file agv_msgs/ID.msg
// DO NOT EDIT!


#ifndef AGV_MSGS_MESSAGE_ID_H
#define AGV_MSGS_MESSAGE_ID_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace agv_msgs
{
template <class ContainerAllocator>
struct ID_
{
  typedef ID_<ContainerAllocator> Type;

  ID_()
    : data(0)  {
    }
  ID_(const ContainerAllocator& _alloc)
    : data(0)  {
  (void)_alloc;
    }



   typedef uint32_t _data_type;
  _data_type data;



  enum {
    INVALID_ID = 0u,
  };


  typedef boost::shared_ptr< ::agv_msgs::ID_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::agv_msgs::ID_<ContainerAllocator> const> ConstPtr;

}; // struct ID_

typedef ::agv_msgs::ID_<std::allocator<void> > ID;

typedef boost::shared_ptr< ::agv_msgs::ID > IDPtr;
typedef boost::shared_ptr< ::agv_msgs::ID const> IDConstPtr;

// constants requiring out of line definition

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::agv_msgs::ID_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::agv_msgs::ID_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace agv_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'agv_msgs': ['/home/user/milrem/src/agv_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::agv_msgs::ID_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::agv_msgs::ID_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::agv_msgs::ID_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::agv_msgs::ID_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::agv_msgs::ID_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::agv_msgs::ID_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::agv_msgs::ID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "13c6eee13b62c0e3ecc8410f8dd0a003";
  }

  static const char* value(const ::agv_msgs::ID_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x13c6eee13b62c0e3ULL;
  static const uint64_t static_value2 = 0xecc8410f8dd0a003ULL;
};

template<class ContainerAllocator>
struct DataType< ::agv_msgs::ID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "agv_msgs/ID";
  }

  static const char* value(const ::agv_msgs::ID_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::agv_msgs::ID_<ContainerAllocator> >
{
  static const char* value()
  {
    return " uint32 data\n"
"\n"
" uint32 INVALID_ID=0\n"
;
  }

  static const char* value(const ::agv_msgs::ID_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::agv_msgs::ID_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ID_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::agv_msgs::ID_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::agv_msgs::ID_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AGV_MSGS_MESSAGE_ID_H

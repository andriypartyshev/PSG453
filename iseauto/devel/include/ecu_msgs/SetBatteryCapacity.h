// Generated by gencpp from file ecu_msgs/SetBatteryCapacity.msg
// DO NOT EDIT!


#ifndef ECU_MSGS_MESSAGE_SETBATTERYCAPACITY_H
#define ECU_MSGS_MESSAGE_SETBATTERYCAPACITY_H

#include <ros/service_traits.h>


#include <ecu_msgs/SetBatteryCapacityRequest.h>
#include <ecu_msgs/SetBatteryCapacityResponse.h>


namespace ecu_msgs
{

struct SetBatteryCapacity
{

typedef SetBatteryCapacityRequest Request;
typedef SetBatteryCapacityResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetBatteryCapacity
} // namespace ecu_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ecu_msgs::SetBatteryCapacity > {
  static const char* value()
  {
    return "a6c003c4fba299af8275270f5cd8fcb6";
  }

  static const char* value(const ::ecu_msgs::SetBatteryCapacity&) { return value(); }
};

template<>
struct DataType< ::ecu_msgs::SetBatteryCapacity > {
  static const char* value()
  {
    return "ecu_msgs/SetBatteryCapacity";
  }

  static const char* value(const ::ecu_msgs::SetBatteryCapacity&) { return value(); }
};


// service_traits::MD5Sum< ::ecu_msgs::SetBatteryCapacityRequest> should match 
// service_traits::MD5Sum< ::ecu_msgs::SetBatteryCapacity > 
template<>
struct MD5Sum< ::ecu_msgs::SetBatteryCapacityRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ecu_msgs::SetBatteryCapacity >::value();
  }
  static const char* value(const ::ecu_msgs::SetBatteryCapacityRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ecu_msgs::SetBatteryCapacityRequest> should match 
// service_traits::DataType< ::ecu_msgs::SetBatteryCapacity > 
template<>
struct DataType< ::ecu_msgs::SetBatteryCapacityRequest>
{
  static const char* value()
  {
    return DataType< ::ecu_msgs::SetBatteryCapacity >::value();
  }
  static const char* value(const ::ecu_msgs::SetBatteryCapacityRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ecu_msgs::SetBatteryCapacityResponse> should match 
// service_traits::MD5Sum< ::ecu_msgs::SetBatteryCapacity > 
template<>
struct MD5Sum< ::ecu_msgs::SetBatteryCapacityResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ecu_msgs::SetBatteryCapacity >::value();
  }
  static const char* value(const ::ecu_msgs::SetBatteryCapacityResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ecu_msgs::SetBatteryCapacityResponse> should match 
// service_traits::DataType< ::ecu_msgs::SetBatteryCapacity > 
template<>
struct DataType< ::ecu_msgs::SetBatteryCapacityResponse>
{
  static const char* value()
  {
    return DataType< ::ecu_msgs::SetBatteryCapacity >::value();
  }
  static const char* value(const ::ecu_msgs::SetBatteryCapacityResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ECU_MSGS_MESSAGE_SETBATTERYCAPACITY_H

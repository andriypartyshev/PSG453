// Generated by gencpp from file ecu_msgs/SetNoiseCmdVel.msg
// DO NOT EDIT!


#ifndef ECU_MSGS_MESSAGE_SETNOISECMDVEL_H
#define ECU_MSGS_MESSAGE_SETNOISECMDVEL_H

#include <ros/service_traits.h>


#include <ecu_msgs/SetNoiseCmdVelRequest.h>
#include <ecu_msgs/SetNoiseCmdVelResponse.h>


namespace ecu_msgs
{

struct SetNoiseCmdVel
{

typedef SetNoiseCmdVelRequest Request;
typedef SetNoiseCmdVelResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetNoiseCmdVel
} // namespace ecu_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ecu_msgs::SetNoiseCmdVel > {
  static const char* value()
  {
    return "d41e247b85cef4fd0ed55934aa9d3071";
  }

  static const char* value(const ::ecu_msgs::SetNoiseCmdVel&) { return value(); }
};

template<>
struct DataType< ::ecu_msgs::SetNoiseCmdVel > {
  static const char* value()
  {
    return "ecu_msgs/SetNoiseCmdVel";
  }

  static const char* value(const ::ecu_msgs::SetNoiseCmdVel&) { return value(); }
};


// service_traits::MD5Sum< ::ecu_msgs::SetNoiseCmdVelRequest> should match 
// service_traits::MD5Sum< ::ecu_msgs::SetNoiseCmdVel > 
template<>
struct MD5Sum< ::ecu_msgs::SetNoiseCmdVelRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ecu_msgs::SetNoiseCmdVel >::value();
  }
  static const char* value(const ::ecu_msgs::SetNoiseCmdVelRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ecu_msgs::SetNoiseCmdVelRequest> should match 
// service_traits::DataType< ::ecu_msgs::SetNoiseCmdVel > 
template<>
struct DataType< ::ecu_msgs::SetNoiseCmdVelRequest>
{
  static const char* value()
  {
    return DataType< ::ecu_msgs::SetNoiseCmdVel >::value();
  }
  static const char* value(const ::ecu_msgs::SetNoiseCmdVelRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ecu_msgs::SetNoiseCmdVelResponse> should match 
// service_traits::MD5Sum< ::ecu_msgs::SetNoiseCmdVel > 
template<>
struct MD5Sum< ::ecu_msgs::SetNoiseCmdVelResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ecu_msgs::SetNoiseCmdVel >::value();
  }
  static const char* value(const ::ecu_msgs::SetNoiseCmdVelResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ecu_msgs::SetNoiseCmdVelResponse> should match 
// service_traits::DataType< ::ecu_msgs::SetNoiseCmdVel > 
template<>
struct DataType< ::ecu_msgs::SetNoiseCmdVelResponse>
{
  static const char* value()
  {
    return DataType< ::ecu_msgs::SetNoiseCmdVel >::value();
  }
  static const char* value(const ::ecu_msgs::SetNoiseCmdVelResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ECU_MSGS_MESSAGE_SETNOISECMDVEL_H

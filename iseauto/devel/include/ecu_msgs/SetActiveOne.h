// Generated by gencpp from file ecu_msgs/SetActiveOne.msg
// DO NOT EDIT!


#ifndef ECU_MSGS_MESSAGE_SETACTIVEONE_H
#define ECU_MSGS_MESSAGE_SETACTIVEONE_H

#include <ros/service_traits.h>


#include <ecu_msgs/SetActiveOneRequest.h>
#include <ecu_msgs/SetActiveOneResponse.h>


namespace ecu_msgs
{

struct SetActiveOne
{

typedef SetActiveOneRequest Request;
typedef SetActiveOneResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetActiveOne
} // namespace ecu_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ecu_msgs::SetActiveOne > {
  static const char* value()
  {
    return "9f8090badf21f79cbb38a70d7676e26b";
  }

  static const char* value(const ::ecu_msgs::SetActiveOne&) { return value(); }
};

template<>
struct DataType< ::ecu_msgs::SetActiveOne > {
  static const char* value()
  {
    return "ecu_msgs/SetActiveOne";
  }

  static const char* value(const ::ecu_msgs::SetActiveOne&) { return value(); }
};


// service_traits::MD5Sum< ::ecu_msgs::SetActiveOneRequest> should match 
// service_traits::MD5Sum< ::ecu_msgs::SetActiveOne > 
template<>
struct MD5Sum< ::ecu_msgs::SetActiveOneRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ecu_msgs::SetActiveOne >::value();
  }
  static const char* value(const ::ecu_msgs::SetActiveOneRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ecu_msgs::SetActiveOneRequest> should match 
// service_traits::DataType< ::ecu_msgs::SetActiveOne > 
template<>
struct DataType< ::ecu_msgs::SetActiveOneRequest>
{
  static const char* value()
  {
    return DataType< ::ecu_msgs::SetActiveOne >::value();
  }
  static const char* value(const ::ecu_msgs::SetActiveOneRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ecu_msgs::SetActiveOneResponse> should match 
// service_traits::MD5Sum< ::ecu_msgs::SetActiveOne > 
template<>
struct MD5Sum< ::ecu_msgs::SetActiveOneResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ecu_msgs::SetActiveOne >::value();
  }
  static const char* value(const ::ecu_msgs::SetActiveOneResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ecu_msgs::SetActiveOneResponse> should match 
// service_traits::DataType< ::ecu_msgs::SetActiveOne > 
template<>
struct DataType< ::ecu_msgs::SetActiveOneResponse>
{
  static const char* value()
  {
    return DataType< ::ecu_msgs::SetActiveOne >::value();
  }
  static const char* value(const ::ecu_msgs::SetActiveOneResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ECU_MSGS_MESSAGE_SETACTIVEONE_H

#include <ros/ros.h>
#include <std_msgs/Float32.h>

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

class angVListener
{
public:
    float rpm;
    void VelocityReceiver(const std_msgs::Float32ConstPtr &msg);
};

void angVListener::VelocityReceiver(const std_msgs::Float32ConstPtr &msg)
{
    rpm = msg->data*60/(2* M_PI);
    printf("RECEIVED\n");
}

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "rotation");
    ros::NodeHandle nh("~");
    ros::Rate rate(60);

    angVListener listener;
    ros::Subscriber feedbackReceiver = nh.subscribe<std_msgs::Float32>("/iseauto/feedback/shaft_angular_velocity", 10,
                                                                       &angVListener::VelocityReceiver, &listener);

    ros::Publisher rotationPublish = nh.advertise<std_msgs::Float32>("/iseauto/feedback/actual_rpm", 10);

    std_msgs::Float32 rpm_msg;
    rpm_msg.data = 0;

  while(ros::ok())
  {
      ros::spinOnce();
      rpm_msg.data = listener.rpm;
      rotationPublish.publish(rpm_msg);
      rate.sleep();

  }
  return 0;
}
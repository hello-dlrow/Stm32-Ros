#include <Arduino.h>
#include <ros.h>
#include <std_msgs/String.h>
#include <sensor_msgs/Imu.h>

ros::NodeHandle nh;


std_msgs::String str_msg;
ros::Publisher chatter("chatter", &str_msg);

char hello[13] = "hello world!";


void setup() {
  nh.initNode();
  nh.advertise(chatter);
  NVIC_EnableIRQ(I2C1_EV_IRQn);
}

void loop() {

  str_msg.data = hello;

  chatter.publish(&str_msg);

  nh.spinOnce();

  delay(300);
}
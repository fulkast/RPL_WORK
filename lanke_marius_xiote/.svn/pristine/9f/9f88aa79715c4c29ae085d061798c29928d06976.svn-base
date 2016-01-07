/*
 * tf_broadcaster.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: marius
 */

#include <ros/ros.h>
#include <tf/transform_broadcaster.h>
#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Pose.h>
#include <nav_msgs/Odometry.h>

//
void get_global_origin_callback(const geometry_msgs::Pose2D::ConstPtr& odom_message);
void get_odom_origin_callback(const nav_msgs::Odometry::ConstPtr& odom_message);

double global_x,global_y,global_theta;
double odom_x,odom_y,odom_theta;
double x_offset, y_offset, theta_offset;
bool localized = false;



int main(int argc, char** argv)
{
  ros::init(argc, argv, "tf_broadcaster_loc_node");
  ros::NodeHandle node;

  tf::TransformBroadcaster br;

  tf::Transform transform;
  tf::Transform transform_map;
  tf::Transform transform_odom_map;
  ros::Subscriber global_odom_sub = node.subscribe<geometry_msgs::Pose2D>("loc_result", 1, get_global_origin_callback);
  ros::Subscriber odom_sub = node.subscribe<nav_msgs::Odometry>("/thymio_driver/odometry", 1, get_odom_origin_callback);
  ros::Rate rate(10.0);
  while (node.ok()){
//    transform_map.setOrigin( tf::Vector3(1.0, 2.0, 0.0) );
//    transform_map.setRotation( tf::Quaternion(0, 0, -0.7071, 0.7071) );
//    br.sendTransform(tf::StampedTransform(transform_map, ros::Time::now(), "odometry_link", "particles_tf"));
//
//    transform.setOrigin( tf::Vector3(1.0, 2.0, 0.0) );
//    transform.setRotation( tf::Quaternion(0, 0, -0.7071, 0.7071) );
//    br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "odometry_link", "points_tf"));

      transform_map.setOrigin( tf::Vector3(0.0, 0.0, 0.0) );
      transform_map.setRotation( tf::Quaternion(0, 0, 0, 1) );
      br.sendTransform(tf::StampedTransform(transform_map, ros::Time::now(), "odometry_link", "particles_tf"));

      transform.setOrigin( tf::Vector3(0.0, 0.0, 0.0) );
      transform.setRotation( tf::Quaternion(0, 0, 0, 1) );
      br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "odometry_link", "points_tf"));


      transform_odom_map.setOrigin( tf::Vector3(x_offset, y_offset, 0.0) );
      transform_odom_map.setRotation( tf::Quaternion(0, 0, sin(-theta_offset/2), cos(-theta_offset/2)) );

//
//
//      transform_odom_map.setOrigin( tf::Vector3(0, 0, 0.0) );
//      transform_odom_map.setRotation( tf::Quaternion(0, 0, 0, 1) );

      br.sendTransform(tf::StampedTransform(transform_odom_map, ros::Time::now(), "/map", "odometry_link"));

      transform.setOrigin( tf::Vector3(0.0, 0.0, 0.0) );
      transform.setRotation( tf::Quaternion(0, 0, 0, 1) );
      br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "base_link", "camera_link"));

//        br.sendTransform(tf::StampedTransform(transform,ros::Time::now(),"camera_depth_optical_frame","camera_rgb_optical_frame"));
    ros::spinOnce();
    rate.sleep();
//    ros::spin();
  }
  return 0;
}

void get_global_origin_callback(const geometry_msgs::Pose2D::ConstPtr& odom_message)
{
    if (!localized) {
        global_x = odom_message->x;
        global_y = odom_message->y;
        global_theta = odom_message->theta;
        x_offset = global_x;
        y_offset = global_y;
        theta_offset =  global_theta - odom_theta;
        localized = true;
    }
}

void get_odom_origin_callback(const nav_msgs::Odometry::ConstPtr& odom_message)
{

        odom_x = odom_message->pose.pose.position.x;
        odom_y = odom_message->pose.pose.position.y;
        odom_theta = 2*acos(odom_message->pose.pose.orientation.w);


}
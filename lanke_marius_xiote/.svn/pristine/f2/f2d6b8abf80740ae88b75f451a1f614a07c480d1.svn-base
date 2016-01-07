/*
 * tf_broadcaster.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: marius
 */

#include <ros/ros.h>
#include <tf/transform_broadcaster.h>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "tf_broadcaster_node");
  ros::NodeHandle node;

  tf::TransformBroadcaster br;

  tf::Transform transform;
  tf::Transform transform_map;

  ros::Rate rate(10.0);
  while (node.ok()){
    transform_map.setOrigin( tf::Vector3(0.0, 0.0, 0.0) );
    transform_map.setRotation( tf::Quaternion(0, 0, 0.7071, 0.7071) );
    br.sendTransform(tf::StampedTransform(transform_map, ros::Time::now(), "/particles_tf", "odometry_link"));

//    transform.setOrigin( tf::Vector3(0.0, 0.0, 0.0) );
//    transform.setRotation( tf::Quaternion(0, 0, 0, 1) );
//    br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "base_link", "camera_link"));

    ros::spinOnce();
    rate.sleep();
  }
  return 0;
}



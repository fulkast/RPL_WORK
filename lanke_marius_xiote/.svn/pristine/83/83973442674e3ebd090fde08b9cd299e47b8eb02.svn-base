/*
 * tf_broadcaster.cpp
 *
 *  Created on: Nov 30, 2015
 *      Author: marius
 */

#include <ros/ros.h>
#include <tf/transform_broadcaster.h>

#include "parameter/tf_broadcaster_bag.h"


int main(int argc, char** argv)
{
  ros::init(argc, argv, "tf_broadcaster_node");
  ros::NodeHandle nh;

  // Construct parameters
  tf_broadcaster_bag parameter;

  // Retrieve all parameters
  nh.getParam("node_name", parameter.node_name);
  nh.getParam("spin_rate", parameter.spin_rate);
  nh.getParam("translation_map_x", parameter.translation_map_x);
  nh.getParam("translation_map_y", parameter.translation_map_y);
  nh.getParam("translation_map_z", parameter.translation_map_z);
  nh.getParam("rotation_map_x", parameter.rotation_map_x);
  nh.getParam("rotation_map_y", parameter.rotation_map_y);
  nh.getParam("rotation_map_z", parameter.rotation_map_z);
  nh.getParam("rotation_map_w", parameter.rotation_map_w);
  nh.getParam("translation_camera_x", parameter.translation_camera_x);
  nh.getParam("translation_camera_y", parameter.translation_camera_y);
  nh.getParam("translation_camera_z", parameter.translation_camera_z);
  nh.getParam("rotation_camera_x", parameter.rotation_camera_x);
  nh.getParam("rotation_camera_y", parameter.rotation_camera_y);
  nh.getParam("rotation_camera_z", parameter.rotation_camera_z);
  nh.getParam("rotation_camera_w", parameter.rotation_camera_w);
  nh.getParam("tf1_from", parameter.tf1_from);
  nh.getParam("tf1_to", parameter.tf1_to);
  nh.getParam("tf2_from", parameter.tf2_from);
  nh.getParam("tf2_to", parameter.tf2_to);

  // Create transforms
  tf::TransformBroadcaster br;
  tf::Transform transform, transform_map;

  ros::Rate rate(parameter.spin_rate);
  while (nh.ok()){
    transform_map.setOrigin( tf::Vector3(parameter.translation_map_x,
    		 	 	 	 	 	 	 	 parameter.translation_map_y,
										 parameter.translation_map_z) );
    transform_map.setRotation( tf::Quaternion(parameter.rotation_map_x,
    										  parameter.rotation_map_y,
											  parameter.rotation_map_z,
											  parameter.rotation_map_w) );
    br.sendTransform(tf::StampedTransform(transform_map,
    									  ros::Time::now(),
										  parameter.tf1_from,
										  parameter.tf1_to));

    transform.setOrigin( tf::Vector3(parameter.translation_camera_x,
    								 parameter.translation_camera_y,
									 parameter.translation_camera_z) );
    transform.setRotation( tf::Quaternion(parameter.rotation_camera_x,
    									  parameter.rotation_camera_y,
										  parameter.rotation_camera_z,
										  parameter.rotation_camera_w) );
    br.sendTransform(tf::StampedTransform(transform,
    									  ros::Time::now(),
										  parameter.tf2_from,
										  parameter.tf2_to));

    ros::spinOnce();
    rate.sleep();
  }
  return 0;
}

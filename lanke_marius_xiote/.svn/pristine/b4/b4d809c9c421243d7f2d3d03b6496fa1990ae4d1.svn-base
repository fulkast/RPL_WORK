/*
 * tf_broadcaster.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: marius
 */

#include <ros/ros.h>
#include <tf/transform_broadcaster.h>

#include "parameter/tf_broadcaster_bag.h"

int main(int argc, char** argv) {
  ros::init(argc, argv, "tf_broadcaster_loc_node");
  ros::NodeHandle node;

    // Construct parameters
  tf_broadcaster_bag parameter;

  // Retrieve all parameters
  node.getParam("spin_rate", parameter.spin_rate);
  node.getParam("translation_map_x", parameter.translation_map_x);
  node.getParam("translation_map_y", parameter.translation_map_y);
  node.getParam("translation_map_z", parameter.translation_map_z);
  node.getParam("rotation_map_x", parameter.rotation_map_x);
  node.getParam("rotation_map_y", parameter.rotation_map_y);
  node.getParam("rotation_map_z", parameter.rotation_map_z);
  node.getParam("rotation_map_w", parameter.rotation_map_w);
  node.getParam("translation_camera_x", parameter.translation_camera_x);
  node.getParam("translation_camera_y", parameter.translation_camera_y);
  node.getParam("translation_camera_z", parameter.translation_camera_z);
  node.getParam("rotation_camera_x", parameter.rotation_camera_x);
  node.getParam("rotation_camera_y", parameter.rotation_camera_y);
  node.getParam("rotation_camera_z", parameter.rotation_camera_z);
  node.getParam("rotation_camera_w", parameter.rotation_camera_w);
  node.getParam("tf1_from", parameter.tf1_from);
  node.getParam("tf1_to", parameter.tf1_to);
  node.getParam("tf2_from", parameter.tf2_from);
  node.getParam("tf2_to", parameter.tf2_to);

  tf::TransformBroadcaster br;
  tf::Transform transform;
  tf::Transform transform_map;

  ros::Rate rate(parameter.spin_rate);

  while (node.ok()){
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
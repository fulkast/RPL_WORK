/*
 * parameter_bag.h
 *
 *  Created on: Dec 4, 2015
 *      Author: marius
 */

#ifndef _PARAMETER_BAG_H_
#define _PARAMETER_BAG_H_

#include <string>
#include <parameter/distribution_bag.h>
#include <parameter/resample_bag.h>
#include <parameter/motion_update_bag.h>
#include <parameter/sensor_update_bag.h>
#include <parameter/visualization_bag.h>

struct parameter_bag
{
	std::string node_name;

	std::string subscribed_rostopic_odom, subscribed_rostopic_map, subscribed_rostopic_scan;
	int queue_size_subscriber_odom, queue_size_subscriber_map, queue_size_subscriber_scan;

	int it_cell_x, it_cell_y, it_theta;

	std::string pub_topic_map, pub_topic_particles, pub_topic_scan, pub_topic_tf;
	int queue_size_pub_map, queue_size_pub_particles, queue_size_pub_scan, queue_size_pub_tf;

	float pose_empty_pos_x, pose_empty_pos_y, pose_empty_pos_z;
	float pose_empty_orient_x, pose_empty_orient_y, pose_empty_orient_z, pose_empty_orient_w;
	float control_odom_prev_pos_x, control_odom_prev_pos_y, control_odom_prev_pos_z;
	float control_odom_prev_orient_x, control_odom_prev_orient_y, control_odom_prev_orient_z, control_odom_prev_orient_w;
	float control_odom_cur_pos_x, control_odom_cur_pos_y, control_odom_cur_pos_z, control_odom_cur_pos_w;
	float control_odom_cur_orient_x, control_odom_cur_orient_y, control_odom_cur_orient_z, control_odom_cur_orient_w;

	distribution_bag distribution;
	resample_bag resample;
	motion_update_bag motion_update;
	sensor_update_bag sensor_update;
	visualization_bag visualization;
};

#endif /* _PARAMETER_BAG_H_ */

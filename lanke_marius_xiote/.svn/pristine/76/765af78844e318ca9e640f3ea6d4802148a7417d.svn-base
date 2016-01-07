/*
 * localization_node.cpp
 *
 *  Created on: Dec 3, 2015
 *      Author: marius
 */

#include <parameter/parameter_bag.h>
#include <localization_processor.h>

int main (int argc, char** argv)
{
	// Initialize ROS
	ros::init (argc, argv, "localization_node");
	ros::NodeHandle nh;

	// Initialize parameter structure
	parameter_bag parameter;

	// Retrieve all parameters
	nh.getParam("subscribed_rostopic_odom", parameter.subscribed_rostopic_odom);
	nh.getParam("queue_size_subscriber_odom", parameter.queue_size_subscriber_odom);
	nh.getParam("subscribed_rostopic_map", parameter.subscribed_rostopic_map);
	nh.getParam("queue_size_subscriber_map", parameter.queue_size_subscriber_map);
	nh.getParam("subscribed_rostopic_scan", parameter.subscribed_rostopic_scan);
	nh.getParam("queue_size_subscriber_scan", parameter.queue_size_subscriber_scan);
	nh.getParam("pub_topic_particles", parameter.pub_topic_particles);
	nh.getParam("queue_size_pub_particles", parameter.queue_size_pub_particles);
	// Parameter for producing the particles
	nh.getParam("it_cell_x", parameter.it_cell_x);
	nh.getParam("it_cell_y", parameter.it_cell_y);
	nh.getParam("it_theta", parameter.it_theta);
	// Initialization parameters
	nh.getParam("pose_empty_pos_x", parameter.pose_empty_pos_x);
	nh.getParam("pose_empty_pos_y", parameter.pose_empty_pos_y);
	nh.getParam("pose_empty_pos_z", parameter.pose_empty_pos_z);
	nh.getParam("pose_empty_orient_x", parameter.pose_empty_orient_x);
	nh.getParam("pose_empty_orient_y", parameter.pose_empty_orient_y);
	nh.getParam("pose_empty_orient_z", parameter.pose_empty_orient_z);
	nh.getParam("pose_empty_orient_w", parameter.pose_empty_orient_w);

	nh.getParam("control_odom_prev_pos_x", parameter.control_odom_prev_pos_x);
	nh.getParam("control_odom_prev_pos_y", parameter.control_odom_prev_pos_y);
	nh.getParam("control_odom_prev_pos_z", parameter.control_odom_prev_pos_z);
	nh.getParam("control_odom_prev_orient_x", parameter.control_odom_prev_orient_x);
	nh.getParam("control_odom_prev_orient_y", parameter.control_odom_prev_orient_y);
	nh.getParam("control_odom_prev_orient_z", parameter.control_odom_prev_orient_z);
	nh.getParam("control_odom_prev_orient_w", parameter.control_odom_prev_orient_w);
	nh.getParam("control_odom_prev_theta", parameter.control_odom_prev_theta);

	nh.getParam("control_odom_cur_pos_x", parameter.control_odom_cur_pos_x);
	nh.getParam("control_odom_cur_pos_y", parameter.control_odom_cur_pos_y);
	nh.getParam("control_odom_cur_pos_z", parameter.control_odom_cur_pos_z);
	nh.getParam("control_odom_cur_orient_x", parameter.control_odom_cur_orient_x);
	nh.getParam("control_odom_cur_orient_y", parameter.control_odom_cur_orient_y);
	nh.getParam("control_odom_cur_orient_z", parameter.control_odom_cur_orient_z);
	nh.getParam("control_odom_cur_orient_w", parameter.control_odom_cur_orient_w);

	// Parameters for distributions
	nh.getParam("max_value_norm_dist_sq", parameter.distribution.max_value_norm_dist_sq);
	nh.getParam("max_value_tri_dist_sq", parameter.distribution.max_value_tri_dist_sq);
	nh.getParam("norm_dist_approx_multiplicator", parameter.distribution.norm_dist_approx_multiplicator);
	nh.getParam("ang_dist_approx_multiplicator", parameter.distribution.ang_dist_approx_multiplicator);
	nh.getParam("num_random_samples", parameter.distribution.num_random_samples);
	// Parameters for motion update
	nh.getParam("alpha1", parameter.motion_update.alpha1);
	nh.getParam("alpha2", parameter.motion_update.alpha2);
	nh.getParam("alpha3", parameter.motion_update.alpha3);
	nh.getParam("alpha4", parameter.motion_update.alpha4);
	// Parameters for sensor update
	nh.getParam("map_obstacle", parameter.sensor_update.map_obstacle);
	nh.getParam("clean_particle_weight", parameter.sensor_update.clean_particle_weight);
	// Parameters for visualization
	nh.getParam("frame_id", parameter.visualization.frame_id);
	nh.getParam("ns", parameter.visualization.ns);
	nh.getParam("mesh_resource", parameter.visualization.mesh_resource);
	nh.getParam("color_alpha", parameter.visualization.color_alpha);
	nh.getParam("pose_orientation", parameter.visualization.pose_orientation);

	nh.getParam("pub_topic_points_particle", parameter.pub_topic_points_particle);
	nh.getParam("queue_size_pub_points", parameter.queue_size_pub_points);
	nh.getParam("pub_topic_loc_state", parameter.pub_topic_loc_state);
	nh.getParam("queue_size_loc_state", parameter.queue_size_loc_state);
	nh.getParam("pub_topic_loc_result", parameter.pub_topic_loc_result);
	nh.getParam("queue_size_loc_result", parameter.queue_size_loc_result);

	// Construct class localization_processor with ros::NodeHandle and parameter structure
	localization_processor localization (nh, parameter);

	// Create ROS subscriber for the map, odometry, scan and localization toggle
	ros::Subscriber sub_map = nh.subscribe(parameter.subscribed_rostopic_map,
									   parameter.queue_size_subscriber_map,
									   &localization_processor::Callback_map,
									   &localization);
	ros::Subscriber sub_odom = nh.subscribe(parameter.subscribed_rostopic_odom,
									   parameter.queue_size_subscriber_odom,
									   &localization_processor::Callback_odom,
									   &localization);
	ros::Subscriber sub_scan = nh.subscribe(parameter.subscribed_rostopic_scan,
									   parameter.queue_size_subscriber_scan,
									   &localization_processor::Callback_scan,
									   &localization);
	ros::Subscriber sub_localization_toggle = nh.subscribe("robot_loc_state",1,
	                                   &localization_processor::Callback_localize_switch,
	                                   &localization);
	// Spin
	ros::spin ();
}

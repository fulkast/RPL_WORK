/*
 * localization_processor.h
 *
 *  Created on: Dec 4, 2015
 *      Author: marius
 */

#ifndef _LOCALIZATION_PROCESSOR_H_
#define _LOCALIZATION_PROCESSOR_H_

#include <parameter/parameter_bag.h>
#include <parameter/distribution_bag.h>
#include <parameter/resample_bag.h>
#include <parameter/motion_update_bag.h>
#include <parameter/sensor_update_bag.h>
#include "parameter/visualization_bag.h"

#include <ros/ros.h>
#include <motion_update.h>
#include <sensor_update.h>
#include <resample.h>
#include <visualization.h>

#include <nav_msgs/Odometry.h>
#include <nav_msgs/OccupancyGrid.h>
#include <sensor_msgs/LaserScan.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Polygon.h>
#include <geometry_msgs/Pose2D.h>
#include <std_msgs/Bool.h>

#include <math.h>
#include <numeric>

struct map_grid
{
	std::vector<int> data;
	float width, height, resolution;
};

struct position3D
{
	float x, y, z;
};

struct orientation_quat
{
	float x, y, z, w;
};

struct pose
{
	position3D position;
	orientation_quat orientation;

	float theta;
};

struct robot_control
{
	pose odometry[2];
};


class localization_processor
{
public:
	// Constructor with nodehandle and parameters
	localization_processor (ros::NodeHandle nh, parameter_bag parameter);

	// Callback of map/OccupancyGrid
	void Callback_map (const nav_msgs::OccupancyGrid::ConstPtr& a_map_msg);

	// Callback of odometry
	void Callback_odom (const nav_msgs::OdometryConstPtr& a_odom_msg);

	// Callback of laser scan
	void Callback_scan (const sensor_msgs::LaserScanConstPtr& a_scan_msg);

	// Create particles in map
	void get_particles ();

	// Check if localization is done
	void check_is_localized(const sensor_msgs::LaserScanConstPtr& scan_msg, size_t effective_scan_size, size_t MVP_index, pose& MVP_particle);

	// Need to localize or not
	void Callback_localize_switch(const std_msgs::Bool localization_toggle);

private:
	ros::NodeHandle nh;
	parameter_bag parameter;

	ros::Publisher pub, pub_points, pub_particle, pub_loc_state, pub_pose;

	map_grid map;
	std::vector<pose> particles;
	std::vector<float> weights;
	std::vector<float> population_x;
	std::vector<float> population_y;
	std::vector<float> population_theta;

	robot_control control;

	// Signaler for communication between odom msg and laser scan msg
	bool sig_odom, sig_scan, is_localized, need_to_localize;

	// TEST DEBUG
	geometry_msgs::Pose test_particle_geo;

	// math_util object
	math_util math_tool;

	// Count iterations
	int count;


};

#endif /* _LOCALIZATION_PROCESSOR_H_ */

/*
 * visualization.cpp
 *
 *  Created on: Dec 6, 2015
 *      Author: marius
 */

#include <visualization.h>

visualization::visualization (visualization_bag visualization_params)
{
	visual_param = visualization_params;
}

void visualization::visualize_particle (std::vector<geometry_msgs::Pose> particles,
											visualization_msgs::MarkerArray::Ptr a_marker_array, int a_marker_id,
											float a_color_r, float a_color_g, float a_color_b,
											float a_scale_x, float a_scale_y, float a_scale_z)
{
	for (int i = 0; i < particles.size(); ++i)
	{
		visualization_msgs::Marker::Ptr a_marker;

		if (i == 10)
		{
			a_marker->color.r = 0.0;
			a_marker->color.g = 1.0;
			a_marker->color.b = 0.0;
		}

		// SET MARKER
		a_marker->header.frame_id = visual_param.frame_id;
		a_marker->header.stamp = ros::Time();
		a_marker->ns = visual_param.ns;
		a_marker->id = a_marker_id;
		a_marker->type = visualization_msgs::Marker::ARROW;
		a_marker->action = visualization_msgs::Marker::ADD;
		// Calculate position of marker
		a_marker->pose.position = particles.at(i).position;
		a_marker->pose.orientation = particles.at(i).orientation;
		// Calculate dimensions of marker
		a_marker->scale.x = a_scale_x;
		a_marker->scale.y = a_scale_y;
		a_marker->scale.z = a_scale_z;
		// Set color and transparancy of marker
		a_marker->color.a = visual_param.color_alpha;
		a_marker->color.r = a_color_r;
		a_marker->color.g = a_color_g;
		a_marker->color.b = a_color_b;

		a_marker_array->markers.push_back(*a_marker);
	}
}

void visualization::visualize_points (visualization_msgs::Marker::Ptr a_marker, int a_marker_id,
											float a_color_r, float a_color_g, float a_color_b,
											float a_scale_x, float a_scale_y, float a_scale_z)
{
	// SET MARKER
	a_marker->header.frame_id = "points_tf";//visual_param.frame_id;
	a_marker->header.stamp = ros::Time();
	a_marker->ns = visual_param.ns;
	a_marker->id = a_marker_id;
	a_marker->type = visualization_msgs::Marker::POINTS;
	a_marker->action = visualization_msgs::Marker::ADD;
	// Orientation of marker
	a_marker->pose.orientation.w = 1.0;
	// Calculate dimensions of marker
	a_marker->scale.x = a_scale_x;
	a_marker->scale.y = a_scale_y;
	a_marker->scale.z = a_scale_z;
	// Set color and transparancy of marker
	a_marker->color.a = visual_param.color_alpha;
	a_marker->color.r = a_color_r;
	a_marker->color.g = a_color_g;
	a_marker->color.b = a_color_b;
}

void visualization::visualize_arrow (geometry_msgs::Pose particle, visualization_msgs::Marker::Ptr a_marker, int a_marker_id,
											float a_color_r, float a_color_g, float a_color_b,
											float a_scale_x, float a_scale_y, float a_scale_z)
{
	// SET MARKER
	a_marker->header.frame_id = visual_param.frame_id;
	a_marker->header.stamp = ros::Time();
	a_marker->ns = visual_param.ns;
	a_marker->id = a_marker_id;
	a_marker->type = visualization_msgs::Marker::ARROW;
	a_marker->action = visualization_msgs::Marker::ADD;
	// Calculate position of marker
	a_marker->pose.position = particle.position;
	a_marker->pose.orientation = particle.orientation;
	// Calculate dimensions of marker
	a_marker->scale.x = a_scale_x;
	a_marker->scale.y = a_scale_y;
	a_marker->scale.z = a_scale_z;
	// Set color and transparancy of marker
	a_marker->color.a = 1.0;//visual_param.color_alpha;
	a_marker->color.r = a_color_r;
	a_marker->color.g = a_color_g;
	a_marker->color.b = a_color_b;
}

void visualization::visualize_particle_pose (geometry_msgs::PoseArray::Ptr poseArray, std::vector<pose> particles)
{
	// Clear last block perception result
	poseArray->poses.clear();

	// Set the header
	poseArray->header.stamp = ros::Time::now();
	poseArray->header.frame_id = "particles_tf";//"odometry_link";

	// Get Pose_array for particles
	for (int i = 0; i < particles.size(); ++i)
	{
		geometry_msgs::Pose pose;

		// Filling pose with position and orientation
		pose.position.x = particles.at(i).position.x;
		pose.position.y = particles.at(i).position.y;
		pose.position.z = particles.at(i).position.z;
		pose.orientation.x = particles.at(i).orientation.x;
		pose.orientation.y = particles.at(i).orientation.y;
		pose.orientation.z = particles.at(i).orientation.z;
		pose.orientation.w = particles.at(i).orientation.w;

		// Append pose to pose_array
		poseArray->poses.push_back(pose);
	}
}



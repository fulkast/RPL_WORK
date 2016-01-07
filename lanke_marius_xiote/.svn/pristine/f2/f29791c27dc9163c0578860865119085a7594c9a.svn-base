/*
 * motion_update.h
 *
 *  Created on: Dec 5, 2015
 *      Author: marius
 */

#ifndef _MOTION_UPDATE_H_
#define _MOTION_UPDATE_H_

#include <tf/transform_datatypes.h>
#include <distribution/distribution.h>
#include <parameter/motion_update_bag.h>
#include <parameter/distribution_bag.h>
#include <localization_processor.h>

// Forward declaration
struct robot_control;
struct pose;

class motion_update
{
public:
	// Constructor with bag_specific parameters
	motion_update(motion_update_bag motion_update_params, distribution_bag dist_params);

	// Update the particle odometry
	void particle_motion(pose& a_particle);

	// Recover the perturbed relative motion parameters
	void get_motion_parameters (robot_control& control);

	// Get the approx. position of the robot
	pose approximate_robot_pose(std::vector<pose>& the_particles);

private:
	motion_update_bag motion_update_params;
	distribution_bag dist_params;

	// Relative motion parameters
	float delta_rot1, delta_trans, delta_rot2;
	float rot1_sq, trans_sq, rot2_sq;
};



#endif /* _MOTION_UPDATE_H_ */

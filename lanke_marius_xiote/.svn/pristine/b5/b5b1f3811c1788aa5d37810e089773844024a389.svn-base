/*
 * motion_update.cpp
 *
 *  Created on: Dec 5, 2015
 *      Author: marius
 */

#include <motion_update.h>

motion_update::motion_update(motion_update_bag motion_update_parameter, distribution_bag dist_parameter)
{
	motion_update_params = motion_update_parameter;
	dist_params = dist_parameter;
}

void motion_update::particle_motion(robot_control control, pose& particle)
{
	// Recover relative motion parameters from control
	float delta_rot1 = float (atan2f(control.odometry[1].position.y - control.odometry[0].position.y,
							         control.odometry[1].position.x - control.odometry[0].position.x) -
			 	 	 	 	  control.odometry[0].theta);
	float delta_trans = float (sqrtf(powf(control.odometry[0].position.x - control.odometry[1].position.x, 2) +
			 	 	 	 	 	 	 powf(control.odometry[0].position.y - control.odometry[1].position.y, 2)));
	float delta_rot2 = float (control.odometry[1].theta - control.odometry[0].theta - delta_rot1);

	// Construct random distributions class
	normal_distribution_approximation norm_dist_approx(dist_params);

	// Perturb the motion parameters by noise in robot motion
	float rot1_sq = (motion_update_params.alpha1 * powf(delta_rot1, 2)) +
			        (motion_update_params.alpha2 * powf(delta_trans, 2));
	float trans_sq = (motion_update_params.alpha3 * powf(delta_trans, 2)) +
					 (motion_update_params.alpha4 * powf(delta_rot1, 2)) +
					 (motion_update_params.alpha4 * powf(delta_rot2, 2));
	float rot2_sq = (motion_update_params.alpha1 * powf(delta_rot2, 2)) +
 	   	   	   	   	(motion_update_params.alpha2 * powf(delta_trans, 2));

	// Noise
	float sample_rot1 = norm_dist_approx.sample_distribution(rot1_sq);
	float sample_trans = norm_dist_approx.sample_distribution(trans_sq);
	float sample_rot2 = norm_dist_approx.sample_distribution(rot2_sq);

	// Perturbed motion parameters
	float delta_rot1_perturbed = delta_rot1 - sample_rot1;
	float delta_trans_perturbed = delta_trans - sample_trans;
	float delta_rot2_perturbed = delta_rot2 - sample_rot2;

//	std::cout << "Delta Y is : " << control.odometry[1].position.y - control.odometry[0].position.y <<
//			" and Delta X is : " << control.odometry[1].position.x - control.odometry[0].position.x <<
//			" and the theta " << control.odometry[0].theta << std::endl;
//
//
//			std::cout << "d_rot1: " << delta_rot1 << " | "
//			  << "d_rot1_pur: " << delta_rot1_perturbed << " | "
//			  << "d_trans: " << delta_trans << " | "
//			  << "d_trans_pur: " << delta_trans_perturbed << " | "
//			  << "d_rot2: " << delta_rot2 << " | "
//			  << "d_rot2_pur: " << delta_rot2_perturbed
//			  << std::endl;

	// Update the current pose x_t of the particle using the sample motion parameters
	particle.position.x = particle.position.x + delta_trans_perturbed * cosf(particle.theta + delta_rot1_perturbed);
	particle.position.y = particle.position.y + delta_trans_perturbed * sinf(particle.theta + delta_rot1_perturbed);
	particle.position.z = 0.0;

	// Update angle theta of particles
	particle.theta = particle.theta + delta_rot1_perturbed + delta_rot2_perturbed;

	// Update: Convert back angle to quaternion
	particle.orientation.x = tf::createQuaternionFromYaw(particle.theta).getX();
	particle.orientation.y = tf::createQuaternionFromYaw(particle.theta).getY();
	particle.orientation.z = tf::createQuaternionFromYaw(particle.theta).getZ();
	particle.orientation.w = tf::createQuaternionFromYaw(particle.theta).getW();
}

pose motion_update::approximate_robot_pose(std::vector<pose>& particles)
{
	float x, y, z, x_o, y_o, z_o, w_o, theta;

	// Accumulate poses of all particles
	for (int i = 0; i < particles.size(); ++i)
	{
		x += particles.at(i).position.x;
		y += particles.at(i).position.y;
		z += particles.at(i).position.z;
		x_o += particles.at(i).orientation.x;
		y_o += particles.at(i).orientation.y;
		z_o += particles.at(i).orientation.z;
		w_o += particles.at(i).orientation.w;
		theta += particles.at(i).theta;
	}

	// Average the robots position and orientation
	pose robot_pose;
	robot_pose.position.x = x/particles.size();
	robot_pose.position.y = y/particles.size();
	robot_pose.position.z = z/particles.size();
	robot_pose.orientation.x = x_o/particles.size();
	robot_pose.orientation.y = y_o/particles.size();
	robot_pose.orientation.z = z_o/particles.size();
	robot_pose.orientation.w = w_o/particles.size();
	robot_pose.theta = theta/particles.size();

	return robot_pose;
}


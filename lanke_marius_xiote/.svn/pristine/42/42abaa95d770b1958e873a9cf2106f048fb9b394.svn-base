/*
 * localization_processor.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: marius
 */

#include <localization_processor.h>

localization_processor::localization_processor (ros::NodeHandle nodehandle, parameter_bag params_bag)
{
	nh = nodehandle;
	parameter = params_bag;

	// First run odometry callback
	sig_odom = false;
	sig_scan = false;
	is_localized = false;
	need_to_localize = true;

	// Create a ROS publisher
	pub = nh.advertise<geometry_msgs::PoseArray> ("particles_tf",//parameter.pub_topic_particles,
							  	  	  	  	  	  parameter.queue_size_pub_particles,
												  true);
	// Create a ROS publisher
	pub_points = nh.advertise<visualization_msgs::Marker> ("points_particle", 1, true);

	// Create ROS publisher to signal when localization is done
	pub_loc_state = nh.advertise<std_msgs::Bool> ("loc_state", 1, true);

	// Create localized pose publisher
	pub_pose = nh.advertise<geometry_msgs::Pose2D>("loc_result",1,true);


	// Initialize robot control, initial and current pose
	control.odometry[0].position.x = parameter.control_odom_prev_pos_x;
	control.odometry[0].position.y = parameter.control_odom_prev_pos_y;
	control.odometry[0].position.z = parameter.control_odom_prev_pos_z;
	control.odometry[0].orientation.x = parameter.control_odom_prev_orient_x;
	control.odometry[0].orientation.y = parameter.control_odom_prev_orient_y;
	control.odometry[0].orientation.z = parameter.control_odom_prev_orient_z;
	control.odometry[0].orientation.w = parameter.control_odom_prev_orient_w;
	control.odometry[0].theta = parameter.control_odom_prev_theta;
}

void localization_processor::Callback_map (const nav_msgs::OccupancyGrid::ConstPtr& map_msg)
{
	// Save map data and info
	map.height = map_msg->info.height;
	map.width = map_msg->info.width;
	map.resolution = map_msg->info.resolution;

	// Save the map.data as integer 0 or 100
	for (int i=0; i < map_msg->data.size(); ++i)
	{
		map.data.push_back(map_msg->data.at(i));
	}

	// Create the set of particles
	get_particles();
}

void localization_processor::Callback_odom (const nav_msgs::OdometryConstPtr& odom_msg)
{
	if (sig_odom == true)
	{
		control.odometry[0] = control.odometry[1];
		sig_odom = false;
	}

	// Update current odometry
	control.odometry[1].position.x = odom_msg->pose.pose.position.x;
	control.odometry[1].position.y = odom_msg->pose.pose.position.y;
	control.odometry[1].position.z = odom_msg->pose.pose.position.z;
	control.odometry[1].orientation.x = odom_msg->pose.pose.orientation.x;
	control.odometry[1].orientation.y = odom_msg->pose.pose.orientation.y;
	control.odometry[1].orientation.z = odom_msg->pose.pose.orientation.z;
	control.odometry[1].orientation.w = odom_msg->pose.pose.orientation.w;

	// Transform quaternion orientation to theta (yaw)
	tf::Quaternion q(control.odometry[1].orientation.x,
					 control.odometry[1].orientation.y,
					 control.odometry[1].orientation.z,
					 control.odometry[1].orientation.w);

	tf::Matrix3x3 m(q);
	double roll, pitch, yaw;
	m.getRPY(roll, pitch, yaw);

	control.odometry[1].theta = (float) yaw;

	//Set signaler such that scan callback can be executed
	sig_scan = true;
}

void localization_processor::Callback_scan (const sensor_msgs::LaserScanConstPtr& scan_msg)
{

	if(need_to_localize) {
//		std::cout << is_localized << " localization status" << std::endl;
		std_msgs::Bool localize_status;
		localize_status.data = false;
		pub_loc_state.publish(localize_status);
		// Wait unitl odometry first changed
		if ((control.odometry[0].position.x == control.odometry[1].position.x) &&
			(control.odometry[0].position.y == control.odometry[1].position.y) &&
			(control.odometry[0].theta == control.odometry[1].theta)) {
			sig_scan = false;
		}

		// Wait until odometry first changed and do the odometry callback first
		if (sig_scan == true) {
			// Construct motion_update
			motion_update motion_upd(parameter.motion_update, parameter.distribution);

			//Construct sensor_update class
			sensor_update sensor_upd(parameter.sensor_update);

			// Construct resample
			roulette_sampling roulette_samp(parameter.resample);

			// Construct visualization class
			visualization vis(parameter.visualization);

			// Recover motion parameters
			motion_upd.get_motion_parameters(control);

			// Clear the weights
			weights.clear();
			population_theta.clear();
			population_x.clear();
			population_y.clear();
			for (int i = 0; i < particles.size(); ++i) {
				// Update motion
				motion_upd.particle_motion(particles.at(i));

				// Sensor update: Get weights of particles
				weights.push_back(sensor_upd.get_particle_weight(scan_msg, particles.at(i), map));

				// Update individual dimension vectors
				population_x.push_back(particles.at(i).position.x);
				population_y.push_back(particles.at(i).position.y);
				population_theta.push_back(particles.at(i).theta);
			}


			// Get approximation of the robots position
			pose robot_pose = motion_upd.approximate_robot_pose(particles);

			// Sum of weights
			float sum_of_weights = std::accumulate(weights.begin(), weights.end(), 0.0);

			// Normalize weights
			std::transform(weights.begin(), weights.end(), weights.begin(),
						   std::bind1st(std::multiplies<float>(), (1 / sum_of_weights)));

			// Resample the particles
			roulette_samp.resample_distribution(particles, weights);

			// Create particle visualization
			geometry_msgs::PoseArray::Ptr pose_array(new geometry_msgs::PoseArray);
			vis.visualize_particle_pose(pose_array, particles);

			// Publish the marker array of the particles
			pub.publish(pose_array);

			// Visualize laserscan points projected on particle with hightest weight
			// Create points seen by the particle with the highest weight
			visualization_msgs::Marker::Ptr points_particle(new visualization_msgs::Marker);
			std::vector<position3D> points;

			int most_important_particle_index = std::distance(weights.begin(),
															  std::max_element(weights.begin(), weights.end()));
			pose most_important_particle = particles.at(most_important_particle_index);

			// Get current point cloud statistics to check for localization convergence
			size_t effective_scan_size = 0;

			for (size_t i = 0; i < scan_msg->ranges.size(); i++) {
				if (scan_msg->ranges.at(i) > scan_msg->range_min && scan_msg->ranges.at(i) < scan_msg->range_max) {
					effective_scan_size++;
				}
			}

			// Check if localization is done
			check_is_localized(scan_msg, effective_scan_size, most_important_particle_index, most_important_particle);

			// Get points of most important particle
			sensor_upd.convert_sensor_measurement_to_points(scan_msg, most_important_particle, points);

			vis.visualize_points(points_particle, parameter.vis_marker_id,
								 parameter.vis_color_b, parameter.vis_color_g,
								 parameter.vis_color_r, parameter.vis_scale_x,
								 parameter.vis_scale_y, parameter.vis_scale_z);

			// Add points to geometry_msgs
			for (int i = 0; i < points.size(); ++i) {
				geometry_msgs::Point p;

				p.x = points.at(i).x;
				p.y = points.at(i).y;
				p.z = points.at(i).z;

				points_particle->points.push_back(p);
			}

			// Publish the points seen by the particle with the highest weight
			pub_points.publish(points_particle);

			// Update signalers
			sig_scan = false;
			sig_odom = true;
		}
	}
}

void localization_processor::get_particles ()
{
	// Put particles in x-coordinate in each it_cell_x cell
	for (int i = 0; i < map.height; i += parameter.it_cell_x)//
	{
		// Put particles in y-coordinate in each it_cell_y cell
		for (int j = 0; j < map.width; j += parameter.it_cell_y)//
		{
			// Distribute particles with different theta orientation
			for (float theta = 0.0; theta < 2*M_PI; theta += 2*M_PI/parameter.it_theta)
			{
				if (map.data.at(i+j*map.width) == 0)
				{
					pose a_particle;

					// Get particle position from grid
					a_particle.position.x = i*map.resolution;
					a_particle.position.y = j*map.resolution;
					a_particle.position.z = 0.0;

					// Save theta of particles
					a_particle.theta = theta;

					// Convert theta to quaternion
					a_particle.orientation.x = tf::createQuaternionFromYaw(theta).getX();
					a_particle.orientation.y = tf::createQuaternionFromYaw(theta).getY();
					a_particle.orientation.z = tf::createQuaternionFromYaw(theta).getZ();
					a_particle.orientation.w = tf::createQuaternionFromYaw(theta).getW();

					// Add particle to set of particles
					particles.push_back(a_particle);
				}
			}
		}
	}
}


void localization_processor::check_is_localized(const sensor_msgs::LaserScanConstPtr& scan_msg, size_t effective_scan_size, size_t MVP_index, pose& MVP_particle)

{
	sensor_update sensor_upd(parameter.sensor_update);

	if (effective_scan_size > parameter.correlation_count_threshold || is_localized)
	{

		float x_var, y_var, theta_var, weight_var;
		float pop_N_sqrd = (weights.size() * weights.size());
		float pop_1_over_N_sqrd = 1.f / pop_N_sqrd;
		x_var = math_tool.get_variance(population_x);
		y_var = math_tool.get_variance(population_y);
		theta_var = math_tool.get_variance(population_theta);
		weight_var = math_tool.get_variance(weights);

		// If the point cloud is low in variance i.e. one tight cluster
		if ( x_var * pop_1_over_N_sqrd < parameter.x_variance_threshold &&
			y_var * pop_1_over_N_sqrd < parameter.y_variance_threshold &&
			theta_var * pop_1_over_N_sqrd < parameter.theta_variance_threshold &&
			weight_var * pop_1_over_N_sqrd < parameter.weights_variance_threshold &&
			weights.at(MVP_index) * weights.size() > parameter.single_weight_min
			 || is_localized)
			{
			float mean_x = math_tool.get_weighted_mean(population_x, weights);
			float mean_y = math_tool.get_weighted_mean(population_y, weights);
			float mean_theta = math_tool.get_weighted_mean(population_theta, weights);
			MVP_particle.theta = mean_theta;
			MVP_particle.position.x = mean_x;
			MVP_particle.position.y = mean_y;


			// Furthermore if the average of the current scans would result in a dense cloud
			// greater than the value in the if condition
			if (sensor_upd.get_particle_weight(scan_msg, MVP_particle, map)
				>
				parameter.correlation_count_threshold && !is_localized) {

				// Furthermore if the resultant point cloud is not one dimensional
				// ... This prevents us from localizing at flat walls which dont have much angle information

				is_localized = true;
				std_msgs::Bool ros_localize_status;
				ros_localize_status.data = true;
				pub_loc_state.publish(ros_localize_status);

			}
			if(is_localized)
			{
				geometry_msgs::Pose2D best_pose;
				best_pose.x = MVP_particle.position.x;
				best_pose.y = MVP_particle.position.y;
				best_pose.theta = MVP_particle.theta;
				pub_pose.publish(best_pose);
				std_msgs::Bool ros_localize_status;
				ros_localize_status.data = true;
				pub_loc_state.publish(ros_localize_status);
			}
		}

	}

}

void localization_processor::Callback_localize_switch(const std_msgs::Bool localization_toggle)
{
	if (localization_toggle.data == false)
	{need_to_localize = false;}
	else if(localization_toggle.data == true){
		need_to_localize = true;
	}

}

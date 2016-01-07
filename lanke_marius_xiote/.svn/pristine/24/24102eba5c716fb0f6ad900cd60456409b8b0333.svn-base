/*
 * sensor_update.cpp
 *
 *  Created on: Dec 6, 2015
 *      Author: marius
 */

#include <sensor_update.h>

sensor_update::sensor_update (sensor_update_bag sensor_update_parameter)
{
	sensor_update_param = sensor_update_parameter;
}

float sensor_update::get_particle_weight(const sensor_msgs::LaserScanConstPtr& scan_msg, pose& particle, map_grid& map)
{
	std::vector<position3D> points;

	// Convert sensor measurement to points in global map
	convert_sensor_measurement_to_points(scan_msg, particle, points);

	// Get correlation value of particle and map
	int correlation = correlation_particle_map(points, map);

	float particle_weight = float(correlation);

	// Clean the particle weights such that particles are highly unlikely to be outside of the map
	clean_weight_of_particle(particle_weight, particle, map);

//	std::cout << "particle_weight: " << particle_weight << std::endl;

	return particle_weight;
}

void sensor_update::convert_sensor_measurement_to_points (const sensor_msgs::LaserScanConstPtr& scan_msg, pose& particle, std::vector<position3D>& points)
{
	for (int i = 0; i < scan_msg->ranges.size(); ++i)
	{
		// Range and angle of laser scan point in local camera frame
		float range = scan_msg->ranges.at(i);
		float angle = scan_msg->angle_min + i*scan_msg->angle_increment;

		// If range is within [range_min range_max] of the scan
		if (range > scan_msg->range_min && range < scan_msg->range_max)
		{
			position3D point_scan, translation, rotation, pos;

			// Calculate polar rotation of the scan point in camera frame
			point_scan.x = range * cosf(angle);
			point_scan.y = range * sinf(angle);
			point_scan.z = 0.0;

			// Calculate rotational part
			rotation.x = point_scan.x * cosf(particle.theta) - point_scan.y * sinf(particle.theta);
			rotation.y = point_scan.x * sinf(particle.theta) + point_scan.y * cosf(particle.theta);
			rotation.z = 0.0;

			// Calculate translational part
			translation.x = particle.position.x;
			translation.y = particle.position.y;
			translation.z = 0.0;

			// Get final coordinates of point in global map
			pos.x = rotation.x + translation.x;
			pos.y = rotation.y + translation.y;
			pos.z = 0.0;

			points.push_back(pos);
		}
	}
}

int sensor_update::correlation_particle_map (std::vector<position3D>& points, map_grid& map)
{
	int correlation = 0;

	for (int i = 0; i < points.size(); ++i)
	{
		int map_index = int(points.at(i).x/map.resolution) + int(points.at(i).y*map.width/map.resolution);

		// Count correlations if point is within the map
		if (map_index < map.data.size())
		{
			if (map.data.at(map_index) == sensor_update_param.map_obstacle)
			{
				correlation += 1;
			}
		}
	}

	return correlation;
}

void sensor_update::clean_weight_of_particle(float& particle_weight, pose& particle, map_grid& map)
{
	int map_index = int(particle.position.x/map.resolution) + int(particle.position.y*map.width/map.resolution);

	if (particle.position.x > map.width*map.resolution || particle.position.x < 0.0 ||
		particle.position.y > map.height*map.resolution || particle.position.y < 0.0)// || map.data.at(map_index) == sensor_update_param.map_obstacle)
	{
		// Assign low correlation/ particle weight
		particle_weight = sensor_update_param.clean_particle_weight;
	}
}

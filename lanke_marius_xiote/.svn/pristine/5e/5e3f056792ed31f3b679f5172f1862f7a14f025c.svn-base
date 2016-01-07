/*
 * sensor_update.h
 *
 *  Created on: Dec 6, 2015
 *      Author: marius
 */

#ifndef _SENSOR_UPDATE_H_
#define _SENSOR_UPDATE_H_

#include <parameter/sensor_update_bag.h>
#include <sensor_msgs/LaserScan.h>
#include <localization_processor.h>
#include <tf/LinearMath/Transform.h>

// Forward declaration
struct pose;
struct position3D;
struct map_grid;

class sensor_update
{
public:
	// Constructor with bag-specific parameters
	sensor_update (sensor_update_bag sensor_update_param);

	// Get the weight of a particle due to the correlation of scan scene and map
	float get_particle_weight (const sensor_msgs::LaserScanConstPtr& a_scan_msg, pose& a_particle, map_grid& a_map);

	// Convert the sensor measurement to points in the global map (Get the laser scan points in the global frame of one particle)
	void convert_sensor_measurement_to_points (const sensor_msgs::LaserScanConstPtr& a_scan_msg, pose& particle, std::vector<position3D>& a_points);

	// Get the correlation of the particle and the map
	int correlation_particle_map (std::vector<position3D>& a_points, map_grid& a_map);

	// Clean particles outside of the map and set weight diminishing small
	void clean_weight_of_particle (float& particle_weight, pose& a_particle, map_grid& map);

private:
	sensor_update_bag sensor_update_param;
};

#endif /* _SENSOR_UPDATE_H_ */

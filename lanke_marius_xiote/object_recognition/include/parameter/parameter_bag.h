/*
 * parameter_bag.h
 *
 *  Created on: Dec 14, 2015
 *      Author: marius
 */

#ifndef _PARAMETER_BAG_H_
#define _PARAMETER_BAG_H_

#include <string>
#include <vector>
#include <map>

#include "parameter/visualization_bag.h"

struct parameter_bag
{
	std::string node_name, camera_topic, marker_topic, objrec_topic, robot_topic, camera_frame_id;
	int camera_topic_queuesize, marker_topic_queuesize, objrec_topic_queuesize, robot_topic_queuesize;

	std::vector<std::string> labels;

	std::string firefighter_dir;
	std::vector<double> firefighter_color;

	std::string man_dir;
	std::vector<double> man_color;

	std::string woman_dir;
	std::vector<double> woman_color;

	std::map<std::string, std::vector<float> > obj_color_map;
	std::map<std::string, std::string> obj_dir_map;

	int histogram_size;
	float score_lower_bound;

	std::string dir, color;

	visualization_bag visualization;
};

#endif /* _PARAMETER_BAG_H_ */

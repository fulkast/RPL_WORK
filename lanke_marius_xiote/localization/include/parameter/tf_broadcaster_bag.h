/*
 * tf_broadcaster_bag.h
 *
 *  Created on: Dec 15, 2015
 *      Author: marius
 */

#ifndef _TF_BROADCASTER_BAG_H_
#define _TF_BROADCASTER_BAG_H_

#include <string>

struct tf_broadcaster_bag
{
	std::string node_name;

	float spin_rate;

	float translation_map_x, translation_map_y, translation_map_z;
	float rotation_map_x, rotation_map_y, rotation_map_z, rotation_map_w;

	float translation_camera_x, translation_camera_y, translation_camera_z;
	float rotation_camera_x, rotation_camera_y, rotation_camera_z, rotation_camera_w;

	std::string tf1_from, tf1_to, tf2_from, tf2_to;
};

#endif /* _TF_BROADCASTER_BAG_H_ */

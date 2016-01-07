/*
 * visualization_bag.h
 *
 *  Created on: Dec 15, 2015
 *      Author: marius
 */

#ifndef _VISUALIZATION_BAG_H_
#define _VISUALIZATION_BAG_H_

#include <string>

struct visualization_bag
{
	float box_diag_multiplier;
	float marker_transparancy;
	std::string marker_namespace;
	int loop_time;
};



#endif /* _VISUALIZATION_BAG_H_ */

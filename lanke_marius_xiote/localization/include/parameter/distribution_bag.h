/*
 * distribution_bag.h
 *
 *  Created on: Dec 5, 2015
 *      Author: marius
 */

#ifndef _DISTRIBUTION_BAG_H_
#define _DISTRIBUTION_BAG_H_

#include <string>

struct distribution_bag
{
	float mean_norm_dist, st_dev_norm_dist, max_value_norm_dist_sq;
	float mean_tri_dist, st_dev_tri_dist, max_value_tri_dist_sq;

	int num_random_samples;
	float norm_dist_approx_multiplicator, ang_dist_approx_multiplicator;
};

#endif /* _DISTRIBUTION_BAG_H_ */

/*
 * math_util.h
 *
 *  Created on: Dec 5, 2015
 *      Author: marius
 */

#ifndef _MATH_UTIL_H_
#define _MATH_UTIL_H_

#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <Eigen/Dense>
#include <vector>

class math_util
{
public:
	// Constructor
	math_util ();

	// Get random number from uniform sampling in the area [-a_b_max a_b_max]
	float random_uniform_sampling (float a_b_max);

	// Get random number from uniform sampling in the area [0 a_b_max]
	float random_uniform_sampling_positive (float a_b_max);

	// Get variance of a distribution
	float get_variance(std::vector<float> distribution_);

	// Get weighted mean
	float get_weighted_mean(std::vector<float> population_, std::vector<float> weights_);

	// Create an Eigen based vector
	Eigen::VectorXf transform_to_eigen(std::vector<float> std_vector);
};



#endif /* _MATH_UTIL_H_ */

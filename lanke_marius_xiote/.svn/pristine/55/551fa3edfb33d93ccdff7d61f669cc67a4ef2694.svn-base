/*
 * normal_distribution_approximation.cpp
 *
 *  Created on: Dec 5, 2015
 *      Author: marius
 */

#include <distribution/distribution.h>

normal_distribution_approximation::normal_distribution_approximation(distribution_bag dist_parameter)
{
	dist_params = dist_parameter;
}

float normal_distribution_approximation::sample_distribution(float b_sq, float mean, float st_dev)
{
	// Construct math_util class
	math_util math;

	float num_sum = 0;
	for (int i = 0; i < dist_params.num_random_samples + 1; ++i)
	{
		num_sum += math.random_uniform_sampling(sqrtf(b_sq));
	}
	return (num_sum*dist_params.norm_dist_approx_multiplicator);
}

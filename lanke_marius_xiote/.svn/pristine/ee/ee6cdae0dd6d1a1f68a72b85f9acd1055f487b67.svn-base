/*
 * roulette_sampling.cpp
 *
 *  Created on: Dec 6, 2015
 *      Author: marius
 */

#include <resample.h>

roulette_sampling::roulette_sampling(resample_bag resample_parameters)
{
	resample_params = resample_parameters;
}

void roulette_sampling::resample_distribution(std::vector<pose>& particles, std::vector<float>& weights)
{
	// Construct random uniform sampling
	math_util math;

	std::vector<pose> sampled_particles;

	// Get accumulated weights in vector thus last element is equal to one
	std::vector<float> accumulated_weights;
	float acc_weight = 0;

	for (int i = 0; i < particles.size(); ++i)
	{
		acc_weight += weights.at(i);
		accumulated_weights.push_back(acc_weight);
	}

	for (int i = 0; i < particles.size(); ++i)
	{
		// Get random number uniformly sampled from [0, b_max]
		// In last element of accumulated_weights is the total sum of all weights
		float num = math.random_uniform_sampling_positive(accumulated_weights.at(accumulated_weights.size() - 1));

		for (int j = 0; j < particles.size(); ++j)
		{
			if (num >= accumulated_weights.at(j))
			{
				continue;
			}
			else
			{
				sampled_particles.push_back(particles.at(j));
				break;
			}
		}
	}

	// Set sampled_particles to particles
	particles = sampled_particles;
}



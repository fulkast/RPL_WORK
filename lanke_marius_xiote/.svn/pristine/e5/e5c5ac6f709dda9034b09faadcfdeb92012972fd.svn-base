/*
 * normal_distribution.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: marius
 */

#include <distribution/distribution.h>

normal_distribution::normal_distribution()
{
}

float normal_distribution::sample_distribution(float b_sq, float mean, float st_dev)
{
	// Create random generator engine
	boost::mt19937 rng;

	// Set the seed always different
	static unsigned int seed = 0;
	rng.seed((++seed) + time(NULL));

	// Set type of distribution
	boost::normal_distribution<> nd(mean, st_dev);
	// Create random number generator
	boost::variate_generator<boost::mt19937&, boost::normal_distribution<> > var_nor(rng, nd);

	double rand = var_nor();
	float max_value = std::sqrt(b_sq);

	while (std::abs(rand) > max_value)
	{
		rand = var_nor();
	}
	return rand;
}

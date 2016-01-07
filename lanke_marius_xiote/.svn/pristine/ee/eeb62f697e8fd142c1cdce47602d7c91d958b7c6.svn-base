/*
 * triangular_distribution.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: marius
 */

#include <distribution/distribution.h>

triangular_distribution::triangular_distribution()
{
}

float triangular_distribution::sample_distribution(float b_sq, float mean, float st_dev)
{
	// Create random generator engine
	boost::mt19937 rng;

	// Set the seed always different
	static unsigned int seed = 0;
	rng.seed((++seed) + time(NULL));

	// Set type of distribution
	boost::triangle_distribution<> td(-std::sqrt(b_sq), mean, std::sqrt(b_sq));
	// Create random number generator
	boost::variate_generator<boost::mt19937&, boost::triangle_distribution<> > var_nor(rng, td);

	return var_nor();
}


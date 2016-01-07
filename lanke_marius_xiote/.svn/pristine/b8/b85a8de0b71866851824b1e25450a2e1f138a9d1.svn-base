/*
 * math_util.cpp
 *
 *  Created on: Dec 5, 2015
 *      Author: marius
 */

#include <util/math_util.h>

math_util::math_util()
{
}

float math_util::random_uniform_sampling(float b_max)
{
	// Set the seed
	static unsigned int seed = 0;
	srand((++seed) + time(NULL));

	// Return random float value from uniform sampling within the limits of [-b_max, b_max]
	float num = (static_cast <float> (rand())/ static_cast <float> (RAND_MAX))*(2*b_max)-b_max;

	return num;
}

float math_util::random_uniform_sampling_positive(float b_max)
{
	// Set the seed
	static unsigned int seed = 0;
	srand((++seed) + time(NULL));

	// Return random float value from uniform sampling within the limits of [0, b_max]
	float num = (static_cast <float> (rand())/ static_cast <float> (RAND_MAX))*b_max;

	return num;
}

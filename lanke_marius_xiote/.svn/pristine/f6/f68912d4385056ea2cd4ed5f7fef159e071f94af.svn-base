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

float math_util::get_variance(std::vector<float> distribution_)
{
	// Initialize an Eigen vector representing the distribution
	// In the following the formula for variance is implemented:
	// Var(x) = 1/N * SUM((x-mean(x))^2)
	Eigen::VectorXf distribution;
	distribution = Eigen::Map<Eigen::VectorXf>(&distribution_[0],distribution_.size(),1);
	// Retrieve mean value, mean(x)
	float distribution_mean = distribution.mean();
	// Get deviation vector. (x-mean(x))^2
	distribution = (distribution.array() - distribution_mean) * (distribution.array() - distribution_mean);
	// Get variance from deviation vector. Var(x)
	return distribution.mean();

}

float math_util::get_weighted_mean(std::vector<float> population_, std::vector<float> weights_)
{
	//Generate weighted mean using the weights and population values provided
	//Allocate population and weights Eigen vector
	Eigen::VectorXf population = transform_to_eigen(population_);
	Eigen::VectorXf weights = transform_to_eigen(weights_);
	//Coefficient-wise multiplication of each value with its weight
	Eigen::VectorXf weighted_population = population.array() * weights.array();
	//Return the weighted average
	return weighted_population.sum()/weights.sum();
}

Eigen::VectorXf math_util::transform_to_eigen(std::vector<float> std_vector){
	Eigen::VectorXf eigenVector;
	eigenVector = Eigen::Map<Eigen::VectorXf>(&std_vector[0],std_vector.size(),1);
	return eigenVector;
}

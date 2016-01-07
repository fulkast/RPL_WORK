/*
 * resample.h
 *
 *  Created on: Dec 5, 2015
 *      Author: marius
 */

#ifndef _RESAMPLE_H_
#define _RESAMPLE_H_

#include <parameter/resample_bag.h>
#include <localization_processor.h>
#include <util/math_util.h>

//Forward declaration
struct pose;

class resample
{
public:
	// Pure virutal function for random sampling from distribution
	virtual void resample_distribution(std::vector<pose>& the_particles, std::vector<float>& the_weights) = 0;

private:
	resample_bag resample_params;
};

class stochastic_uniform_sampling : public resample
{
public:
	// Constructor of the virtual class with bag-specific parameters
	stochastic_uniform_sampling(resample_bag resample_params);

	// Implementation of virtual method
	void resample_distribution(std::vector<pose>& the_particles, std::vector<float>& the_weights);

	// Virtual destructor
	virtual ~stochastic_uniform_sampling() {};

private:
	resample_bag resample_params;
};

class roulette_sampling : public resample
{
public:
	// Constructor of the virtual class with bag-specific parameters
	roulette_sampling(resample_bag resample_params);

	// Implementation of virtual method
	void resample_distribution(std::vector<pose>& the_particles, std::vector<float>& the_weights);

	// Virtual destructor
	virtual ~roulette_sampling() {};

private:
	resample_bag resample_params;
};

#endif /* _RESAMPLE_H_ */

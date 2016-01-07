/*
 * distribution.h
 *
 *  Created on: Dec 4, 2015
 *      Author: marius
 */

#ifndef _DISTRIBUTION_H_
#define _DISTRIBUTION_H_

#include <parameter/distribution_bag.h>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/triangle_distribution.hpp>
#include <boost/random.hpp>
#include <util/math_util.h>

class distribution
{
public:
	virtual float sample_distribution(float b_squared, float a_mean = 0.0, float a_st_dev = 1.0) = 0;

private:
	float b_squared;
	float a_mean;
	float a_st_dev;
};

class normal_distribution : public distribution
{
public:

	// Construct children class
	normal_distribution ();

	// Get random number with normal distribution
	float sample_distribution (float b_squared, float a_mean = 0.0, float a_st_dev = 1.0);

	// Virtual destructor
	virtual ~normal_distribution() {};

private:
	float b_squared;
	float a_mean;
	float a_st_dev;
};

class normal_distribution_approximation : public distribution
{
public:

	// Construct children class
	normal_distribution_approximation (distribution_bag dist_params);

	// Get random number with normal distribution approximation
	float sample_distribution (float b_squared, float a_mean = 0.0, float a_st_dev = 0.0);

	// Virtual destructor
	virtual ~normal_distribution_approximation() {};

private:
	distribution_bag dist_params;
	float b_squared;
	float a_mean;
	float a_st_dev;
};

class triangular_distribution : public distribution
{
public:

	// Construct children class
	triangular_distribution ();

	// Get random number with triangular distribution
	float sample_distribution (float b_squared, float a_mean = 0.0, float a_st_dev = 1.0);

	// Virtual destructor
	virtual ~triangular_distribution() {};

private:
	float b_squared;
	float a_mean;
	float a_st_dev;
};

class triangular_distribution_approximation : public distribution
{
public:

	// Construct children class
	triangular_distribution_approximation (distribution_bag dist_params);

	// Get random number with triangular distribution approximation
	float sample_distribution (float b_squared, float a_mean = 0.0, float a_st_dev = 1.0);

	// Virtual destructor
	virtual ~triangular_distribution_approximation() {};

private:
	distribution_bag dist_params;
	float b_squared;
	float a_mean;
	float a_st_dev;
};

#endif /* _DISTRIBUTION_H_ */

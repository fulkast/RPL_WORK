#ifndef PREPROCESS_H_INCLUDED
#define PREPROCESS_H_INCLUDED

#include <iostream>

#include <pcl/point_types.h>
#include <pcl/filters/extract_indices.h>
#include <pcl/filters/filter.h>
#include <pcl/filters/passthrough.h>
#include <pcl/filters/statistical_outlier_removal.h>
#include <pcl/segmentation/sac_segmentation.h>

#include "common.h"

namespace objrec {

template <typename PointT>
class PointCloudProcessStep {
// Abstract class for preprocessing a cloud.
public:
  virtual void run(const typename pcl::PointCloud<PointT>::ConstPtr& cloud_in, typename pcl::PointCloud<PointT>::Ptr processed) const = 0;
  // Main function for preprocessing.
};

template <typename PointT>
class DepthFilter : public PointCloudProcessStep<PointT> {
// Remove points that are not within the given range.
public:
  DepthFilter(double depth_min = 0.0, double depth_max = 1.0) : _depth_min(depth_min), _depth_max(depth_max) {}

  void run(const typename pcl::PointCloud<PointT>::ConstPtr& cloud_in, typename pcl::PointCloud<PointT>::Ptr processed) const {
    pcl::PassThrough<PointT> pass_through;
    pass_through.setInputCloud(cloud_in);
    pass_through.setFilterFieldName("z");
    pass_through.setFilterLimits(_depth_min, _depth_max);
    pass_through.filter(*processed);
  }

private:
  double _depth_min, _depth_max;
  // Minimum and maximum allowed field values;
};

template <typename PointT>
class StatisticalOutlierFilter : public PointCloudProcessStep<PointT> {
// Remove points that are statistical outliers.
public:
  StatisticalOutlierFilter(int mean_k = 50, double stddev_mul = 1.0) : _mean_k(mean_k), _stddev_mul(stddev_mul) {}

  void run(const typename pcl::PointCloud<PointT>::ConstPtr& cloud_in, typename pcl::PointCloud<PointT>::Ptr processed) const {
    pcl::StatisticalOutlierRemoval<PointT> sor;
    sor.setInputCloud(cloud_in);
    sor.setMeanK(_mean_k);
    sor.setStddevMulThresh(_stddev_mul);
    sor.filter(*processed);
  }

private:
  double _mean_k;
  // Number of nearest neighbors to use for mean distance estimation.
  double _stddev_mul;
  // Standard deviation multiplier for the distance threshold calculation.
};

template <typename PointT>
class PlanarForegroundSelector : public PointCloudProcessStep<PointT> {
// Remove a planar background if one exists.
public:
  PlanarForegroundSelector(double normal_dist_weight = 0.1, double dist_threshold = 0.03, int max_iterations = 100) : _normal_dist_weight(normal_dist_weight), _dist_threshold(dist_threshold), _max_iterations(max_iterations) {}

  void run(const typename pcl::PointCloud<PointT>::ConstPtr& cloud_in, typename pcl::PointCloud<PointT>::Ptr processed) const {
    pcl::PointCloud<pcl::Normal>::Ptr normals(new pcl::PointCloud<pcl::Normal>());
    compute_normal<PointT>(cloud_in, normals);

    // Create the segmentation object for the planar model and set all the parameters
    pcl::SACSegmentationFromNormals<PointT, pcl::Normal> seg;
    seg.setOptimizeCoefficients(true);
    seg.setModelType(pcl::SACMODEL_NORMAL_PLANE);
    seg.setNormalDistanceWeight(_normal_dist_weight);
    seg.setMethodType(pcl::SAC_RANSAC);
    seg.setMaxIterations(_max_iterations);
    seg.setDistanceThreshold(_dist_threshold);
    seg.setInputCloud(cloud_in);
    seg.setInputNormals(normals);

    // Obtain the plane inliers and coefficients
    pcl::ModelCoefficients::Ptr coefficients_plane(new pcl::ModelCoefficients());
    pcl::PointIndices::Ptr inliers_plane(new pcl::PointIndices());
    seg.segment(*inliers_plane, *coefficients_plane);

    // Extract the planar inliers
    pcl::ExtractIndices<PointT> extract_indices;
    extract_indices.setInputCloud(cloud_in);
    extract_indices.setIndices(inliers_plane);
    extract_indices.setNegative(true);
    extract_indices.filter(*processed);

    if (processed->points.empty())
      std::cerr << "Can't find foreground." << std::endl;
    else
      std::cerr << "PointCloud representing the foreground component: " << processed->points.size() << " data points." << std::endl;
  }

private:
  double _normal_dist_weight;
  // Relative weight (between 0 and 1) to give to the angular distance (0 to pi/2) between point normals and the plane normal.
  double _dist_threshold;
  // Distance threshold;
  int _max_iterations;
  // Maximum number of iterations the sample consensus method will run 
};

}  // end namespace

#endif  // PREPROCESS_H_INCLUDED

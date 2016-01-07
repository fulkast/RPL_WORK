#ifndef SEGMENT_H_INCLUDED
#define SEGMENT_H_INCLUDED

#include <iostream>
#include <vector>

#include <boost/foreach.hpp>

#include <pcl/point_types.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <pcl/segmentation/region_growing_rgb.h>

#include "preprocess.h"

namespace objrec {

template <typename PointT>
class SegmentationStrategy {
// Abstract class for segmenting a cloud.
public:
  virtual void segment(const typename pcl::PointCloud<PointT>::ConstPtr& cloud_in, std::vector<typename pcl::PointCloud<PointT>::ConstPtr >& clusters_cloud) const {};
  // Main function for segmentation.

  virtual void addPreprocessStep(PointCloudProcessStep<PointT> *step) {
    // Add PointCloudProcessStep to the pipeline.
    _preprocess.push_back(step);
  }

  virtual void runPreprocessSteps(const typename pcl::PointCloud<PointT>::ConstPtr& cloud_in, typename pcl::PointCloud<PointT>::Ptr processed) const {
    // Run all PointCloudProcessStep in the pipeline.

    processed->clear();
    pcl::copyPointCloud(*cloud_in, *processed);

    for (int i = 0; i < _preprocess.size(); ++i) {
      typename pcl::PointCloud<PointT>::Ptr temp(new pcl::PointCloud<PointT>());
      _preprocess[i]->run(processed, temp);
      processed->clear();
      pcl::copyPointCloud(*temp, *processed);
    }
  }

private:
  std::vector<const PointCloudProcessStep<PointT> *> _preprocess;
  // Pipeline of PointCloudProcessStep.
};

template <typename PointT>
class RegionGrowingSegmentation : public SegmentationStrategy<PointT> {
// Segmentation strategy based on region growing algorithm.
public:
  static const double default_smoothness_threshold = 3.0 / 180.0 * M_PI;  // 3 degrees in radians

  RegionGrowingSegmentation(int min_cluster_size = 1000, int max_cluster_size = 1000000, double smoothness_threshold = default_smoothness_threshold, int num_neighbors = 30, double curvature_threshold = 1.5) :
    _min_cluster_size(min_cluster_size), _max_cluster_size(max_cluster_size),
    _smoothness_threshold(smoothness_threshold),
    _curvature_threshold(curvature_threshold),
    _num_neighbors(num_neighbors) {}

  void segment(const typename pcl::PointCloud<PointT>::ConstPtr& cloud_in, std::vector<typename pcl::PointCloud<PointT>::ConstPtr >& clusters_cloud) const {
    typename pcl::PointCloud<PointT>::Ptr preprocessed(new pcl::PointCloud<PointT>());
    this->runPreprocessSteps(cloud_in, preprocessed);

    pcl::PointCloud<pcl::Normal>::Ptr normals(new pcl::PointCloud<pcl::Normal>());
    compute_normal<PointT>(preprocessed, normals);  // Estimate the normals.

    pcl::RegionGrowing<PointT, pcl::Normal> reg;
    typename pcl::search::Search<PointT>::Ptr tree = boost::shared_ptr<pcl::search::Search<PointT> >(new pcl::search::KdTree<PointT>());
    reg.setMinClusterSize(_min_cluster_size);
    reg.setMaxClusterSize(_max_cluster_size);
    reg.setSearchMethod(tree);
    reg.setNumberOfNeighbours(_num_neighbors);
    reg.setInputCloud(preprocessed);
    reg.setInputNormals(normals);
    reg.setSmoothnessThreshold(_smoothness_threshold);
    reg.setCurvatureThreshold(_curvature_threshold);

    std::vector<pcl::PointIndices> clusters;
    reg.extract(clusters);

    BOOST_FOREACH(pcl::PointIndices cluster, clusters) {
      typename pcl::PointCloud<PointT>::Ptr cluster_cloud(new pcl::PointCloud<PointT>());
      BOOST_FOREACH(int index, cluster.indices) {
        cluster_cloud->points.push_back(preprocessed->points[index]);
      }

      cluster_cloud->width = cluster_cloud->points.size();
      cluster_cloud->height = 1;
      cluster_cloud->is_dense = true;

      clusters_cloud.push_back(cluster_cloud);
    }
  }

private:
  int _min_cluster_size, _max_cluster_size;
  // Minimum and maximum numbers of points that a cluster needs to contain
  int _num_neighbors;
  // Number of nearest neighbours used for KNN
  double _smoothness_threshold, _curvature_threshold;
  // Smoothness and curvature thresholds used for testing the points
};

}  // end namespace

#endif  // SEGMENT_H_INCLUDED
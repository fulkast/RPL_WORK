#ifndef EXTRACT_FEATURE_H_INCLUDED
#define EXTRACT_FEATURE_H_INCLUDED

#include <pcl/point_types.h>
#include <pcl/features/spin_image.h>
#include <common.h>

namespace objrec {

template <typename PointT, typename FeatureT>
class FeatureExtractor {
// Abstract class for feature extraction.
public:
  virtual void extract(const typename pcl::PointCloud<PointT>::ConstPtr& cloud_in, typename pcl::PointCloud<FeatureT>::Ptr descriptors) const = 0;
  // Main function for extracting features.
};

template <typename PointT, typename FeatureT = pcl::Histogram<153> >
class SpinImageFeatureExtractor : public FeatureExtractor<PointT, FeatureT> {
// Class for computing spin image.
public:
  SpinImageFeatureExtractor(double radius = 0.02) : _radius(radius) {}

  void extract(const typename pcl::PointCloud<PointT>::ConstPtr& cloud_in, typename pcl::PointCloud<FeatureT>::Ptr descriptors) const {
    // Compute normal for each point.
    pcl::PointCloud<pcl::Normal>::Ptr normals(new pcl::PointCloud<pcl::Normal>());
    compute_normal<PointT>(cloud_in, normals);

    // Spin image estimation object.
    pcl::SpinImageEstimation<PointT, pcl::Normal, FeatureT> si;
    si.setInputCloud(cloud_in);
    si.setInputNormals(normals);
    si.setRadiusSearch(_radius);
    typename pcl::search::KdTree<PointT>::Ptr kdtree(new pcl::search::KdTree<PointT>());
    si.setSearchMethod(kdtree);

    si.compute(*descriptors);
  }

private:
  double _radius;
  // Radius of the support cylinder.
};

}  // end namespace

#endif  // EXTRACT_FEATURE_H_INCLUDED

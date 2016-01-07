// #include <pcl/point_types.h>

#include "common.h"
#include "extract_feature.h"

namespace objrec {

template <typename PointT, typename FeatureT = pcl::Histogram<153> >
SpinImageFeatureExtractor<PointT, FeatureT>::SpinImageFeatureExtractor(double radius) : _radius(radius) {}

template <typename PointT, typename FeatureT = pcl::Histogram<153> >
void SpinImageFeatureExtractor<PointT, FeatureT>::extract(const typename pcl::PointCloud<PointT>::ConstPtr& cloud_in, typename pcl::PointCloud<FeatureT>::Ptr descriptors) const {
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

}  // end namespace
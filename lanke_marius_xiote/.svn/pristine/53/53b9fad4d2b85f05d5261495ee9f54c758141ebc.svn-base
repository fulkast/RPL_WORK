// Xiaote Zhu
// Class for commonly used functions. 

#include "common.h"

namespace objrec {

template <typename PointT>
void compute_normal(const typename pcl::PointCloud<PointT>::ConstPtr& cloud_in, pcl::PointCloud<pcl::Normal>::Ptr normals, double radius) {
// Compute a normal for each point in the cloud.
  pcl::NormalEstimation<PointT, pcl::Normal> normal_est;
  normal_est.setInputCloud(cloud_in);
  normal_est.setRadiusSearch(radius);

  typename pcl::search::KdTree<PointT>::Ptr kdtree(new pcl::search::KdTree<PointT>());
  normal_est.setSearchMethod(kdtree);

  normal_est.compute(*normals);
}

}  // end namespace
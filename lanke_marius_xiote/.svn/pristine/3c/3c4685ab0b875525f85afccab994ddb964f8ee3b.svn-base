#ifndef SELECT_KEYPOINT_H_INCLUDED
#define SELECT_KEYPOINT_H_INCLUDED

#include <pcl/point_types.h>
#include <pcl/keypoints/uniform_sampling.h>

namespace objrec {
  
template <typename PointT>
class KeypointSelector {
// Abstract class for keypoint selection.
public:
  virtual void select(const typename pcl::PointCloud<PointT>::ConstPtr& cloud_in, typename pcl::PointCloud<PointT>::Ptr keypoints) const = 0;
  // Main function for selecting keypoints.
};

template <typename PointT>
class UniformKeypointSelector : public KeypointSelector<PointT> {
// Select keypoints based on uniform sampling.
public:
  UniformKeypointSelector(double radius = 0.005) : _radius(radius) {}

  void select(const typename pcl::PointCloud<PointT>::ConstPtr& cloud_in, typename pcl::PointCloud<PointT>::Ptr keypoints) const {
    pcl::UniformSampling<PointT> us;
    us.setInputCloud(cloud_in);
    us.setRadiusSearch(_radius);

    pcl::PointCloud<int> keypointIndices;
    us.compute(keypointIndices);
    pcl::copyPointCloud(*cloud_in, keypointIndices.points, *keypoints);
  }

private:
  double _radius;
  // 3D grid leaf size.
};

}  // end namespace

#endif  // SELECT_KEYPOINT_H_INCLUDED
#ifndef EXTRACT_FEATURE_H_INCLUDED
#define EXTRACT_FEATURE_H_INCLUDED

#include <pcl/point_types.h>
#include <pcl/features/spin_image.h>

#include "common.h"

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
  SpinImageFeatureExtractor(double radius = 0.02);

  void extract(const typename pcl::PointCloud<PointT>::ConstPtr& cloud_in, typename pcl::PointCloud<FeatureT>::Ptr descriptors) const;

private:
  double _radius;
  // Radius of the support cylinder.
};

}  // end namespace

#endif  // EXTRACT_FEATURE_H_INCLUDED

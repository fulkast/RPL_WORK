#ifndef RECOGNIZE_H_INCLUDED
#define RECOGNIZE_H_INCLUDED

#include <cmath>
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <utility>

#include <boost/foreach.hpp>

#include <Eigen/Dense>
#include <Eigen/Geometry>

#include <pcl/point_types.h>
#include <pcl/common/file_io.h>
#include <pcl/recognition/cg/geometric_consistency.h>

namespace objrec {

template <typename PointT>
class RecognizerResult {
// Class for storing recognition result.
public:
  RecognizerResult() : score(0.0) {}

  std::string label;
  double score;
  typename pcl::PointCloud<PointT>::ConstPtr cloud;
};

template <typename PointT, typename FeatureT>
class Recognizer {
// Abstract class for object recognizer.
public:
  virtual void recognize(const typename pcl::PointCloud<PointT>::ConstPtr& scene, std::vector<std::vector<RecognizerResult<PointT> > >& results) = 0;
  // Main class for object recognition.
};

template <typename PointT, typename FeatureT>
class GCGRecognizer : public Recognizer<PointT, FeatureT> {
// Recognizer class based on Geometric Consistency Grouping. 
public:
  GCGRecognizer(const SegmentationStrategy<PointT> *segmenter, const KeypointSelector<PointT> *selector, const FeatureExtractor<PointT, FeatureT> *feature_extractor,
    double matching_similarity_threshold = 0.25, int gc_threshold = 25, double gc_size = 0.01) : _matching_similarity_threshold(matching_similarity_threshold), _gc_threshold(gc_threshold), _gc_size(gc_size),
    _segmenter(segmenter), _selector(selector), _feature_extractor(feature_extractor) {}

  void addModelPCDFiles(const std::string& label, const std::vector<std::string>& pcd_files) {
    //  Compute and store features for each model file.
    BOOST_FOREACH(std::string filename, pcd_files) {
      typename pcl::PointCloud<PointT>::Ptr pcd(new pcl::PointCloud<PointT>());
      if (pcl::io::loadPCDFile<PointT> (filename, *pcd) == -1)
      {
        PCL_ERROR(("Couldn't read file " + filename + " \n").c_str());
        throw std::runtime_error("couldn't read pcd file " + filename);
      }

      typename pcl::PointCloud<PointT>::Ptr keypoints(new pcl::PointCloud<PointT>());
      _selector->select(pcd, keypoints);

      typename pcl::PointCloud<FeatureT>::Ptr descriptors(new pcl::PointCloud<FeatureT>());
      _feature_extractor->extract(keypoints, descriptors);

      _model_descriptors[label].push_back(descriptors);
      _model_keypoints[label].push_back(keypoints);
    }
  }

  void recognize(const typename pcl::PointCloud<PointT>::ConstPtr& scene, std::vector<std::vector<RecognizerResult<PointT> > >& results) {
    std::vector<typename pcl::PointCloud<PointT>::ConstPtr> clusters;
    _segmenter->segment(scene, clusters);
    results.resize(clusters.size());
    std::cerr << "Clusters found: " << clusters.size () << std::endl;

    // Compute recognition for each cluster.
    for (size_t i = 0; i < clusters.size(); ++i) {
      typename pcl::PointCloud<PointT>::Ptr keypoints(new pcl::PointCloud<PointT>());
      _selector->select(clusters[i], keypoints);

      typename pcl::PointCloud<FeatureT>::Ptr descriptors(new pcl::PointCloud<FeatureT>());
      _feature_extractor->extract(keypoints, descriptors);

      // Compute match score for each label.
      for (typename std::map<std::string, std::vector<typename pcl::PointCloud<FeatureT>::Ptr> >::const_iterator it = _model_descriptors.begin(); it != _model_descriptors.end(); ++it) {
        double match_score = 0.0;

        // Compute transformation for each model. 
        for (size_t j = 0; j < it->second.size(); ++j) {
          pcl::CorrespondencesPtr correspondences(new pcl::Correspondences());
          find_correspondences(descriptors, it->second[j], correspondences);

          std::vector<pcl::Correspondences> clustered_correspondences;
          pcl::GeometricConsistencyGrouping<PointT, PointT> grouping;
          grouping.setSceneCloud(keypoints);
          grouping.setInputCloud(_model_keypoints[it->first][j]);
          grouping.setModelSceneCorrespondences(correspondences);
          grouping.setGCThreshold(_gc_threshold);
          grouping.setGCSize(_gc_size);

          std::vector<Eigen::Matrix4f, Eigen::aligned_allocator<Eigen::Matrix4f> > transformations;
          grouping.recognize(transformations, clustered_correspondences);

          if (transformations.size() > 0 && transformations.size() < 3) 
            match_score++;
        }

        RecognizerResult<PointT> r;
        r.label = it->first;
        r.score = match_score;
        r.cloud = clusters[i];

        results[i].push_back(r);
      }
    }
  }

private:
  void find_correspondences(const typename pcl::PointCloud<FeatureT>::ConstPtr& scene_descriptors, const typename pcl::PointCloud<FeatureT>::ConstPtr& model_descriptors, pcl::CorrespondencesPtr correspondences) {
    // Check every descriptor computed for the model.
    for (size_t i = 0; i < model_descriptors->size(); ++i) {
      double closest_dist = std::numeric_limits<double>::max();
      int closest_neighbor = -1;

      for (size_t j = 0; j < scene_descriptors->size(); ++j) {
        double dist = 0.0;
        for (size_t k = 0; k < 153; ++k)
          dist += std::pow((model_descriptors->at(i).histogram[k] - scene_descriptors->at(j).histogram[k]), 2);  // euclidean distance

        if (dist < closest_dist) {
          closest_dist = dist;
          closest_neighbor = j;
        }
      }

      if (closest_dist < _matching_similarity_threshold) {
        pcl::Correspondence correspondence(static_cast<int>(i), closest_neighbor, closest_dist);
        correspondences->push_back(correspondence);
      }
    }  
  }

  const SegmentationStrategy<PointT> *_segmenter;
  // Segmenter.
  const KeypointSelector<PointT> *_selector;
  // Keypoint selector.
  const FeatureExtractor<PointT, FeatureT> *_feature_extractor;
  // Feature extractor.

  double _matching_similarity_threshold;
  // Threshold for point correspondence matching.
  double _gc_size;
  // Consensus set resolution.
  int _gc_threshold;
  // Minimum cluster size. 

  typename std::map<std::string, std::vector<typename pcl::PointCloud<FeatureT>::Ptr> > _model_descriptors;
  // Map label to its descriptors.
  typename std::map<std::string, std::vector<typename pcl::PointCloud<PointT>::Ptr> > _model_keypoints;
  // Map label to its keypoints.
};

}  // end namespace

#endif  // RECOGNIZE_H_INCLUDED

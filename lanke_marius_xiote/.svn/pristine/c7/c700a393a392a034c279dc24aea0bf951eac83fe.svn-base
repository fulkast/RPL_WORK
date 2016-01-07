// Xiaote Zhu
// Main class for object recognition application

#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include <boost/foreach.hpp>

#include <ros/ros.h>
#include <unistd.h>
#include <pcl_ros/point_cloud.h>
#include <pcl/point_types.h>

#include <std_msgs/Bool.h>

#include "extract_feature.h"
#include "parameters.h"
#include "preprocess.h"
#include "recognize.h"
#include "segment.h"
#include "select_keypoint.h"
#include "visualization.h"

typedef pcl::PointXYZ PointT;
typedef pcl::Histogram<153> FeatureT;
typedef pcl::PointCloud<PointT> PointCloud;

objrec::GCGRecognizer<PointT, FeatureT> recognizer;
objrec::Parameters params;
ros::Publisher marker_pub;
ros::Publisher objrec_pub;

size_t object_counts; 
// Total objects being recognized.
bool objrec_permitted;
// Whether object recognition should be allowed.
std::map<std::string, std::vector<PointCloud::Ptr> > _model_clouds;
// Map label to its clouds.

void recCallback(const PointCloud::ConstPtr& msg) {
// Callback function for when image is received.
  if (objrec_permitted) {
  	std::cerr << "Cloud: width = " << msg->width << " height = " << msg->height << std::endl;

    // Object recognition.
    std::vector<std::vector<objrec::RecognizerResult<PointT> > > results;
    recognizer.recognize(msg, results);

    std::vector<visualization_msgs::Marker> marker_msgs;
    // Create marker msg for each cluster indicating the result. 
    BOOST_FOREACH(std::vector<objrec::RecognizerResult<PointT> > cluster_result, results) {
      objrec::RecognizerResult<PointT> highest_result;

      BOOST_FOREACH(objrec::RecognizerResult<PointT> r, cluster_result) {
        if (r.score > highest_result.score || highest_result.score <= 0.0)
          highest_result = r;
      }

      visualization_msgs::Marker marker;
      if (highest_result.score != 0.0){
        std::cerr << "Winner is " << highest_result.label << " with score of " << highest_result.score << std::endl;
        objrec::createMarkerMsg(params.get("camera_frame_id"), highest_result.cloud, ++object_counts, params.get_color_r(highest_result.label), params.get_color_g(highest_result.label), params.get_color_b(highest_result.label), marker);
      }
      marker_msgs.push_back(marker);
    }

    objrec::publishMarkerMsgs(marker_pub, marker_msgs);
    objrec_permitted = false;

    if (ros::ok) {
      std_msgs::Bool msg;
      msg.data = true;
      objrec_pub.publish(msg);
      ros::spinOnce();

//      usleep(2);
//      msg.data = false;
//      objrec_pub.publish(msg);
//      ros::spinOnce();
    }
  }
}

void startCallback(const std_msgs::Bool is_permitted) {
// Call back function for when msg indicating that object recognition can be started is received.
  std::cerr << "Start recognition..." << std::endl;
  objrec_permitted = is_permitted.data;
}

void loadPCDFiles() {
// Load all pcd files to _model_clouds.
  std::vector<std::string> labels;
  params.get("labels", labels);
  for (std::vector<std::string>::iterator it = labels.begin(); it != labels.end(); ++it) {
    std::vector<std::string> filenames;
    std::string label_dir = params.get(*it + "_dir");
    pcl::getAllPcdFilesInDirectory(label_dir, filenames);
    for (std::vector<std::string>::iterator it2 = filenames.begin(); it2 != filenames.end(); ++it2) {
      *it2 = label_dir + *it2;
      PointCloud::Ptr cloud(new PointCloud());
      if (pcl::io::loadPCDFile<PointT> (*it2, *cloud) == -1)
      {
        PCL_ERROR(("Couldn't read file " + *it2 + " \n").c_str());
        throw std::runtime_error("couldn't read pcd file " + *it2);
      }
      _model_clouds[*it].push_back(cloud);
    }
  }
}

int main(int argc, char** argv)
{
  if (argc < 2) { 
    std::cerr << "Usage is rosrun object_recognition object_recognition_node <parameter_file.txt>" << std::endl; 
    return 1;
  } 
  else 
    params.from_file(argv[1]);

  loadPCDFiles();

  objrec::RegionGrowingSegmentation<pcl::PointXYZ> segmenter;
  // Add preprocessing steps.
  segmenter.addPreprocessStep(new objrec::DepthFilter<pcl::PointXYZ>());
  segmenter.addPreprocessStep(new objrec::StatisticalOutlierFilter<pcl::PointXYZ>());
  segmenter.addPreprocessStep(new objrec::PlanarForegroundSelector<pcl::PointXYZ>());

  objrec::UniformKeypointSelector<pcl::PointXYZ> selector;
  objrec::SpinImageFeatureExtractor<pcl::PointXYZ> feature_extractor;

  recognizer.setSegmenter(&segmenter);
  recognizer.setSelector(&selector);
  recognizer.setFeatureExtractor(&feature_extractor);

  // Add model files to recognizer
  recognizer.addModelClouds(_model_clouds);

	ros::init(argc, argv, params.get("node_name"));
  ros::NodeHandle nh;

  ros::Subscriber start_sub = nh.subscribe<std_msgs::Bool>(params.get("robot_topic"), 1, startCallback);
  ros::Subscriber camera_sub = nh.subscribe<PointCloud>(params.get("camera_topic"), 1, recCallback);

  marker_pub = nh.advertise<visualization_msgs::Marker>(params.get("marker_topic"), 1, true);
  objrec_pub = nh.advertise<std_msgs::Bool>(params.get("objrec_topic"), 2, true);

  ros::spin();
  
  return 0;
}

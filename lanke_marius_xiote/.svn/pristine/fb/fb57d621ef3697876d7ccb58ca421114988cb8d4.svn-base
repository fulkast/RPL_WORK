#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include <boost/foreach.hpp>

#include <ros/ros.h>
#include <unistd.h>
#include <pcl_ros/point_cloud.h>
#include <pcl/point_types.h>

#include "std_msgs/Bool.h"

#include "preprocess.h"
#include "segment.h"
#include "select_keypoint.h"
#include "extract_feature.h"
#include "recognize.h"
#include "parameters.h"
#include "visualization.h"

typedef pcl::PointXYZ PointT;
typedef pcl::Histogram<153> FeatureT;
typedef pcl::PointCloud<PointT> PointCloud;

objrec::Parameters params;
ros::Publisher markerPub;
ros::Publisher objrecPub;

size_t objectCounts; 

bool objrec_permitted;

void recCallback(const PointCloud::ConstPtr& msg) {
// Callback function for when image is received.
  if (objrec_permitted) {
  	std::cerr << "Cloud: width = " << msg->width << " height = " << msg->height << std::endl;

    objrec::RegionGrowingSegmentation<pcl::PointXYZ> segmenter;

    // Add preprocessing steps.
    segmenter.addPreprocessStep(new objrec::DepthFilter<pcl::PointXYZ>());
    segmenter.addPreprocessStep(new objrec::StatisticalOutlierFilter<pcl::PointXYZ>());
    segmenter.addPreprocessStep(new objrec::PlanarForegroundSelector<pcl::PointXYZ>());

    objrec::UniformKeypointSelector<pcl::PointXYZ> selector;
    objrec::SpinImageFeatureExtractor<pcl::PointXYZ> feature_extractor;
    objrec::GCGRecognizer<PointT, FeatureT> recognizer(&segmenter, &selector, &feature_extractor);

    // Add model files to recognizer.
    std::vector<std::string> labels;
    params.get("labels", labels);
    for (std::vector<std::string>::iterator it = labels.begin(); it != labels.end(); ++it) {
      std::vector<std::string> filenames;
      std::string label_dir = params.get(*it + "_dir");
      pcl::getAllPcdFilesInDirectory(label_dir, filenames);
      for (std::vector<std::string>::iterator it2 = filenames.begin(); it2 != filenames.end(); ++it2) *it2 = label_dir + *it2;
      recognizer.addModelPCDFiles(*it, filenames);
    }

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
      if (cluster_result.empty() || highest_result.score == 0.0) {
        std::cerr << "Unknown object." << std::endl;
        objrec::createMarkerMsg(params.get("camera_frame_id"), highest_result.cloud, ++objectCounts, params.get_color_r("unknown"), params.get_color_g("unknown"), params.get_color_b("unknown"), marker);
      }
      else {
        std::cerr << "Winner is " << highest_result.label << " with score of " << highest_result.score << std::endl;
        objrec::createMarkerMsg(params.get("camera_frame_id"), highest_result.cloud, ++objectCounts, params.get_color_r(highest_result.label), params.get_color_g(highest_result.label), params.get_color_b(highest_result.label), marker);
      }
      marker_msgs.push_back(marker);
    }
    

    objrec::publishMarkerMsgs(markerPub, marker_msgs);
    objrec_permitted = false;

    if (ros::ok) {
      std_msgs::Bool msg;
      msg.data = true;
      objrecPub.publish(msg);
      ros::spinOnce();

      // ros::Duration::sleep();
      usleep(1);
      msg.data = false;
      objrecPub.publish(msg);
      ros::spinOnce();
    }
  }

/*  else {
    if (ros::ok) {
      std_msgs::Bool msg;
      msg.data = false;
      objrecPub.publish(msg);
      ros::spinOnce();
    }
  }*/
}

void startCallback(const std_msgs::Bool is_permitted) {
// Call back function for when msg indicating that object recognition can be started is received
  std::cerr << "start recognition..." << std::endl;
  objrec_permitted = is_permitted.data;
}

int main(int argc, char** argv)
{
  if (argc < 2) { 
    std::cerr << "Usage is rosrun object_recognition object_recognition_node <parameter_file.txt>" << std::endl; 
    return 1;
  } 
  else 
    params.from_file(argv[1]);

	ros::init(argc, argv, params.get("node_name"));
  ros::NodeHandle nh;

  ros::Subscriber startSub = nh.subscribe<std_msgs::Bool>(params.get("robot_topic"), 1, startCallback);
  ros::Subscriber cameraSub = nh.subscribe<PointCloud>(params.get("camera_topic"), 1, recCallback);

  markerPub = nh.advertise<visualization_msgs::Marker>(params.get("marker_topic"), 1, true);
  objrecPub = nh.advertise<std_msgs::Bool>(params.get("objrec_topic"), 2, true);

  ros::spin();
  
  return 0;
}
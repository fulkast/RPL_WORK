// Xiaote Zhu
// Main class for object recognition application

#include "object_recognition_processor.h"
#include "parameter/parameter_bag.h"

int main(int argc, char** argv)
{
  // Construct recognizer
  objrec::GCGRecognizer<PointT, FeatureT> recognizer;
  objrec::RegionGrowingSegmentation<pcl::PointXYZ> segmenter;
  objrec::UniformKeypointSelector<pcl::PointXYZ> selector;
  objrec::SpinImageFeatureExtractor<pcl::PointXYZ> feature_extractor;

  // Add preprocessing steps.
  segmenter.addPreprocessStep(new objrec::DepthFilter<pcl::PointXYZ>());
  segmenter.addPreprocessStep(new objrec::StatisticalOutlierFilter<pcl::PointXYZ>());
  segmenter.addPreprocessStep(new objrec::PlanarForegroundSelector<pcl::PointXYZ>());

  // Define recognizer
  recognizer.setSegmenter(&segmenter);
  recognizer.setSelector(&selector);
  recognizer.setFeatureExtractor(&feature_extractor);

  // Construct parameter
  parameter_bag parameter;

  ros::init(argc, argv, "object_recognition_node");
  ros::NodeHandle nh;

  // Retrieve parameters
  nh.getParam("node_name", parameter.node_name);
  nh.getParam("robot_topic", parameter.robot_topic);
  nh.getParam("robot_topic_queuesize", parameter.robot_topic_queuesize);
  nh.getParam("camera_topic", parameter.camera_topic);
  nh.getParam("camera_topic_queuesize", parameter.camera_topic_queuesize);
  nh.getParam("marker_topic", parameter.marker_topic);
  nh.getParam("marker_topic_queuesize", parameter.marker_topic_queuesize);
  nh.getParam("objrec_topic", parameter.objrec_topic);
  nh.getParam("objrec_topic_queuesize", parameter.objrec_topic_queuesize);
  nh.getParam("camera_frame_id", parameter.camera_frame_id);

  // Obejct parameters
  nh.getParam("labels", parameter.labels);
  nh.getParam("firefighter_dir", parameter.firefighter_dir);
  nh.getParam("firefighter_color", parameter.firefighter_color);
  nh.getParam("man_dir", parameter.man_dir);
  nh.getParam("man_color", parameter.man_color);
  nh.getParam("woman_dir", parameter.woman_dir);
  nh.getParam("woman_color", parameter.woman_color);

  nh.getParam("histogram_size", parameter.histogram_size);
  nh.getParam("score_lower_bound", parameter.score_lower_bound);
  nh.getParam("dir", parameter.dir);
  nh.getParam("color", parameter.color);

  // Get color data for objects/ labels
  for (std::vector<std::string>::iterator it = parameter.labels.begin(); it != parameter.labels.end(); ++it)
  {
	  std::string label_color = *it + parameter.color;
	  std::string label_dir = *it + parameter.dir;
	  std::string key;
	  if (nh.searchParam(label_color, key))
	  {
		nh.getParam(label_color, parameter.obj_color_map[*it]);
	  }
	  if (nh.searchParam(label_dir, key))
	  {
		  nh.getParam(label_dir, parameter.obj_dir_map[*it]);
	  }
  }

  // Visualization parameters
  nh.getParam("box_diag_multiplier", parameter.visualization.box_diag_multiplier);
  nh.getParam("marker_transparancy", parameter.visualization.marker_transparancy);
  nh.getParam("marker_namespace", parameter.visualization.marker_namespace);
  nh.getParam("loop_time", parameter.visualization.loop_time);

  // Construct object recognition processor class
  object_recognition_processor object_recog (nh, parameter, recognizer);

  // Process the PCD Files
  object_recog.loadPCDFiles();

  ros::Subscriber start_sub = nh.subscribe<std_msgs::Bool>(parameter.robot_topic,
		  	  	  	  	  	  	  	  	  	  	  	  	   parameter.robot_topic_queuesize,
														   &object_recognition_processor::startCallback,
														   &object_recog);

  ros::Subscriber camera_sub = nh.subscribe<PointCloud>(parameter.camera_topic,
		  	  	  	  	  	  	  	  	  	  	  	  	parameter.camera_topic_queuesize,
														&object_recognition_processor::recCallback,
														&object_recog);

  ros::spin();
  
  return 0;
}

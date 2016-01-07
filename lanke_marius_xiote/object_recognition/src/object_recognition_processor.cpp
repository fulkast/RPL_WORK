/*
 * object_recognition_processor.cpp
 *
 *  Created on: Dec 15, 2015
 *      Author: marius
 */

#include "object_recognition_processor.h"

object_recognition_processor::object_recognition_processor (ros::NodeHandle nodehandle, parameter_bag params, objrec::GCGRecognizer<PointT, FeatureT> a_recognizer)
{
	nh = nodehandle;
	parameter = params;
	recognizer = a_recognizer;

	marker_pub = nh.advertise<visualization_msgs::Marker>(parameter.marker_topic,
			  	  	  	  	  	  	  	  	  	  	  	  parameter.marker_topic_queuesize,
														  true);

    objrec_pub = nh.advertise<std_msgs::Bool>(parameter.objrec_topic,
			  	  	  	  	  	  	  	  	  parameter.objrec_topic_queuesize,
											  true);
}

void object_recognition_processor::recCallback(const PointCloud::ConstPtr& msg) {
// Callback function for when image is received.

  // Construct visualization class
  visualization vis (parameter.visualization);

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
        if (r.score > highest_result.score || highest_result.score <= parameter.score_lower_bound)
          highest_result = r;
      }

      visualization_msgs::Marker marker;
      if (highest_result.score != parameter.score_lower_bound){
        std::cerr << "Winner is " << highest_result.label << " with score of " << highest_result.score << std::endl;
        vis.createMarkerMsg(parameter.camera_frame_id,
        						highest_result.cloud,
								++object_counts,
								parameter.obj_color_map[highest_result.label].at(0),
								parameter.obj_color_map[highest_result.label].at(1),
								parameter.obj_color_map[highest_result.label].at(2),
								marker);
      }

      marker_msgs.push_back(marker);
    }

    vis.publishMarkerMsgs(marker_pub, marker_msgs);
    objrec_permitted = false;

    if (ros::ok) {
      std_msgs::Bool msg;
      msg.data = true;
      objrec_pub.publish(msg);
      ros::spinOnce();

      usleep(1);
      msg.data = false;
      objrec_pub.publish(msg);
      ros::spinOnce();
    }
  }
}

void object_recognition_processor::startCallback(const std_msgs::Bool is_permitted) {
// Call back function for when msg indicating that object recognition can be started is received.
  std::cerr << "Start recognition..." << std::endl;
  objrec_permitted = is_permitted.data;
}

void object_recognition_processor::loadPCDFiles() {
// Load all pcd files to _model_clouds.
  for (std::vector<std::string>::iterator it = parameter.labels.begin(); it != parameter.labels.end(); ++it) {
    std::vector<std::string> filenames;
    std::string label_dir = *it + parameter.dir;
    pcl::getAllPcdFilesInDirectory(parameter.obj_dir_map[*it], filenames);

    for (std::vector<std::string>::iterator it2 = filenames.begin(); it2 != filenames.end(); ++it2) {
      *it2 = parameter.obj_dir_map[*it] + *it2;
      PointCloud::Ptr cloud(new PointCloud());
      if (pcl::io::loadPCDFile<PointT> (*it2, *cloud) == -1)
      {
        PCL_ERROR(("Couldn't read file " + *it2 + " \n").c_str());
        throw std::runtime_error("couldn't read pcd file " + *it2);
      }
      _model_clouds[*it].push_back(cloud);
    }
  }

  // Add model files to recognizer
  recognizer.addModelClouds(_model_clouds);
}

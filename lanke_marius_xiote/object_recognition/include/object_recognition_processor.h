/*
 * object_recognition_processor.h
 *
 *  Created on: Dec 15, 2015
 *      Author: marius
 */

#ifndef _OBJECT_RECOGNITION_PROCESSOR_H_
#define _OBJECT_RECOGNITION_PROCESSOR_H_

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
#include "preprocess.h"
#include "recognize.h"
#include "segment.h"
#include "select_keypoint.h"
#include "visualization.h"

#include "parameter/parameter_bag.h"
#include "parameter/visualization_bag.h"

typedef pcl::PointXYZ PointT;
typedef pcl::Histogram<153> FeatureT;
typedef pcl::PointCloud<PointT> PointCloud;

class object_recognition_processor
{
public:

	// Construct class with ros Nodehandle and parameters
	object_recognition_processor (ros::NodeHandle nh, parameter_bag parameter, objrec::GCGRecognizer<PointT, FeatureT> recognizer);

	// Callback function for when image is received
	void recCallback(const PointCloud::ConstPtr& a_msg);

	// Call back function for when msg indicating that object recognition can be started is received
	void startCallback(const std_msgs::Bool _is_permitted);

	// Load all pcd files
	void loadPCDFiles ();

private:

	ros::NodeHandle nh;
	parameter_bag parameter;
	ros::Publisher marker_pub, objrec_pub;

	objrec::GCGRecognizer<PointT, FeatureT> recognizer;

	size_t object_counts;
	// Total objects being recognized.
	bool objrec_permitted;
	// Whether object recognition should be allowed.
	std::map<std::string, std::vector<PointCloud::Ptr> > _model_clouds;
	// Map label to its clouds.

};

#endif /* _OBJECT_RECOGNITION_PROCESSOR_H_ */

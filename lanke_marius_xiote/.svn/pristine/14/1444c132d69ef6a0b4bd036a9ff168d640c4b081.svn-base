// Xiaote Zhu
// Functions for visualization.

#ifndef VISUALIZATION_H_INCLUDED
#define VISUALIZATION_H_INCLUDED

#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include <ros/ros.h>
#include <pcl/point_types.h>
#include <pcl/common/transforms.h>
#include <pcl/common/common.h>

#include <visualization_msgs/Marker.h>

#include "parameter/visualization_bag.h"

typedef pcl::PointXYZ PointT;
typedef pcl::PointCloud<PointT> PointCloud;

class visualization
{
public:

	// Construct visualization class
	visualization (visualization_bag vis_parameter);

	// Compute cubic bounding box that encompasses the cloud
	int find_bounding_box(const PointCloud::ConstPtr& a_cloud, visualization_msgs::Marker& a_marker);

	// Create marker msg that draws a bounding box of the cloud in the given color
	int createMarkerMsg (std::string a_frame_id, const PointCloud::ConstPtr& a_cloud, int a_id, float a_r, float a_g, float a_b, visualization_msgs::Marker& a_marker);

	// Publish all marker msgs given
	void publishMarkerMsgs(ros::Publisher a_markerPub, std::vector<visualization_msgs::Marker> a_marker_msgs);

private:

	visualization_bag vis_parameter;
};

#endif  // VISUALIZATION_H_INCLUDED

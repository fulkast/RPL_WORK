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

#include <pcl/visualization/cloud_viewer.h>
#include <visualization_msgs/Marker.h>

typedef pcl::PointXYZ PointT;
typedef pcl::PointCloud<PointT> PointCloud;

namespace objrec {

int find_bounding_box(const PointCloud::ConstPtr& cloud, visualization_msgs::Marker& marker) {
// Compute cubic bounding box that encompasses the cloud.
  marker.type = visualization_msgs::Marker::CUBE;

 // Compute principal direction
  Eigen::Vector4f centroid;
  pcl::compute3DCentroid(*cloud, centroid);
  Eigen::Matrix3f covariance;
  pcl::computeCovarianceMatrixNormalized(*cloud, centroid, covariance);
  Eigen::SelfAdjointEigenSolver<Eigen::Matrix3f> eigen_solver(covariance, Eigen::ComputeEigenvectors);
  Eigen::Matrix3f eigDx = eigen_solver.eigenvectors();
  eigDx.col(2) = eigDx.col(0).cross(eigDx.col(1));

  // Move the points to the that reference frame
  Eigen::Matrix4f p2w(Eigen::Matrix4f::Identity());
  p2w.block<3,3>(0,0) = eigDx.transpose();
  p2w.block<3,1>(0,3) = -1.f * (p2w.block<3,3>(0,0) * centroid.head<3>());
  PointCloud cPoints;
  pcl::transformPointCloud(*cloud, cPoints, p2w);

  pcl::PointXYZ min_pt, max_pt;
  pcl::getMinMax3D(cPoints, min_pt, max_pt);
  const Eigen::Vector3f mean_diag = 0.5f*(max_pt.getVector3fMap() + min_pt.getVector3fMap());

  // Final transform
  const Eigen::Quaternionf qfinal(eigDx);
  const Eigen::Vector3f tfinal = eigDx*mean_diag + centroid.head<3>();

  marker.pose.position.x = tfinal(0);
  marker.pose.position.y = tfinal(1);
  marker.pose.position.z = tfinal(2);
  marker.pose.orientation.x = qfinal.x();
  marker.pose.orientation.y = qfinal.y();
  marker.pose.orientation.z = qfinal.z();
  marker.pose.orientation.w = qfinal.w();
  marker.scale.x = max_pt.x - min_pt.x;
  marker.scale.y = max_pt.y - min_pt.y;
  marker.scale.z = max_pt.z - min_pt.z;

  return 0;
}

int createMarkerMsg (std::string frame_id, const PointCloud::ConstPtr& cloud, int id, float r, float g, float b, visualization_msgs::Marker& marker) {
// Create marker msg that draws a bounding box of the cloud in the given color.
  marker.header.frame_id = frame_id;
  marker.header.stamp = ros::Time::now();
  marker.ns = "bounding_box";
  marker.id = id;
  find_bounding_box(cloud, marker);

  marker.color.r = r;
  marker.color.g = g;
  marker.color.b = b;
  marker.color.a = 0.5;

  marker.lifetime = ros::Duration();
  return 0;
}

void publishMarkerMsgs(ros::Publisher markerPub, std::vector<visualization_msgs::Marker> marker_msgs) {
// Publish all marker msgs given. 
  std::cerr << "Publish..." << std::endl;
  ros::Rate loop_rate(4);

  while (ros::ok())
  {
    for (std::vector<visualization_msgs::Marker>::const_iterator it = marker_msgs.begin (); it != marker_msgs.end (); ++it)
    {
      markerPub.publish(*it);
    }

    loop_rate.sleep();
  }
}

}  // end namespace

#endif  // VISUALIZATION_H_INCLUDED
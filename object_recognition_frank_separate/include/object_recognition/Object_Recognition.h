//
// Created by frank on 22.11.15.
//

#ifndef OBJECT_RECOGNITION_OBJECT_RECOGNITION_H
#define OBJECT_RECOGNITION_OBJECT_RECOGNITION_H


#include <ros/ros.h>
#include <pcl_ros/point_cloud.h>
#include <pcl/point_types.h>
//#include <pcl/pcl_common.h>
#include <algorithm>
#include <iostream>
#include <interactive_markers/interactive_marker_server.h>

#include <common.h>

#include <Point_Cloud/Cloud_Filter.h>
#include <Point_Cloud/Spin_Image_Extraction.h>
#include <Point_Cloud/Load_From_PCD.h>
#include <Eigen/Dense>


    class Object_Recognition {
    public:
        Object_Recognition(ros::NodeHandle& nh, boost::property_tree::ptree& propertyTree);
                        // Initialization
        void callback(const sensor_msgs::PointCloud2ConstPtr& input);
                        // A callback function acting on the raw input data
    private:
        boost::property_tree::ptree objRecognPT;
                    // Set up node parameter tree
        PointCloudColored::Ptr modelCloud;
                    // Library loaded model
            ros::Publisher filteredCloudPub;
                    // Publisher for the filtered cloud
        ros::Publisher clusterPub;
                    // Publisher for the clusters


        std::vector<blobCloudInfo> cloudLibrary;
                    // A library of all the models
        std::vector<pcl::PointCloud<pcl::Histogram<histLength>>::Ptr> librarySpinImages;
                    // A library of the spin images of the reference models
        Spin_Image_Extraction siExtractor;
                    // A spin image extractor
        std::size_t maxBlobSize, maxModelBlobSize,minCount;
        float minAccuracy;
                    // Task parameters for the correlation procedure
        ros::Publisher boxPub;
                    // A bounding box publisher for the object recognized
        Cloud_Filter filterCloud;
                    // A cloud filtering object
        std::string camera_frame_name;
                    // Visualization frame name
        visualization_msgs::Marker marker;
                    // Marker for visualization
        void plotBoundingBox(pcl::PCLPointCloud2::Ptr cloud ,std::string objectName);
                    // Prints the blob bounding box


    };


#endif //OBJECT_RECOGNITION_OBJECT_RECOGNITION_H

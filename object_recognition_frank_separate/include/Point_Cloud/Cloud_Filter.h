//
// Created by frank on 20.11.15.
//

#ifndef OBJECT_RECOGNITION_SUBSCRIBER_H
#define OBJECT_RECOGNITION_SUBSCRIBER_H

#include<pcl_ros/point_cloud.h>
#include<pcl/point_types.h>
#include<boost/foreach.hpp>


#include <iostream>
#include <vector>
#include <pcl/filters/voxel_grid.h>
#include <pcl/io/pcd_io.h>
#include <pcl/features/normal_3d.h>
#include <pcl/features/spin_image.h>
#include <pcl/filters/passthrough.h>
#include <pcl/segmentation/extract_clusters.h>
#include <common.h>


    class Cloud_Filter {
    public:

        Cloud_Filter(boost::property_tree::ptree& propertyTree);
                    //Initialization
        void filterSegmentCluster(PointCloudColored::Ptr input, std::vector<PointCloudColored::Ptr>& blobClusters);
                    // A filter segmenter and clusterer which manipulates by reference a vector of clusters of point clouds

    private:
        float voxelLeafSize, passThroughFilterLower, passThroughFilterUpper, ecClusterTolerance, ecMinCluster, ecMaxCluster;
                    // All filter segmenter and clusterer parameters
    };




#endif //OBJECT_RECOGNITION_SUBSCRIBER_H

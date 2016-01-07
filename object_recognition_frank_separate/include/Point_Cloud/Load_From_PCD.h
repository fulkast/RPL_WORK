//
// Created by frank on 22.11.15.
//

#ifndef OBJECT_RECOGNITION_LOAD_FROM_PCD_H
#define OBJECT_RECOGNITION_LOAD_FROM_PCD_H

#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include<pcl_ros/point_cloud.h>

#include <pcl/features/normal_3d.h>
#include <pcl/features/spin_image.h>
#include <pcl/common/pca.h>

#include <common.h>




class Load_From_PCD {

public:
    Load_From_PCD(boost::property_tree::ptree& propertyTree);
                // Initialization

    std::vector<blobCloudInfo> getCloudLibrary();
                // get the loaded library
private:

    std::vector<blobCloudInfo> cloudLibrary;
                // Library of model point clouds

};


#endif //OBJECT_RECOGNITION_LOAD_FROM_PCD_H

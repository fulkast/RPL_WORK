//
// Created by frank on 22.11.15.
//

#ifndef OBJECT_RECOGNITION_COMMON_H
#define OBJECT_RECOGNITION_COMMON_H

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/info_parser.hpp>
#include <boost/iterator.hpp>

typedef pcl::PointCloud<pcl::PointXYZRGB> PointCloudColored;

struct blobCloudInfo{
    // A blob info container
    std::string myName;
    PointCloudColored::Ptr myCloud;
};

#endif //OBJECT_RECOGNITION_COMMON_H

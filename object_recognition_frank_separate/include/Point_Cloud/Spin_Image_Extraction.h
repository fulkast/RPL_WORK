//
// Created by frank on 22.11.15.
//

#ifndef OBJECT_RECOGNITION_SPIN_IMAGE_EXTRACTION_H
#define OBJECT_RECOGNITION_SPIN_IMAGE_EXTRACTION_H

static const int histLength = 153;

#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/features/normal_3d.h>
#include <pcl/features/spin_image.h>
#include<pcl_ros/point_cloud.h>
#include <common.h>

//
//#include <boost/thread/thread.hpp>
//#include <pcl/common/common_headers.h>
//#include <pcl/features/normal_3d.h>
//#include <pcl/io/pcd_io.h>
//#include <pcl/visualization/pcl_visualizer.h>
//#include <pcl/console/parse.h>



class Spin_Image_Extraction {

public:
    Spin_Image_Extraction(boost::property_tree::ptree& propertyTree);
                // Initialization
    void getSpinImage(PointCloudColored::Ptr cloud,pcl::PointCloud<pcl::Histogram<histLength>>::Ptr spin_images);
                // A function that makes and returns through reference, the spin image

private:
    float normalsetRadiusSearch,spinImagesetRadiusSearch,spinSetMinPointCountInNeighbourhood,spinImageCosineSupport;
                // All spin image parameters
//    boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer;
                // The optional normals viewer
};


#endif //OBJECT_RECOGNITION_SPIN_IMAGE_EXTRACTION_H

//
// Created by frank on 22.11.15.
//

#include "Spin_Image_Extraction.h"

Spin_Image_Extraction::Spin_Image_Extraction(boost::property_tree::ptree& propertyTree)
            // Initialization
//        viewer (new pcl::visualization::PCLVisualizer ("3D Viewer"))
{
    // Load the spin image extraction parameters
    normalsetRadiusSearch = propertyTree.get<float>("NormalSearchParam.normalsetRadiusSearch");
    spinImagesetRadiusSearch = propertyTree.get<float>("SpinImageParam.spinImagesetRadiusSearch");
    spinSetMinPointCountInNeighbourhood = propertyTree.get<float>("SpinImageParam.spinSetMinPointCountInNeighbourhood");
    spinImageCosineSupport = propertyTree.get<float>("SpinImageParam.spinImageCosineSupport");

}

void Spin_Image_Extraction::getSpinImage(PointCloudColored::Ptr cloud, pcl::PointCloud<pcl::Histogram<histLength>>::Ptr spin_images)
            // A function that makes and returns through reference, the spin image
{
    // Initialize Normals of the current point cloud
    pcl::PointCloud<pcl::Normal>::Ptr normals (new pcl::PointCloud< pcl::Normal>);
    pcl::NormalEstimation<pcl::PointXYZRGB, pcl::Normal> normal_estimation;
    normal_estimation.setInputCloud (cloud);

    // Initialize KdTree as the search strategy
    pcl::search::KdTree<pcl::PointXYZRGB>::Ptr kdtree (new pcl::search::KdTree<pcl::PointXYZRGB>);
    normal_estimation.setSearchMethod (kdtree);

    // Perform normal estimation
    normal_estimation.setRadiusSearch (normalsetRadiusSearch);
    normal_estimation.compute (*normals);


    // Setup spin image computation
    pcl::SpinImageEstimation<pcl::PointXYZRGB, pcl::Normal, pcl::Histogram<histLength> > spin_image_descriptor(8, spinImageCosineSupport , spinSetMinPointCountInNeighbourhood);
    spin_image_descriptor.setInputCloud (cloud);
    spin_image_descriptor.setInputNormals (normals);

    // Set spin image parameters
    spin_image_descriptor.setSearchMethod (kdtree);
    spin_image_descriptor.setMinPointCountInNeighbourhood(spinSetMinPointCountInNeighbourhood);
    spin_image_descriptor.setRadiusSearch (spinImagesetRadiusSearch);

    // Actually compute the spin images
    spin_image_descriptor.compute (*spin_images);

}

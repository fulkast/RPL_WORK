//
// Created by frank on 20.11.15.
//

#include "Cloud_Filter.h"

    Cloud_Filter::Cloud_Filter(boost::property_tree::ptree& propertyTree)
                // Initialization
    {
        // Load all filter, segmentation and clustering related params
        // Voxel parameters
        voxelLeafSize = propertyTree.get<float>("VoxelGridParam.LeafSize");

        // Pass through filter parameters
        passThroughFilterLower = propertyTree.get<float>("PassThroughFilterParam.Lower");
        passThroughFilterUpper = propertyTree.get<float>("PassThroughFilterParam.Upper");

        // Euclidean Clustering parameters
        ecClusterTolerance = propertyTree.get<float>("EuclideanClustererParam.ecClusterTolerance");
        ecMaxCluster = propertyTree.get<float>("EuclideanClustererParam.ecMaxCluster");
        ecMinCluster = propertyTree.get<float>("EuclideanClustererParam.ecMinCluster");
    }


void Cloud_Filter::filterSegmentCluster(PointCloudColored::Ptr input, std::vector<PointCloudColored::Ptr>& blobClusters)
                // A cascaded filter segmenter and clusterer
    {

        // Create the pass through filtering object and input by reference, the point cloud to be filtered.
        pcl::PassThrough<pcl::PointXYZRGB> pass;
                    // A pass through filter
        pass.setInputCloud (input);
        pass.setFilterFieldName ("z");
        pass.setFilterLimits (passThroughFilterLower, passThroughFilterUpper);
        pass.filter (*input);

        // Perform the voxel filtering which tesselates the point cloud
        pcl::VoxelGrid<pcl::PointXYZRGB> sor;
                    // A voxwel grid filter
        sor.setInputCloud (input);
        sor.setLeafSize (voxelLeafSize, voxelLeafSize, voxelLeafSize);
        sor.filter (*input);

        // Cluster the point cloud using KdTree structure as means of search
        pcl::search::KdTree<pcl::PointXYZRGB>::Ptr tree (new pcl::search::KdTree<pcl::PointXYZRGB>);
        tree->setInputCloud (input);

        // Set clustering parameters and retrieve cluster indices
        std::vector<pcl::PointIndices> cluster_indices;
        pcl::EuclideanClusterExtraction<pcl::PointXYZRGB> ec;
        ec.setClusterTolerance (ecClusterTolerance); // 2cm
        ec.setMinClusterSize (ecMinCluster);
        ec.setMaxClusterSize (ecMaxCluster);
        ec.setSearchMethod (tree);
        ec.setInputCloud (input);
        ec.extract (cluster_indices);

        // Iterate through indices of clusters to send output vector of clusters
        int j = 0;
        for (std::vector<pcl::PointIndices>::const_iterator it = cluster_indices.begin (); it != cluster_indices.end (); ++it)
        {
            pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud_cluster (new pcl::PointCloud<pcl::PointXYZRGB>);
            for (std::vector<int>::const_iterator pit = it->indices.begin (); pit != it->indices.end (); ++pit)
                cloud_cluster->points.push_back (input->points[*pit]); //*
            cloud_cluster->width = cloud_cluster->points.size ();
            cloud_cluster->height = 1;
            cloud_cluster->is_dense = true;
            blobClusters.push_back(cloud_cluster);
            j++;
        }

    }


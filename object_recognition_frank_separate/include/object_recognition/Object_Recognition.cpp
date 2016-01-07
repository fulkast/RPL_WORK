//
// Created by frank on 22.11.15.
//

#include "Object_Recognition.h"



Object_Recognition::Object_Recognition(ros::NodeHandle& nh,boost::property_tree::ptree& propertyTree)
            // Initialization
:
        modelCloud(new PointCloudColored), siExtractor(propertyTree) , filterCloud(propertyTree)
{
    // Correlation point cloud blob size parameters
    maxBlobSize = propertyTree.get<std::size_t>("CorrelationParam.maxBlobSize");
    maxModelBlobSize = propertyTree.get<std::size_t>("CorrelationParam.maxModelBlobSize");

    // Correlation accuracy requirement parameters
    minAccuracy = propertyTree.get<float>("CorrelationParam.minAccuracy");
    minCount = propertyTree.get<std::size_t>("CorrelationParam.minCount");

    // Visualization parameters
    camera_frame_name = propertyTree.get<std::string>("Visualization.camera_frame_name");

    // Initialize the library to load from
    Load_From_PCD loadedModel(propertyTree);

    // Initialize the publisher for the recognized object and its bounding box
    filteredCloudPub = nh.advertise<PointCloudColored>("filteredCloud",1,true);
    clusterPub = nh.advertise<PointCloudColored>("clusterCloud",1,true);

    // Load library of references
    cloudLibrary = loadedModel.getCloudLibrary();

    // Reserve space for the library's spin images
    librarySpinImages.reserve(cloudLibrary.size());
    for (size_t cloud = 0; cloud < cloudLibrary.size() ; cloud++)
    {
        // Initialize a histogram object for the library of histograms and push the allocation to the vector of the library
        pcl::PointCloud<pcl::Histogram<histLength>>::Ptr hist (new pcl::PointCloud<pcl::Histogram<histLength>>);
        librarySpinImages.push_back(hist);

        // Get the corresponding spin image point cloud of histograms
        siExtractor.getSpinImage(cloudLibrary[cloud].myCloud, librarySpinImages[cloud]);

        // Free pointer space
        hist.reset();


    }

    // Initialize the bounding box publisher
    boxPub = nh.advertise<visualization_msgs::Marker>(propertyTree.get<std::string>("Namespace.boundingBoxTopicName"),1);
    // A point cloud filterer object
    Cloud_Filter filterCloud(propertyTree);

    // Marker types to indicate the type of the output
    marker.type = visualization_msgs::Marker::CUBE;
}

void Object_Recognition::callback(const sensor_msgs::PointCloud2ConstPtr& input)
            // A callback function acting on the raw input data and performing the object recognition
{
            // Container for original & filtered data
            PointCloudColored::Ptr cloud(new PointCloudColored);
            pcl::PCLPointCloud2 *cloud2 = new pcl::PCLPointCloud2;

            // Convert to PCL data type
            pcl_conversions::toPCL(*input, *cloud2);
            pcl::fromPCLPointCloud2(*cloud2, *cloud);

            // Filter, segment and cluster the raw point cloud
            std::vector<PointCloudColored::Ptr> clusters;
            filterCloud.filterSegmentCluster(cloud, clusters);



        // Loop through all clusters and assigning classifications
        for (std::size_t i = 0; i < clusters.size(); i++) {
            float best = 0;
            // Initialize recognized object as unknown
            std::string object = "unknown";

            // Loop through the library of
                for (std::size_t model = 0; model < cloudLibrary.size(); model++)
            {
                // Space for model spin images and extractor
                pcl::PointCloud<pcl::Histogram<histLength>>::Ptr modelSpinImages(new pcl::PointCloud<pcl::Histogram<histLength> >);
                
                //    Extract spin features
                pcl::PointCloud<pcl::Histogram<histLength>>::Ptr spinImages(new pcl::PointCloud<pcl::Histogram<histLength>>);
                siExtractor.getSpinImage(clusters[i], spinImages);

                //    Reduce dimensionality (optional)
                //    -- If true, done also for the candidate spin images
                //    Randomly pick N and M, or less points to compare from each
                std::random_shuffle(spinImages->begin(), spinImages->end());
                std::random_shuffle(librarySpinImages[model]->begin(), librarySpinImages[model]->end());
                std::size_t N = maxBlobSize;
                std::size_t M = maxModelBlobSize;
                std::size_t Nx = std::min(spinImages->size(), N);
                std::size_t Ny = std::min(librarySpinImages[model]->size(), M);

                // If cloud over crowded, continue
                if (spinImages->size()>Nx*2)
                    continue;

                //    Create matching
                //    Returns
                //    -- Candidates
                float totalCorrelation = 0;
                float pairWiseCorrelation;
                float totalCount = Nx*Ny;
                for (std::size_t x = 0; x < Nx; x++) {

                    for (std::size_t y = 0; y < Ny; y++) {

                        // Find correlation between current point cloud and reference point cloud
                        Eigen::Map<Eigen::VectorXf> blobV(spinImages->at(x).histogram, histLength);
                        Eigen::Map<Eigen::VectorXf> modelV(librarySpinImages[model]->at(y).histogram, histLength);
                        pairWiseCorrelation = (blobV.dot(modelV) * histLength - blobV.sum() * modelV.sum())
                                              /
                                              std::sqrt(
                                                      (histLength * (blobV.dot(blobV)) - blobV.sum() * blobV.sum())
                                                      *
                                                      (histLength * (modelV.dot(modelV)) - modelV.sum() * modelV.sum()));

                        // Use only pairs with correlation greater than minimal accuracy
                        if (std::abs(pairWiseCorrelation) < minAccuracy)
                            totalCount--;
                        pairWiseCorrelation = std::abs(pairWiseCorrelation) > minAccuracy ? pairWiseCorrelation : 0.0;
                        totalCorrelation += pairWiseCorrelation;

                    }

                }

                // Perform p1,p2,d1,d2 sensitivity procedure to filter out noisy point cloud blobs
                // Inspired by : http://www.slideshare.net/SameeraHorawalavithana/locality-sensitive-hashing
                if (totalCount < minCount)
                        totalCorrelation = 0.0;
                totalCorrelation*=totalCount/cloudLibrary[model].myCloud->size();

                clusters[i]->header.frame_id = camera_frame_name;
                clusterPub.publish(clusters[i]);
                std::cout << "Correlation with " << cloudLibrary[model].myName << " is " << totalCorrelation;

                if (totalCorrelation > best) {
                    best = totalCorrelation;
                    object = cloudLibrary[model].myName;
                }


            }

            std::cout << "The object is : " << object << std::endl;
            pcl::PCLPointCloud2::Ptr cloud2(new pcl::PCLPointCloud2);
            pcl::toPCLPointCloud2(*clusters[i],*cloud2);
            plotBoundingBox(cloud2,object);
            cloud2.reset();
        }

}


void Object_Recognition::plotBoundingBox(const pcl::PCLPointCloud2::Ptr cloud ,std::string objectName)
            // Prints the blob bounding box
{
    Eigen::Vector4f northPole , southPole;
//    pcl::compute3DCentroid (*cloud, centroid);

    pcl::getMinMax3D(cloud,1,1,1,northPole,southPole);

    // Clear boxes
    marker.action = 3;
    boxPub.publish(marker);

    // SET MARKER
    marker.header.frame_id = camera_frame_name;
    marker.header.stamp = ros::Time();
    marker.id = 1;


    marker.action = visualization_msgs::Marker::ADD;
    marker.pose.position.x = (northPole[0] - southPole[0])/2;
    marker.pose.position.y = (northPole[1] - southPole[1])/2;
    marker.pose.position.z = (northPole[2] - southPole[2])/2;
    marker.scale.x = std::abs((northPole[0] - southPole[0]));
    marker.scale.y = std::abs((northPole[1] - southPole[1]));
    marker.scale.z = std::abs((northPole[2] - southPole[2]));
    marker.color.a = 0.5;
    marker.color.r = 0;
    marker.color.g = 0;
    marker.color.b = 0;
    //only if using a MESH_RESOURCE marker type:
    marker.mesh_resource = "package://pr2_description/meshes/base_v0/base.dae";

    objectName = objectName.substr(0, objectName.size()-1);

    if (objectName == "unknow"){
        marker.color.r = 1.0;
    }else if(objectName == "duck")
    {
        marker.color.b = 1.0;
    }
    else
    {
        marker.color.g = 1.0;
    }

    boxPub.publish(marker);


}




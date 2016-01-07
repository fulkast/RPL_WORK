//
// Created by frank on 22.11.15.
//

#include "Load_From_PCD.h"


Load_From_PCD::Load_From_PCD(boost::property_tree::ptree& propertyTree)
            // Initialization
{
    // define namespace
    using boost::property_tree::ptree;

    BOOST_FOREACH(ptree::value_type &v,propertyTree.get_child("Library"))
        {

            PointCloudColored::Ptr newCloud(new PointCloudColored);
            if (pcl::io::loadPCDFile<pcl::PointXYZRGB> ( (boost::filesystem::current_path().string() + propertyTree.get<std::string>("LibraryPath.PathName") +
                                                                propertyTree.get<std::string>("Library."+ v.first)),
                                                                *newCloud) == -1) //* load the file
            {
                PCL_ERROR ("Couldn't read file \n");
            }
            #ifdef _DEBUG_PRINT_
            std::cout << "Loaded "
            << newCloud->width * newCloud->height
            << " data points from test_pcd.pcd with the following fields: "
            << std::endl;
            #endif
            // Create a cloud info object from the parsed pcd file and add to library of models
            blobCloudInfo currentCloud = {v.first,newCloud};
            cloudLibrary.push_back(currentCloud);

            // Free pointer space
            newCloud.reset();
        }

}



std::vector<blobCloudInfo> Load_From_PCD::getCloudLibrary()
            // get the loaded library
{
    return cloudLibrary;
}

// Author: Lanke Frank Tarimo Fu
// Date created: 20th November 2015

#include <ros/ros.h>
#include "Point_Cloud/Cloud_Filter.h"
#include "object_recognition/Object_Recognition.h"


int main(int argc , char** argv){

    if(argv[1] == NULL)
    {
        std::cerr << "Usage of object_recognition: \n arg = directory_to_parameters.info" << std::endl;
        return 1;
    }

    // Init ROS
    ros::init(argc, argv, "object_recognition_node");
    ros::start();
    ros::NodeHandle obj_recogn_node_handler;

    // Load task parameters using command line input which gives the directory name
    boost::property_tree::ptree objRecognPT;
    boost::property_tree::read_info(argv[1], objRecognPT);

    // Create object recognition node using current node handler
    Object_Recognition objectRecogn(obj_recogn_node_handler, objRecognPT);
    ros::Subscriber filterSub = obj_recogn_node_handler.subscribe<sensor_msgs::PointCloud2>("/camera/depth_registered/points", 1, &Object_Recognition::callback, &objectRecogn);

    // Process ros callback
    ros::spin();
    // Safely shutdown ros
    ros::shutdown();




    return 0;
}
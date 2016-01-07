/* 
* Class for handling the ROS node which is related to the Roboscoop.
*
* Chair of Software Engineering, ETH Zurich
* Author:	Rusakov Andrey
* Date:		18.04.2013	
*/

#ifndef ROBOSCOOP_NODE_H
#define ROBOSCOOP_NODE_H

#include "eif_eiffel.h"
#include <string>
#include <ros/console.h>
#include "ros/ros.h"
 
class RoboscoopNode
{
protected:
	// Node's name in ROS.
	std::string name;

public:
	// Constructor.
	RoboscoopNode(EIF_POINTER _name)
	{
		name = std::string((const char*)_name);
		init();
	}
	
	// Destructor.
	~RoboscoopNode()
	{
	}

	// Initialization of ROS resources.
	void init()
	{
		const std::map<std::string, std::string> args_remapping;
		printf("Going to init ROS node: %s\n", name.c_str());
		ros::init(args_remapping, name);
		ROS_INFO("New ROS node initialized: %s", name.c_str());
	}

	// Destruct the node in ROS.
	void shutdown()
	{
		ros::shutdown();
		printf("ROS node shut down: %s\n", name.c_str());
	}
};

#endif

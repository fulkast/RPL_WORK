/* 
* Class provides a feature of subscribing to ROS topics from Eiffel.
*
* Chair of Software Engineering, ETH Zurich
* Author:	Rusakov Andrey
* Date:		13.05.2014
* Modified:	13.05.2014
*/

#ifndef SPINNER_H
#define SPINNER_H

#include "eif_eiffel.h"
#include "eif_setup.h"
#include "ros/ros.h"
#include <ros/callback_queue.h>
#include <string>

class Spinner
{

public:
	// Constructor.
	Spinner ()
	{
		ROS_INFO("New ROS Spinner");
	}

	// Destructor.
	virtual ~Spinner ()
	{
		printf ("Deleting Spinner object\n");
	}

	// Spin in a busy loop.
	void spin_manually()
	{
		ROS_INFO("Start spinning manually");
		while (ros::ok())
		{
			ros::getGlobalCallbackQueue()->callAvailable(ros::WallDuration(0.01));
//			printf("Calling available from the queue\n");
		}
	}

	// Start listening to ROS messages in a separate thread.
	void start ()
	{
		spin_manually();
	}

	// Stop listening to ROS messages.
	void stop ()
	{
		printf("ROS spinner stopped.\n");
	}
};
#endif

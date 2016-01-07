/* 
* Class for publishing messages to ROS.
*
* Chair of Software Engineering, ETH Zurich
* Author:	Rusakov Andrey
* Date:		30.08.2013	
*/

#ifndef PUBLISHER_H
#define PUBLISHER_H

#include "ros/ros.h"
#include "eif_eiffel.h"
#include <string>
#include <ros/console.h>

class Publisher
{
protected:

	// Publisher to the  topic.
	ros::Publisher pub;

	// Topic name to publish to.
	std::string topic_name;

	// Has the topic been advertized in ROS?
	bool advertized;

	// Queue size for publishing. All earlier messages will be dropped.
	static const int default_queue_size = 1;

public:
	// Constructor.
	Publisher ()
	{
	}

	// Destructor.
	virtual ~Publisher()
	{
		printf ("Deleting Publisher object: %s\n", topic_name.c_str());
	}

	// Set ROS topic name for publishing.
	void set_topic_name (EIF_POINTER _topic_name)
	{
		topic_name = std::string((const char*)_topic_name);
	}

	// Advertize topic with a message of a templated type.
	template <class MESSAGE_TYPE>
	void advertize (int queue_size = default_queue_size, bool is_latched = false)
	{	
		ros::NodeHandle nh;
		pub = nh.advertise<MESSAGE_TYPE>(topic_name, queue_size, is_latched);
		advertized = true;

		int count = 50; // Check count times per second.
		ros::Rate loop_rate(count * 2);
		// Wait until the topic is advertized, BUT no more than two seconds.
		while (count > 0 and pub.getNumSubscribers() <= 0)
		{
			loop_rate.sleep();
			count--;
		}
		ROS_INFO("New ROS Publisher:%s", topic_name.c_str());
	}

	// Publish message of a templated type.
	template <class MESSAGE_TYPE>
	void publish_message (MESSAGE_TYPE message)
	{
		if (advertized)
		{
			pub.publish(message);
		}
	}
};

#endif

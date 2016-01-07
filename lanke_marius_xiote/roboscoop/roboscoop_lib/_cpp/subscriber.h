/* 
* Class provides a feature of subscribing to ROS topics from Eiffel.
*
* Chair of Software Engineering, ETH Zurich
* Author:	Rusakov Andrey
* Date:		13.05.2014
* Modified:	13.05.2014
*/

#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include "eif_eiffel.h"
#include "eif_setup.h"
#include "ros/ros.h"
#include <ros/console.h>
#include <string>
#include <map>
#include <ros/callback_queue.h>
#include <ros/subscribe_options.h>
#include <std_msgs/String.h>

#include <boost/bind.hpp>

class Subscriber
{

protected:

	// Map of registered Eiffel callbacks for requested topics.
	std::map <std::string, std::pair<EIF_OBJECT, EIF_POINTER> > eiffel_callbacks;

	// Map of ROS Subscriber objects listening to requested topics.
	std::map <std::string, ros::Subscriber > ros_subscribers;

	// Node handle object to communicate with ROS.
	boost::shared_ptr<ros::NodeHandle>  nh;

	// Are Eiffel objects allowed to be collected by GC?
	bool is_eiffel_objects_released;

public:
	// Constructor.
	Subscriber ()
	{
		nh.reset (new ros::NodeHandle());
		is_eiffel_objects_released = false;
		ROS_INFO("New ROS Subscriber");
	}

	// Destructor.
	virtual ~Subscriber ()
	{
		if(!is_eiffel_objects_released)
		{
			release_eiffel_objects ();
		}
		eiffel_callbacks.clear();
		ros_subscribers.clear();
		printf ("Deleting Subscriber object\n");
	}

	// Subscribe for templated message type on given topic.
	template <typename MESSAGE_TYPE, typename CALLBACK_MESSAGE_TYPE>
	void subscribe (EIF_POINTER topic_name, EIF_OBJECT obj, EIF_POINTER routine)
	{
		const std::string topic = std::string((const char*)topic_name);
		eiffel_callbacks[topic] = std::make_pair (eif_adopt (obj), routine);
		subscribe_for_callback <MESSAGE_TYPE, CALLBACK_MESSAGE_TYPE> (topic);
	}

	// Templated subscription for a callback.
	template <typename MESSAGE_TYPE, typename CALLBACK_MESSAGE_TYPE>
	void subscribe_for_callback (const std::string &topic_name)
	{
		ros::Subscriber sub = nh->subscribe <MESSAGE_TYPE>(topic_name, 10, boost::bind(&Subscriber::common_callback<MESSAGE_TYPE, CALLBACK_MESSAGE_TYPE>, this, _1, topic_name));
		ros_subscribers [topic_name] = sub;
		ROS_WARN("Subscribed:%s", topic_name.c_str());		
	}

	// Templated callback routine.
	template <typename MESSAGE_TYPE, typename CALLBACK_MESSAGE_TYPE>
	void common_callback (const CALLBACK_MESSAGE_TYPE &message, const std::string &topic_name)
	{
//		ROS_WARN ("Callback on %s", topic_name.c_str());
		if (eiffel_callbacks.count(topic_name) > 0)
		{
			std::pair<EIF_OBJECT, EIF_POINTER> p = eiffel_callbacks[topic_name];
			EIF_ENTER_EIFFEL;
			RTGC;
			((void (*) (EIF_REFERENCE, EIF_POINTER)) p.second) (eif_access(p.first), (EIF_POINTER)message.get());
			EIF_EXIT_EIFFEL;
		}
		else
		{
			printf("No listeners for %s\n", topic_name.c_str());
		}
	}

	// Remove protection of Eiffel objects at C++ side, so GC will be able to collect them.
	void release_eiffel_objects ()
	{
		for(std::map<std::string, std::pair<EIF_OBJECT, EIF_POINTER> >::iterator iterator = eiffel_callbacks.begin(); 
			iterator != eiffel_callbacks.end(); iterator++) 
		{
			EIF_OBJECT obj = iterator->second.first;
			eif_wean (obj);
			printf("Releasing Eiffel object\n");
		}
		is_eiffel_objects_released = true;
	}
};

#endif

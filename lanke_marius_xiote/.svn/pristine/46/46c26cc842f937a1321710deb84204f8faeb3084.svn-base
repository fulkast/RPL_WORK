/* 
* Class for publishing basic messages to ROS.
*
* Chair of Software Engineering, ETH Zurich
* Author:	Rusakov Andrey
* Date:		23.04.2014	
*/

#ifndef BASIC_TYPE_PUBLISHER_H
#define BASIC_TYPE_PUBLISHER_H

#include "publisher.h"
#include "std_msgs/Empty.h"
#include "std_msgs/Bool.h"
#include "std_msgs/Int8.h"
#include "std_msgs/Int16.h"
#include "std_msgs/Int32.h"
#include "std_msgs/Int64.h"
#include "std_msgs/UInt8.h"
#include "std_msgs/UInt16.h"
#include "std_msgs/UInt32.h"
#include "std_msgs/UInt64.h"
#include "std_msgs/Float32.h"
#include "std_msgs/Float64.h"
#include "std_msgs/String.h"
#include "std_msgs/Time.h"
#include "std_msgs/Duration.h"

enum BasicTypes {NOTYPE, EMPTY, BOOL, FLOAT32, FLOAT64, INT8, INT16, INT32, INT64, UINT8, UINT16, UINT32, UINT64, STRING, TIME, DURATION};

class BasicTypePublisher : public Publisher
{
protected:
	// Advertized message type.
	BasicTypes current_message_type;

	// Does the given type of the message correspon to the advertized type?
	bool is_corresponding_message (BasicTypes intended_message_type)
	{
		if (current_message_type != intended_message_type)
		{
			ROS_ERROR("ROBOSCOOP: Trying to publish messages of different types to the same topic");
			return false;
		}
		return true;
	}


	// Publish message of a templated type with a single data value.
	template <class MESSAGE_TYPE, class VALUE_TYPE>
	void publish_basic_message (VALUE_TYPE value, BasicTypes intended_type)
	{
		if(!advertized)
		{
			advertize <MESSAGE_TYPE>();
			current_message_type = intended_type;
		}

		if (is_corresponding_message(intended_type))
		{
			MESSAGE_TYPE message;
			message.data = value;
			publish_message <MESSAGE_TYPE> (message);
		}
	}

	// Publish empty message.
	void publish_empty_message()
	{
		if(!advertized)
		{
			advertize <std_msgs::Empty>();
			current_message_type = EMPTY;
			initialized = true;
			ROS_INFO("New ROS Worker: %s", get_name());
		}

		if (is_corresponding_message(EMPTY))
		{
			std_msgs::Empty message;
			publish_message <std_msgs::Empty> (message);
		}
	}

public:
	// Constructor.
	BasicTypePublisher (EIF_POINTER _name) : Publisher(_name)
	{
		current_message_type = NOTYPE;
		advertized = false;
	}

	// Destructor.
	virtual ~BasicTypePublisher()
	{
		printf ("Deleting BasicTypePublisher object\n");
	}

/*
* Publishing basic types
*/

	// Publishing empty message.
	void publish_empty ()
	{
		publish_empty_message();
	}

	// Publishing boolean value.
	void publish_boolean (EIF_BOOLEAN value)
	{
		publish_basic_message <std_msgs::Bool>(value, BOOL);
	}

	// Publishing integer_8 value.
	void publish_integer_8 (EIF_INTEGER_8 value)
	{
		publish_basic_message <std_msgs::Int8>(value, INT8);
	}

	// Publishing integer_16 value.
	void publish_integer_16 (EIF_INTEGER_16 value)
	{
		publish_basic_message <std_msgs::Int16>(value, INT16);
	}

	// Publishing integer_32 value.
	void publish_integer_32 (EIF_INTEGER_32 value)
	{
		publish_basic_message <std_msgs::Int32>(value, INT32);
	}

	// Publishing integer_64 value.
	void publish_integer_64 (EIF_INTEGER_64 value)
	{
		publish_basic_message <std_msgs::Int64>(value, INT64);
	}

	// Publishing natural_8 value.
	void publish_natural_8 (EIF_NATURAL_8 value)
	{
		publish_basic_message <std_msgs::UInt8>(value, UINT8);
	}

	// Publishing natural_16 value.
	void publish_natural_16 (EIF_NATURAL_16 value)
	{
		publish_basic_message <std_msgs::UInt16>(value, UINT16);
	}

	// Publishing natural_32 value.
	void publish_natural_32 (EIF_NATURAL_32 value)
	{
		publish_basic_message <std_msgs::UInt32>(value, UINT32);
	}

	// Publishing natural_64 value.
	void publish_natural_64 (EIF_NATURAL_64 value)
	{
		publish_basic_message <std_msgs::UInt64>(value, UINT64);
	}

	// Publishing float value.
	void publish_real_32 (EIF_REAL_32 value)
	{
		publish_basic_message <std_msgs::Float32>(value, FLOAT32);
	}

	// Publishing double value.
	void publish_real_64 (EIF_REAL_64 value)
	{
		publish_basic_message <std_msgs::Float64>(value, FLOAT64);
	}

	// Publishing string value.
	void publish_string (EIF_POINTER value)
	{
		publish_basic_message <std_msgs::String>(std::string((const char*)value), STRING);
	}

	// Publishing time value.
	void publish_time (EIF_REAL_64 value)
	{
		ros::Time t (value);
		publish_basic_message <std_msgs::Time>(t, TIME);
	}

	// Publishing duration value.
	void publish_duration (EIF_REAL_64 value)
	{
		ros::Duration d (value);
		publish_basic_message <std_msgs::Duration>(d, DURATION);
	}

/*
* TODO: Handling arrays.
*/

};

#endif

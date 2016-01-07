note
	description: "Velocity in 3D-space broken into linear and angular parts."
	author: "Rusakov Andrey"
	date: "02.04.2015"

class
	TWIST_MSG

inherit
	ROS_MESSAGE

create
	make_empty, make_from_pointer, make_with_values, make_from_separate

feature {NONE} -- Initialization.

	make_empty
			-- Create empty `Current'.
		do
			create linear.make_empty
			create angular.make_empty
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_linear, a_angular: VECTOR_3D_MSG)
			-- Create `Current' with values.
		do
			linear := a_linear
			angular := a_angular
		end

feature -- Access

	linear, angular: VECTOR_3D_MSG
			-- Linear and angular parts of the velocity.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			create linear.make_from_pointer (get_linear_from_c (c_ptr))
			create angular.make_from_pointer (get_angular_from_c (c_ptr))
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		local
			linear_ptr, angular_ptr: POINTER
		do
			linear_ptr := linear.allocate_c_msg
			angular_ptr := angular.allocate_c_msg
			Result := c_msg_ptr (linear_ptr, angular_ptr)
			linear.deallocate_c_msg (linear_ptr)
			angular.deallocate_c_msg (angular_ptr)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"geometry_msgs/Twist.h%""
		alias
			"delete (geometry_msgs::Twist*)$a_msg_ptr;"
		end

feature {NONE} -- Externals

	get_linear_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"geometry_msgs/Twist.h%""
		alias
			"return &(((geometry_msgs::Twist*)($c_ptr))->linear);"
		end

	get_angular_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"geometry_msgs/Twist.h%""
		alias
			"return &(((geometry_msgs::Twist*)($c_ptr))->angular);"
		end

	c_msg_ptr (a_linear, a_angular: POINTER): POINTER
		external
			"C++ inline use %"geometry_msgs/Twist.h%""
		alias
			"[
				geometry_msgs::Twist* msg = new geometry_msgs::Twist();
				msg->linear = *((geometry_msgs::Vector3*)$a_linear);
				msg->angular = *((geometry_msgs::Vector3*)$a_angular);
				return msg;
			]"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"geometry_msgs/Twist.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <geometry_msgs::Twist> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"geometry_msgs/Twist.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <geometry_msgs::Twist> (*((geometry_msgs::Twist*)$a_msg_ptr));"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"geometry_msgs/Twist.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<geometry_msgs::Twist, geometry_msgs::Twist::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end

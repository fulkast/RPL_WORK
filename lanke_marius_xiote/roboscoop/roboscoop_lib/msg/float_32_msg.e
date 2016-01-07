note
	description: "Single precision real value."
	author: "Rusakov Andrey"
	date: "08.05.2015"

class
	FLOAT_32_MSG

inherit
	ROS_MESSAGE

create
	make_empty, make_from_pointer, make_with_values, make_from_separate

feature {NONE} -- Initialization.

	make_empty
			-- Create empty Current.
		do
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_data: REAL_32)
			-- Create `Current' with values.
		do
			data := a_data
		end

feature -- Access

	data: REAL_32
			-- Value.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			data := get_data_from_c (c_ptr)
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		do
			Result := c_msg_ptr (data)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"std_msgs/Float32.h%""
		alias
			"delete (std_msgs::Float32*)$a_msg_ptr;"
		end

feature {NONE} -- Externals

	get_data_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"std_msgs/Float32.h%""
		alias
			"return (double)(((std_msgs::Float32*)($c_ptr))->data);"
		end

	c_msg_ptr (a_data: REAL_32): POINTER
		external
			"C++ inline use %"std_msgs/Float32.h%""
		alias
			"[
				std_msgs::Float32* msg = new std_msgs::Float32();
				msg->data = $a_data;
				return msg;
			]"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"std_msgs/Float32.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <std_msgs::Float32> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"std_msgs/Float32.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <std_msgs::Float32> (*((std_msgs::Float32*)$a_msg_ptr));"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"std_msgs/Float32.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<std_msgs::Float32, std_msgs::Float32::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end

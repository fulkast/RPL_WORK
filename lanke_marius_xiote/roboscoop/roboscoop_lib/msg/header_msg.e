note
	description: "Metadata for other messages."
	author: "Rusakov Andrey"
	date: "30.03.2015"

class
	HEADER_MSG

inherit
	ROS_MESSAGE

create
	make_empty, make_from_pointer, make_with_values, make_from_separate, make_now

feature {NONE} -- Initialization.

	make_empty
			-- Create empty`Current'.
		do
			create frame_id.make_empty
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_seq: NATURAL_32; a_timestamp: REAL_64; a_frame_id: STRING)
			-- Create `Current' with values.
		do
			seq := a_seq
			timestamp := a_timestamp
			create frame_id.make_from_separate (a_frame_id)
		end

	make_now (a_frame_id: STRING)
			-- Create `Current' with values.
		do
			timestamp := get_now
			create frame_id.make_from_separate (a_frame_id)
		end

feature -- Access

	seq: NATURAL_32
			-- Consecutively increasing ID.

	timestamp: REAL_64
			-- Time stamp in seconds since epoch.

	frame_id: STRING_8
			-- Frame id for coordinates transformation.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			seq := get_seq_from_c (c_ptr)
			timestamp := get_timestamp_from_c (c_ptr)
			frame_id := get_frame_id_from_c (c_ptr)
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance.
		local
			c_frame_id: C_STRING
		do
			create c_frame_id.make (frame_id)
			Result := c_msg_ptr (seq, timestamp, c_frame_id.item)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"std_msgs/Header.h%""
		alias
			"delete (std_msgs::Header*)$a_msg_ptr;"
		end

feature {NONE} -- Externals

	get_seq_from_c (c_ptr: POINTER): NATURAL_32
		external
			"C++ inline use %"std_msgs/Header.h%""
		alias
			"return (uint32_t)(((std_msgs::Header*)($c_ptr))->seq);"
		end

	get_timestamp_from_c (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"std_msgs/Header.h%""
		alias
			"return (double)(((std_msgs::Header*)($c_ptr))->stamp.toSec());"
		end

	get_frame_id_from_c (c_ptr: POINTER): STRING_8
		external
			"C++ inline use %"std_msgs/Header.h%", %"eif_plug.h%""
		alias
			"[
				std::string frame_id = (std::string)(((std_msgs::Header*)($c_ptr))->frame_id);
				return eif_string ((char*)frame_id.c_str());
			]"
		end

	c_msg_ptr (a_seq: NATURAL_32; a_timestamp: REAL_64; a_frame_id: POINTER): POINTER
		external
			"C++ inline use %"std_msgs/Header.h%""
		alias
			"[
				std::string frame_id((char*)$a_frame_id);
				std_msgs::Header* msg = new std_msgs::Header();
				msg->seq = $a_seq;
				msg->stamp = ros::Time($a_timestamp);
				msg->frame_id = frame_id;
				return msg;
			]"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"std_msgs/Header.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <std_msgs::Header> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"std_msgs/Header.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <std_msgs::Header> (*((std_msgs::Header*)$a_msg_ptr));"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"std_msgs/Header.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<std_msgs::Header, std_msgs::Header::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end

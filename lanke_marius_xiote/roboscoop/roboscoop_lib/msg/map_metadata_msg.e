note
	description: "Characteristics of the occupancy grid."
	author: "Rusakov Andrey"
	date: "31.03.2015"

class
	MAP_METADATA_MSG

inherit
	ROS_MESSAGE

create
	make_empty, make_from_pointer, make_with_values, make_from_separate

feature {NONE} -- Initialization.

	make_empty
			-- Create empty `Current'.
		do
			create origin.make_empty
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_load_time: REAL_64; a_resolution: REAL_32; a_width, a_height: NATURAL; a_origin: POSE_MSG)
			-- Create `Current' with values.
		do
			map_load_time := a_load_time
			resolution := a_resolution
			width := a_width
			height := a_height
			origin := a_origin
		end

feature -- Access

	map_load_time: REAL_64
			-- Time at which map was loaded.

	resolution: REAL_32
			-- Resolution (meters per cell).

	width, height: NATURAL
			-- Dimensions (number of cells).

	origin: POSE_MSG
			-- Pose of the map's origin.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			map_load_time := get_load_time_from_c (c_ptr)
			resolution := get_resolution_from_c (c_ptr)
			width := get_width_from_c (c_ptr)
			height := get_height_from_c (c_ptr)
			create origin.make_from_pointer (get_origin_from_c(c_ptr))
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		local
			origin_ptr: POINTER
		do
			origin_ptr := origin.allocate_c_msg
			Result := c_msg_ptr (map_load_time, resolution, width, height, origin_ptr)
			origin.deallocate_c_msg (origin_ptr)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"nav_msgs/MapMetaData.h%""
		alias
			"delete (nav_msgs::MapMetaData*)$a_msg_ptr;"
		end

feature {NONE} -- Externals

	get_load_time_from_c (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"nav_msgs/MapMetaData.h%""
		alias
			"return (double)(((nav_msgs::MapMetaData*)($c_ptr))->map_load_time.toSec());"
		end

	get_resolution_from_c (c_ptr: POINTER): REAL_32
		external
			"C++ inline use %"nav_msgs/MapMetaData.h%""
		alias
			"return (float)(((nav_msgs::MapMetaData*)($c_ptr))->resolution);"
		end

	get_width_from_c (c_ptr: POINTER): NATURAL
		external
			"C++ inline use %"nav_msgs/MapMetaData.h%""
		alias
			"return (uint32_t)(((nav_msgs::MapMetaData*)($c_ptr))->width);"
		end

	get_height_from_c (c_ptr: POINTER): NATURAL
		external
			"C++ inline use %"nav_msgs/MapMetaData.h%""
		alias
			"return (uint32_t)(((nav_msgs::MapMetaData*)($c_ptr))->height);"
		end

	get_origin_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"nav_msgs/MapMetaData.h%""
		alias
			"return &(((nav_msgs::MapMetaData*)($c_ptr))->origin);"
		end

	c_msg_ptr (a_load_time: REAL_64; a_resolution: REAL_32; a_width, a_height: NATURAL; a_origin: POINTER): POINTER
		external
			"C++ inline use %"nav_msgs/MapMetaData.h%""
		alias
			"[
				nav_msgs::MapMetaData* msg = new nav_msgs::MapMetaData();
				msg->map_load_time = ros::Time($a_load_time);
				msg->resolution = $a_resolution;
				msg->width = $a_width;
				msg->height = $a_height;
				msg->origin = *((geometry_msgs::Pose*)$a_origin);
				return msg;
			]"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"nav_msgs/MapMetaData.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <nav_msgs::MapMetaData> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"nav_msgs/MapMetaData.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <nav_msgs::MapMetaData> (*((nav_msgs::MapMetaData*)$a_msg_ptr));"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"nav_msgs/MapMetaData.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<nav_msgs::MapMetaData, nav_msgs::MapMetaData::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end

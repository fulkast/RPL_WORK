note
	description: "2D grid map with the probability of occupancy for each cell."
	author: "Rusakov Andrey"
	date: "18.03.2015"

class
	OCCUPANCY_GRID_MSG

inherit
	STAMPED_MSG

create
	make_empty, make_from_pointer, make_from_values, make_from_separate

feature {NONE} -- Initialization

	make_empty
			-- Create empty `Current'.
		do
			create header.make_empty
			create info.make_empty
			create data.make_empty
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_from_values (a_header: HEADER_MSG; a_info: MAP_METADATA_MSG; a_data: ARRAY[INTEGER_8])
			-- Create `Current' with values.
		do
			header := a_header
			info := a_info
			create data.make_filled (0, 1, a_data.count)
			copy_array_data (data.area.base_address, a_data.area.base_address, a_data.count)
		end

feature -- Access

	info: MAP_METADATA_MSG
			-- Map's metadata.

	data: ARRAY[INTEGER_8]
			-- Occupancy information for each cell.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			create header.make_from_pointer (get_header_from_c (c_ptr))
			create info.make_from_pointer (get_info_from_c (c_ptr))
			create data.make_filled (0, 1, (info.width * info.height).to_integer_32)
			copy_array_data_from_c (data.area.base_address, c_ptr, info.width * info.height)
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		local
			header_ptr, info_ptr: POINTER
		do
			header_ptr := header.allocate_c_msg
			info_ptr := info.allocate_c_msg
			Result := c_msg_ptr (header_ptr, info_ptr, data.area.base_address, data.count)
			header.deallocate_c_msg (header_ptr)
			info.deallocate_c_msg (info_ptr)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"nav_msgs/OccupancyGrid.h%""
		alias
			"delete (nav_msgs::OccupancyGrid*)$a_msg_ptr;"
		end

feature {NONE} -- Externals

	copy_array_data (to_array: POINTER; from_array: POINTER; size: INTEGER)
		external
			"C++ inline"
		alias
			"memcpy ((EIF_INTEGER_8 *)$to_array, $from_array, $size * sizeof (EIF_INTEGER_8));"
		end

	get_header_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"nav_msgs/OccupancyGrid.h%""
		alias
			"return &(((nav_msgs::OccupancyGrid*)($c_ptr))->header);"
		end

	get_info_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"nav_msgs/OccupancyGrid.h%""
		alias
			"return &(((nav_msgs::OccupancyGrid*)($c_ptr))->info);"
		end

	copy_array_data_from_c (eif_array: POINTER; c_ptr: POINTER; size: NATURAL)
		external
			"C++ inline use %"nav_msgs/OccupancyGrid.h%""
		alias
			"memcpy ((EIF_INTEGER_8 *)$eif_array, (((nav_msgs::OccupancyGrid*)($c_ptr))->data.data()), $size * sizeof (EIF_INTEGER_8));"
		end

	c_msg_ptr (a_header_ptr, a_info_ptr, a_data_ptr: POINTER; a_data_size: INTEGER): POINTER
		external
			"C++ inline use %"nav_msgs/OccupancyGrid.h%""
		alias
			"[
				nav_msgs::OccupancyGrid* msg = new nav_msgs::OccupancyGrid();
				msg->header = *((std_msgs::Header*)$a_header_ptr);
				msg->info = *((nav_msgs::MapMetaData*)$a_info_ptr);
				msg->data = std::vector<int8_t>((int8_t*)$a_data_ptr, (int8_t*)$a_data_ptr + $a_data_size);
				return msg;
			]"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"nav_msgs/OccupancyGrid.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <nav_msgs::OccupancyGrid> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj, a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"nav_msgs/OccupancyGrid.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <nav_msgs::OccupancyGrid> (*((nav_msgs::OccupancyGrid*)$a_msg_ptr));"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"nav_msgs/OccupancyGrid.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<nav_msgs::OccupancyGrid, nav_msgs::OccupancyGrid::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end

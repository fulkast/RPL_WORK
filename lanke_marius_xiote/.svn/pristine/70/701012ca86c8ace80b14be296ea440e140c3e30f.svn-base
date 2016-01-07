note
	description: "Array of MARKER_MSG objects to be handled at once."
	author: "Rusakov Andrey"
	date: "01.04.2015"

class
	MARKER_ARRAY_MSG

inherit
	ROS_MESSAGE

create
	make_empty, make_from_pointer, make_with_values, make_from_separate

feature {NONE} -- Initialization.

	make_empty
			-- Create empty`Current'.
		do
			create markers.make_empty
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_markers: ARRAY[MARKER_MSG])
			-- Create `Current' with values.
		do
			markers := a_markers
		end

feature -- Access

	markers: ARRAY[MARKER_MSG]
			-- Markers.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		local
			i: INTEGER
		do
			create markers.make_filled (create {MARKER_MSG}.make_empty, 1, get_data_size_from_c (c_ptr))
			from
				i := 0
			until
				i >= markers.count
			loop
				markers[i + 1] := create {MARKER_MSG}.make_from_pointer (get_element_from_c (c_ptr, i))
				i := i + 1
			end
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		local
			marker_ptr: POINTER
			i: INTEGER
		do
			Result := c_msg_ptr
			from
				i := 1
			until
				i > markers.count
			loop
				marker_ptr := markers[i].allocate_c_msg
				c_ros_add_marker (Result, marker_ptr)
				markers[i].deallocate_c_msg (marker_ptr)
				i := i + 1
			end
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"visualization_msgs/MarkerArray.h%""
		alias
			"delete (visualization_msgs::MarkerArray*)$a_msg_ptr;"
		end

feature {NONE} -- Externals

	get_data_size_from_c (c_ptr: POINTER): INTEGER
		external
			"C++ inline use %"visualization_msgs/MarkerArray.h%""
		alias
			"return (int)(((visualization_msgs::MarkerArray*)($c_ptr))->markers.size());"
		end

	get_element_from_c (c_ptr: POINTER; a_index: INTEGER): POINTER
		external
			"C++ inline use %"visualization_msgs/MarkerArray.h%""
		alias
			"return &(((visualization_msgs::MarkerArray*)($c_ptr))->markers[$a_index]);"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"visualization_msgs/MarkerArray.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <visualization_msgs::MarkerArray> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"visualization_msgs/MarkerArray.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <visualization_msgs::MarkerArray> (*(visualization_msgs::MarkerArray*)($a_msg_ptr));"
		end

	c_msg_ptr: POINTER
		external
			"C++ inline use %"visualization_msgs/MarkerArray.h%""
		alias
			"return new visualization_msgs::MarkerArray();"
		end

	c_ros_add_marker (a_ptr, a_marker_ptr: POINTER)
		external
			"C++ inline use %"visualization_msgs/MarkerArray.h%""
		alias
			"[
				visualization_msgs::MarkerArray* ma = ((visualization_msgs::MarkerArray*)($a_ptr));
				ma->markers.push_back(*((visualization_msgs::Marker*)$a_marker_ptr));
			]"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"visualization_msgs/MarkerArray.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<visualization_msgs::MarkerArray, visualization_msgs::MarkerArray::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end

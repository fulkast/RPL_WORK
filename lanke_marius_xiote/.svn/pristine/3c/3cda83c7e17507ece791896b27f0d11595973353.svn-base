note
	description: "Marker to be visualized in ROS. TODO: Meshes and multiple points are not supported so far."
	author: "Rusakov Andrey"
	date: "27.03.2015"

class
	MARKER_MSG

inherit
	STAMPED_MSG

create
	make_empty, make_from_pointer, make_with_values, make_from_separate

feature {NONE} -- Initialization.

	make_empty
			-- Create empty`Current'.
		do
			create header.make_empty
			create pose.make_empty
			create scale.make_empty
			create color.make_empty
			create text.make_empty
			create ns.make_empty
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_header: HEADER_MSG; a_pose: POSE_MSG; a_scale: VECTOR_3D_MSG; a_color: COLOR_RGBA_MSG; a_namespace, a_text: separate STRING;
						 a_id, a_type, a_action: INTEGER; a_lifetime: REAL_64)
			-- Create `Current' with values.
		do
			header := a_header
			pose := a_pose
			scale := a_scale
			color := a_color
			create ns.make_from_separate (a_namespace)
			create text.make_from_separate (a_text)
			id := a_id
			type := a_type
			action := a_action
			lifetime := a_lifetime
		end

feature -- Constants

	type_arrow: INTEGER = 0
	type_cube: INTEGER = 1
	type_sphere: INTEGER = 2
	type_cylinder: INTEGER = 3
	type_text_view_facing: INTEGER = 9
			-- Available marker types.

	action_add_modify: INTEGER = 0
	action_delete: INTEGER = 2
	action_delete_all: INTEGER = 3
			-- Available actions on the marker.

feature -- Access

	pose: POSE_MSG
			-- Pose.

	ns: STRING_8
			-- Namespace to be used together with an id.

	id: INTEGER
			-- Id of the object for further manipulation.

	type: INTEGER
			-- ARROW=0
			-- CUBE=1
			-- SPHERE=2
			-- CYLINDER=3
			-- TEXT_VIEW_FACING=9

	action: INTEGER
			-- ADD/MODIFY=0
			-- DELETE=2
			-- DELETEALL=3

	scale: VECTOR_3D_MSG
			-- Scale for each dimension (default is [1.0;1.0;1.0]).

	color: COLOR_RGBA_MSG
			-- RGBA components of the color; each component is between 0.0 and 1.0.

	lifetime: REAL_64
			-- Time (in seconds) before the marker is automatically deleted.

	text: STRING_8
			-- Label text for text-related markers.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			create header.make_from_pointer (get_header_from_c (c_ptr))
			create pose.make_from_pointer (get_pose_from_c (c_ptr))
			create scale.make_from_pointer (get_scale_from_c (c_ptr))
			create color.make_from_pointer (get_color_from_c (c_ptr))
			ns := get_ns_from_c (c_ptr)
			text := get_text_from_c (c_ptr)
			id := get_id_from_c (c_ptr)
			type := get_type_from_c (c_ptr)
			action := get_action_from_c (c_ptr)
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		local
			n_space, txt: C_STRING
			header_ptr, pose_ptr, scale_ptr, color_ptr: POINTER
		do
			create n_space.make (ns)
			create txt.make (text)

			header_ptr := header.allocate_c_msg
			pose_ptr := pose.allocate_c_msg
			scale_ptr := scale.allocate_c_msg
			color_ptr := color.allocate_c_msg

			Result := c_msg_ptr (header_ptr, pose_ptr, scale_ptr, color_ptr, n_space.item, txt.item, id, type, action, lifetime)

			header.deallocate_c_msg (header_ptr)
			pose.deallocate_c_msg (pose_ptr)
			scale.deallocate_c_msg (scale_ptr)
			color.deallocate_c_msg (color_ptr)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"visualization_msgs/Marker.h%""
		alias
			"delete (visualization_msgs::Marker*)$a_msg_ptr;"
		end

feature {NONE} -- Externals

	get_header_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"visualization_msgs/Marker.h%""
		alias
			"return &(((visualization_msgs::Marker*)($c_ptr))->header);"
		end

	get_pose_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"visualization_msgs/Marker.h%""
		alias
			"return &(((visualization_msgs::Marker*)($c_ptr))->pose);"
		end

	get_scale_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"visualization_msgs/Marker.h%""
		alias
			"return &(((visualization_msgs::Marker*)($c_ptr))->scale);"
		end

	get_color_from_c (c_ptr: POINTER): POINTER
		external
			"C++ inline use %"visualization_msgs/Marker.h%""
		alias
			"return &(((visualization_msgs::Marker*)($c_ptr))->color);"
		end

	get_ns_from_c (c_ptr: POINTER): STRING_8
		external
			"C++ inline use %"visualization_msgs/Marker.h%", %"eif_plug.h%""
		alias
			"[
				std::string ns = (std::string)(((visualization_msgs::Marker*)($c_ptr))->ns);
				return eif_string ((char*)ns.c_str());
			]"
		end

	get_text_from_c (c_ptr: POINTER): STRING_8
		external
			"C++ inline use %"visualization_msgs/Marker.h%", %"eif_plug.h%""
		alias
			"[
				std::string text = (std::string)(((visualization_msgs::Marker*)($c_ptr))->text);
				return eif_string ((char*)text.c_str());
			]"
		end

	get_id_from_c (c_ptr: POINTER): INTEGER
		external
			"C++ inline use %"visualization_msgs/Marker.h%""
		alias
			"return (int32_t)(((visualization_msgs::Marker*)($c_ptr))->id);"
		end

	get_type_from_c (c_ptr: POINTER): INTEGER
		external
			"C++ inline use %"visualization_msgs/Marker.h%""
		alias
			"return (int32_t)(((visualization_msgs::Marker*)($c_ptr))->type);"
		end

	get_action_from_c (c_ptr: POINTER): INTEGER
			--
		external
			"C++ inline use %"visualization_msgs/Marker.h%""
		alias
			"return (int32_t)(((visualization_msgs::Marker*)($c_ptr))->action);"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"visualization_msgs/Marker.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <visualization_msgs::Marker> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"visualization_msgs/Marker.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <visualization_msgs::Marker> (*(visualization_msgs::Marker*)($a_msg_ptr));"
		end

	c_msg_ptr (a_header_ptr, a_pose_ptr, a_scale_ptr, a_color_ptr, a_ns, a_text: POINTER;
					a_id, a_type, a_action: INTEGER; a_lifetime: REAL_64): POINTER
		external
			"C++ inline use %"visualization_msgs/Marker.h%""
		alias
			"[
				visualization_msgs::Marker* msg = new visualization_msgs::Marker();
				msg->header = *((std_msgs::Header*)$a_header_ptr);
				msg->pose = *((geometry_msgs::Pose*)$a_pose_ptr);
				msg->scale = *((geometry_msgs::Vector3*)$a_scale_ptr);
				msg->color = *((std_msgs::ColorRGBA*)$a_color_ptr);
				msg->id = $a_id;
				msg->type = $a_type;
				msg->action = $a_action;
				msg->lifetime = ros::Duration($a_lifetime);
				std::string ns((char*)$a_ns);
				std::string text((char*)$a_text);
				msg->ns = ns;
				msg->text = text;
				return msg;
			]"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"visualization_msgs/Marker.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<visualization_msgs::Marker, visualization_msgs::Marker::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end

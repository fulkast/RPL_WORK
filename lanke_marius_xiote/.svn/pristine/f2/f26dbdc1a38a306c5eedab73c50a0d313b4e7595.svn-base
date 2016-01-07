note
	description: "Publishes a path msg of the form linked list of point messages"
	author: "Lanke Frank Tarimo	 Fu"
	date: "09.11.15"

class
	PATH_MSG_PUBLISHER

inherit
	TASK_MSG_PUBLISHERS[LIST[POINT_MSG]]

create

	make_with_attributes

feature {NONE}

	make_with_attributes(tp_name : STRING)
		do
			message_2_send := create {PATH_MSG}.make_empty
			publisher := create {ROS_PUBLISHER[PATH_MSG]}.make_with_topic (tp_name)
			publisher.advertize (1, true)
		end

feature -- Access

	update_msg(path : LIST[POINT_MSG])
		-- update path to be sent with
		local
			poses : ARRAY[POSE_STAMPED_MSG]
				-- An array of pose messages used to then generate an array of POINT_MSG				
			header: HEADER_MSG
				-- Header to the message publishes
			pose: POSE_MSG
				-- One single pose
			pose_stamped_msg : POSE_STAMPED_MSG


		i : INTEGER
			-- Iterator to go through the lists
		header_frame: STRING
			-- A critical value to have frames conform to each other on visualization
			-- interfaces such as R_VIZ
	do
		header_frame := {MAP_TOPICS}.odometry_frame
		create poses.make_filled (create {POSE_STAMPED_MSG}.make_empty, 1, path.count)


			if path.count = 0 then
				io.put_string ("NO PATH EXISTS.%N")
				-- Return when no path is given
			end

			from
				path.start
			until
				path.exhausted
			loop
				-- Iterate through to add the points in the list one path one to create a path
				i := i + 1
				header := create {HEADER_MSG}.make_now (header_frame)
				pose := create {POSE_MSG}.make_with_values (path.item, create {QUATERNION_MSG}.make_empty)
				pose_stamped_msg := create {POSE_STAMPED_MSG}.make_with_values (header, pose)
				poses.put (pose_stamped_msg, i)
				path.forth
			end
			
			message_2_send := create {PATH_MSG}.make_with_values (create {HEADER_MSG}.make_now (header_frame), poses)
				-- Update the path message being sent
			path.start
				-- Bring cursor back to the start
		end

end -- class

note
	description: "Summary description for {PATH_MSG_MAKER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PATH_MSG_PUBLISHER

inherit
	TASK_MSG_PUBLISHERS[LINKED_LIST[POINT_MSG]]

create
	make_with_attributes
feature
	make_with_attributes(tp_name : STRING)
		do
			message_2_send := create {PATH_MSG}.make_empty
			publisher := create {ROS_PUBLISHER[PATH_MSG]}.make_with_topic (tp_name)
			publisher.advertize (1, true)
		end

feature
	update_msg(path : LINKED_LIST[POINT_MSG])
	local
		poses : ARRAY[POSE_STAMPED_MSG]
		header: HEADER_MSG
		pose: POSE_MSG
		pose_stamped_msg : POSE_STAMPED_MSG
		i : INTEGER
		header_frame: STRING
	do
		header_frame := "odometry_link"
		create poses.make_filled (create {POSE_STAMPED_MSG}.make_empty, 1, path.count)
		if path.count = 0 then
			io.put_string ("NO PATH EXISTS.")
			io.put_new_line
		end
		from
			path.start
		until
			path.exhausted
		loop
			i := i + 1
			header := create {HEADER_MSG}.make_now (header_frame)
			pose := create {POSE_MSG}.make_with_values (path.item, create {QUATERNION_MSG}.make_empty)
			pose_stamped_msg := create {POSE_STAMPED_MSG}.make_with_values (header, pose)
			poses.put (pose_stamped_msg, i)
			path.forth
		end
		message_2_send := create {PATH_MSG}.make_with_values (create {HEADER_MSG}.make_now (header_frame), poses)
	end



end


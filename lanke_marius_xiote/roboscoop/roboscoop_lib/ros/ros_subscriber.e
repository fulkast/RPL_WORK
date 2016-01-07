note
	description: "Subscriber for ROS messages."
	author: "Rusakov Andrey"
	date: "13.05.2014"

class
	ROS_SUBSCRIBER [M -> ROS_MESSAGE create make_empty, make_from_pointer, make_from_separate end]

inherit
	SEPARATE_STRING_MAKER
	BARRIER

create
	make

feature {NONE} -- Initialization

	make
			-- Create `Current'.
		local
			i: INTEGER
			m: separate M
		do
			create topic.make_empty

			from
				create msg_pool.make_empty
				i := 0
			until
				msg_pool.count >= pool_size
			loop
				create m.make_empty
				msg_pool.force (m, i)
				i := i + 1
			end

			worker := c_worker
			action := agent fake_action
		end

feature -- Access

	subscribe (topic_name: separate STRING_8; an_action: separate PROCEDURE [ANY, TUPLE[separate M]])
			-- Subscribe to ROS topic `topic_name'.
			-- `an_action' callback will be called when new messages arrive.
		local
			t_name: STRING_8
			c_t_name: C_STRING
			m: M
		do
			create t_name.make_from_separate (topic_name)
			create c_t_name.make (t_name)
			create m.make_empty
			m.subscribe_to_ros (worker, c_t_name.item, Current, $callback)
			action := an_action

			create topic.make_from_string (t_name)
		end

	release_eiffel_objects_from_c
			-- Remove protection of Eiffel objects at C++ side, so GC will be able to collect them.
		do
			c_ros_release_eiffel_objects (worker)
		end

feature {NONE} -- Implementation

	topic: STRING
			-- ROS topic name to subscribe to.

	action: separate PROCEDURE [ANY, TUPLE[separate M]]
			-- Subscribed action.

	msg_pool: ARRAY[separate M]
			-- Message pool to reduce synchronization costs and SCOOP processor creation overhead.

	pool_size: INTEGER = 2
			-- Number of the elements in the pool of reused messages.

	cur_msg_idx: INTEGER
			-- Index of currenly used message.

	worker: POINTER
			-- Pointer to the C++ object.

	callback (a_ptr: POINTER)
			-- Callback function (to be called from C++).
		do
			cur_msg_idx := (cur_msg_idx + 1) \\ pool_size
			set_message (msg_pool[cur_msg_idx], a_ptr)
			call_async (action)
		end

	set_message (m: separate M; a_ptr: POINTER)
			-- Construct `m' based on C++ `a_ptr'.
		do
			m.set_from_pointer(a_ptr)
			synchronize (m)
					--important to be syncronized - otherwise can lead to memory corruption.
		end

	call_async (an_action: separate PROCEDURE [ANY, TUPLE[separate M]])
			-- Wrapper for calling `an_action' with arguments `data' separately.
		local
			args: separate TUPLE[m: separate M]
		do
			args := an_action.empty_operands
					-- Create args on the agent's processor - otherwise deadlocks.
			set_tuple_data (args, msg_pool[cur_msg_idx])
			an_action.call(args)
		end

	set_tuple_data (a_tuple: separate TUPLE[m: separate M]; ms: separate M)
			-- Put `ms' into `a_tuple'.
		do
			a_tuple.put (ms, 1)
		end

	c_worker: POINTER
			-- Corresponding C++ object.
		do
			Result := c_ros_new_worker
		end

	fake_action (mesg: separate M)
			-- Auxiliary agent for initialization in void-safety mode.
		do
		end

feature {NONE} -- Externals

	c_ros_new_worker: POINTER
		external
			"C++ inline use %"subscriber.h%""
		alias
			"return new Subscriber();"
		end

	c_ros_delete_worker (a_worker_obj: POINTER)
		external
			"C++ inline  use %"subscriber.h%""
		alias
			"delete ((Subscriber*)($a_worker_obj));"
		end

	c_ros_release_eiffel_objects (a_worker_obj: POINTER)
		external
			"C++ inline  use %"subscriber.h%""
		alias
			"((Subscriber*)($a_worker_obj))->release_eiffel_objects();"
		end
end

note
	description: "Class manages spinning while one is subscribed for ROS messages."
	author: "Rusakov Andrey"
	date: "13.05.2014"

class
	ROS_SPINNER

create
	make

feature {NONE} -- Initialization

	make
			-- Create Current.
		do
			worker := c_ros_new_worker
		end

feature -- Access

	start
			-- Start continuous loop of listening to ROS messages.
		do
			c_start (worker)
		end

	stop
			-- Exit the loop of listening to ROS messages.
		do
			c_stop (worker)
		end

feature {NONE} -- Implementation

	worker: POINTER
			-- Pointer to the C++ object.

feature {NONE} -- Externals

	c_ros_new_worker: POINTER
		external
			"C++ inline use %"spinner.h%""
		alias
			"return new Spinner();"
		end

	c_start (a_worker_obj: POINTER)
		external
			"C++ blocking inline use %"spinner.h%""
		alias
			"((Spinner*)($a_worker_obj))->start();"
		end

	c_stop (a_worker_obj: POINTER)
		external
			"C++ inline  use %"spinner.h%""
		alias
			"((Spinner*)($a_worker_obj))->stop();"
		end
end

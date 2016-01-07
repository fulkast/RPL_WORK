=== XML Tangent Bug + Path Planning + Object Recognition ===
Contributors: Xiaote, Marius, Lanke
SVN link: https://svn.inf.ethz.ch/svn/meyer/rpl2015/trunk/group/lanke_marius_xiote/
Tags: Obstacle Avoidance, PID CONTROL, Path Planning A-STAR, 3-D Spin Image, Object Recognition, Localization , Search and Rescue


This implementation performs localization and path finding in a spatial node graph, driving through way-points using a pid controller, obstacle avoidance using the tangent bug algorithm and object recognition using a correlation of 3d spin image features.

== Description ==
The localization of the robot is achieved through particle filters. The particle filters approximates a robot's state in a given map for a given set of state spaces. The approximation is done by approximating the distribution of the robot's state using sampling. The mean of the distribution is output as the predicted state of the robot.

A thorough documentation of the theory of 3D spin images may be found at: http://ieeexplore.ieee.org/stamp/stamp.jsp?arnumber=765655

In general, the task of approaching a wall while avoiding obstacles is a complex task. The algorithm implemented here is capable of reaching feasible goal points i.e. points to which an aperture exists, bigger than the size of the robot such that the robot can drive to the goal. It achieves so by running task "go_to_call" and "track_obstacles" simultaneuosly. Once an obstacle is found, the robot tracks it until a new point is available from which the distance to goal is minimal, out of the points seen so far.

The ASTAR algorithm implemented uses a grid_occupancy graph which can be parsed through a map png file using ros map publisher. The incorporation of obstacles can be done by inflating the grids for which the pixel count is over a threshold value (set in the grid graph properties).

The Algorithm works through the following states:

1. Find path using ASTAR
2. Go to goal
3. if unknown obstacle discovered go to 4
4.	I. Go to goal. If obstacle encountered, record current minimum distance to goal. go to step 		    II.
	II. Follow obstacle. If there exists a free point such that its distance to the goal is lower 			than the current recorded minimum distance, go to step III. If looped a cycle around 			obstacle: 		State 	goal not reachable
	II. Head towards the free direction until the distance to the goal is less than currently 			recorded minimum distance to goal. Switch to state II.


== Structure ==
    Hierachy
--------------------------------------------------------------------------------------------------------------------------------	   -------------------------------------------------------	
   |---------|           |--------------------------|	                      |----------|					|	   |              |------------|
   |   APP   |---------->|   Move to goal Behavior  |------------------------>|  PLANNER |					|	   |	          |Localization| 
   |---------|     |     |--------------------------|	                      |----------|					|	   |              |------------| 
		   |                                                            |						|	   |			|
		   |     |--------------------------|	       		        |						|	   |			| 
	           ----->|     Feature Behavior     |		                |						|	   |			|
   		         |--------------------------|		                |						|	   |			|
									        |						|	   |			|
									        | 						|	   |			|
									        \/						|	   |		        \/
									|----------|                     |-----------------|	|	   |		|--------------------|
								       |TANGENT_BUG|-------------------> |  Blob Detected  | --------------|---->       | Object Recognition |
									|----------|			 |-----------------|    |	   |		|--------------------|
									     |							|	   |		           |
									     |							|	   |		           |
									     | 							|	   |		           |
									     \/							|	   |		           |
		EIFFEL 					             |--------------|    					|	   |		C++        |
							             |  CONTROLLER  |						|	   |			   \/
							             |--------------|						|	   |		|--------------------|
					     			        ^       ^ 						|	   |		| Free to Proceed    |	
								       /          \                             		|	   |		|--------------------|
					  			      /            \                       			|	   |
							             /              \						|	   |
					  			    /                \  					|	   |			   
			      			    |----------------------|       |------------|				|	   |
				  	            |   	PID	   |       |   ERROR    |				|	   |
				     	            |----------------------|       |------------|				|	   |
																|	   |
 -------------------------------------------------------------------------------------------------------------------------------- 	    ------------------------------------------------------------ 
    
							
	Fig 1: Hierarchy of this implementation


== Implementation ==

Localization: Particle Filters
The particle filter implementation uses sampling of random robot states to approximate the probabilistic distribution of the robot's state in a given environment. In this implementation, the robot states are uniformly initialized across the map and are then re-sampled with replacement according to their importance. The importance here is given by the correlation score between the scanned depth points and the projected obstacles from the given particle's state.

Object Recognition: 3-D Spin Images.
3-D spin images are used as features to recognize the objects encountered in this program. To obtain the dictionary of known features is loaded by the object_recognition_node and currently has the classes:
duck, woman, fireman and man.

The Tangent Bug algorithm utilizes simultaneous agents which handle independent tasks that allow it to navigate through the task. Below are agents used in the current edition

The number references refer to the steps mentioned in the Description section.

- go
	Perform 1. i.e. Go to goal.
- follow_wall
	Perform 2. i.e. Follow obstacle
- look_for_vleave
	Check for transition condition between 2. and 3.
- transit_to_vleave_
	Perform switch from 2. to 3.
- stop_when_goal_reached
	Terminate task
- stop_when_goal_unreachable
	Perform task in 2. that states task is impossible.

== Usage ==

To run the application please peform the following procedures:
1) First load the map of the environment in the terminal, this allows the program to perform localization and thereafter path planning. 
2) Having loaded the map, the search and rescue program can be started by running the search and rescue launch file through ros_launch.
3) Enter input parameters of the execution of the thymio_app. This is should be the file path to the app parameters which in the provided repository is located in parameter_files folder.
4) Run the separate object recognition node in catkin workspace using the command : "rosrun object_recognition_node object_recognition (path to pcd reference point clouds)"
5) Run the separate tf frame converter also in the catkin workspace using the command : "rosrun objection_recognition_node tf_broadcaster"
6) Run the mapserver for the given task.
7) Make sure the corresponding task parameters are set properly. 
8) Run Rviz through the command : "rviz"
9) Connect to the controlled robot agent either wirelessly or by wire.
10) Run the thymio_app.

/Parameters
The parameters play a huge role of defining the properties of the tasks as well as the algorithms which are used to achieve them. The files used to access the parameters can be found in the parameter_files_folder. Figure one shows the order in which these parameters are parsed. The access of a lower level file is achieved by entering its filename in the properties file of its parent. For example, the controller parameters file's name has to be placed in the parameters file of the planner. The parsing here is done using a hash table in which a string is associated to a corresponding setter that assigns a value to a parameter classes' variables once a certain string is encountered. 

/Publishers
A deferred publishing class has been created which allows for communication of task behaviors through the ROS framework. For instance, it is possible to view the results of the path planned through RVIZ by simply creating a publisher specific to the form that the message is represented in.

/Setup
Communication between the processing unit and the robot is carried out through ROS nodes and messages. Online computation is also possible by augmenting a processing unit to the robot which communicates through the micro USB port. The remote node can then be accessed through the use of a wireless router.

/Initialization
At running of the cluster "App" a command line prompt is displayed which requests the parameters file with all the task and system parameters. For this implementation, PID and lag controller specific parameters are loaded. These values determine the heading control as well as the corner steering behaviors of the robot.

For an example file used for THYMIO_BOT ANNA_AKHMATOVA from the XML group please refer to "app_parameters.txt"


== Frequently Asked Questions ==

= What is the delay_tau_value? =

The delay_tau_value is used in allowing the robot to turn through a corner in a smooth motion. It is a value in seconds and determines how many seconds the robot stalls before turning at a corner.

= How does theta know that it turned through a full cycle? =

The theta parameter from the odometry signal makes it possible to determine if the robot has fully looped around an obstacle by one cycle. It is an angular measure in radians and a value of 2PI is equivalent to the robot having turned one full cycle; Where PI is the transcedental number ~3.14159265. A robot knows that it has turned through a cycle, if its current odometry matches the point where the wall intersection was first set and its yaw angle has incremented by roughly 2PI. 

= My robot keeps hitting the wall during a turn. What can I do? =

The value delay_tau_value is a possible fix. Increase this value to allow the robot to stall longer before turning. This way it draws through a great radius before getting back to the obstacle.

= My robot turns but it does not seem fast enough. What should I do?  = 

The value turning_rate can be used to increase the rate at which the robot turns. A higher value yields shorter turning radii.







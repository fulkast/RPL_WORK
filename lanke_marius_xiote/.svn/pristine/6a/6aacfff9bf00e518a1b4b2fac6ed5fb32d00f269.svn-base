=== XML Tangent Bug  ===
Contributors: Xiaote, Marius, Lanke
SVN link: https://svn.inf.ethz.ch/svn/meyer/rpl2015/trunk/group/lanke_marius_xiote/
Tags: Obstacle Avoidance, PID CONTROL


This Tangent Bug algorithm implementation maneuvers a robot from an initial position to final goal while avoiding obstacles.

== Description ==

In general, the task of approaching a wall while avoiding obstacles is a complex task. The algorithm implemented here is capable of reaching feasible goal points i.e. points to which an aperture exists, bigger than the size of the robot such that the robot can drive to the goal. It achieves so by running task "go_to_call" and "track_obstacles" simultaneuosly. Once an obstacle is found, the robot tracks it until a new point is available from which the distance to goal is minimal, out of the points seen so far.

The Algorithm works through the following states:

1. Go to goal. If obstacle encountered, record current minimum distance to goal. go to step 2.
2. Follow obstacle. If there exists a free point such that its distance to the goal is lower than the current recorded minimum distance, go to step 3. If looped a cycle around obstacle: State goal not reachable
3. Head towards the free direction until the distance to the goal is less than currently recorded minimum distance to goal. Switch to state 1.

== Structure ==
    Hierachy

   |---------|           |----------|	       |----------|
   |   APP   |---------->|   ROBOT  |--------->|  PLANNER |
   |---------|           |----------|	       |----------|	      
						     |
						     |
						     | 
						     \/
                                             |--------------|
                                             |  CONTROLLER  |
                                             |--------------|
                     			        ^        ^ 
					       /          \                             
                  			      /            \                            
                                             /              \
                  			    /                \  										
      			    |----------------------|       |------------|
          	            |  FEATURE_CONTROLLER  |       |   ERROR    |
             	            |----------------------|       |------------|

== Implementation ==

The Tangent Bug algorithm utilizes simultaneous agents which handle independent tasks that allow it to navigate through the task. Below are agents used in the current edition

The number references refer to the steps mentioned in the = Description = section.

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

/Setup
Communication between the processing unit and the robot is carried out through ROS nodes and messages. Online computation is also possible by augmenting a processing unit to the robot which communicates through the micro USB port. The remote node can then be accessed through the use of a wireless router.

/Initialization
At running of the cluster "App" a command line prompt is displayed which requests the parameters file with all the task and system parameters. For this implementation, PID and lag controller specific parameters are loaded. These values determine the heading control as well as the corner steering behaviors of the robot.

For an example file used for THYMIO_BOT ANNA_AKHMATOVA from the XML group please refer to "parameters.txt"


== Frequently Asked Questions ==

= What is the delay_tau_value? =

The delay_tau_value is used in allowing the robot to turn through a corner in a smooth motion. It is a value in seconds and determines how many seconds the robot stalls before turning at a corner.

= How does theta know that it turned through a full cycle? =

The theta parameter from the odometry signal makes it possible to determine if the robot has fully looped around an obstacle by one cycle. It is an angular measure in radians and a value of 2PI is equivalent to the robot having turned one full cycle; Where PI is the transcedental number ~3.14159265. A robot knows that it has turned through a cycle, if its current odometry matches the point where the wall intersection was first set and its yaw angle has incremented by roughly 2PI. 

= My robot keeps hitting the wall during a turn. What can I do? =

The value delay_tau_value is a possible fix. Increase this value to allow the robot to stall longer before turning. This way it draws through a great radius before getting back to the obstacle.

= My robot turns but it does not seem fast enough. What should I do?  = 

The value turning_rate can be used to increase the rate at which the robot turns. A higher value yields shorter turning radii.







cmake_minimum_required(VERSION 2.8.3)
project(roboscoop_ros)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  tf
  std_msgs
  geometry_msgs
  nav_msgs
  message_generation
)

find_package(Boost REQUIRED COMPONENTS system)

# Generate messages in the 'msg' folder
add_message_files(
   DIRECTORY
   msg
 )

generate_messages(DEPENDENCIES std_msgs geometry_msgs nav_msgs)

set(CMAKE_CXX_FLAGS "-std=c++0x ${CMAKE_CXX_FLAGS}")

###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES roboscoop_ros
#  CATKIN_DEPENDS roscpp rospy tf std_msgs message_runtime
  DEPENDS system_lib
)

###########
## Build ##
###########

include_directories(
  ${catkin_INCLUDE_DIRS}
)


cmake_minimum_required(VERSION 2.8.3)
project(object_recognition)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  tf
)
find_package(PCL REQUIRED)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Ofast ")

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
	INCLUDE_DIRS include
	LIBRARIES object_recognition
	CATKIN_DEPENDS roscpp
	DEPENDS system_lib
)

###########
## Build ##
###########

include_directories(include)
include_directories(
  ${PCL_INCLUDE_DIRS}
  ${catkin_INCLUDE_DIRS}
)
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

set(CMAKE_CXX_FLAGS "-g ${CMAKE_CXX_FLAGS}")

add_executable(object_recognition_node
	src/parameters.cpp
	src/object_recognition_node.cpp)
add_executable(tf_broadcaster src/tf_broadcaster.cpp)

target_link_libraries(object_recognition_node
  ${PCL_LIBRARIES}
  ${catkin_LIBRARIES}
)
target_link_libraries(tf_broadcaster ${catkin_LIBRARIES})
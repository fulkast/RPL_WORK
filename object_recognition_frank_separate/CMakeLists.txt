cmake_minimum_required(VERSION 2.8.3)
project(object_recognition)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=gnu++11 -Ofast")

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  sensor_msgs
  pcl_conversions
  pcl_ros
)

## System dependencies are found with CMake's conventions
# find_package(Boost REQUIRED COMPONENTS system)




###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
# include_directories(include)
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${roscpp_INCLUDE_DIRS}
  ${PCL_INCLUDE_DIRS}
)


#link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

## Declare a C++ executable
 add_executable(object_recognition_node src/main.cpp include/Point_Cloud/Cloud_Filter.cpp include/Point_Cloud/Cloud_Filter.h include/Point_Cloud/publisher.cpp include/Point_Cloud/publisher.h include/Point_Cloud/Spin_Image_Extraction.cpp include/Point_Cloud/Spin_Image_Extraction.h include/Point_Cloud/Load_From_PCD.cpp include/Point_Cloud/Load_From_PCD.h include/object_recognition/Object_Recognition.cpp include/object_recognition/Object_Recognition.h include/common.h )

## Add cmake target dependencies of the executable
## same as for the library above
# add_dependencies(object_recognition_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
target_link_libraries(object_recognition_node
  ${catkin_LIBRARIES}
  ${roslib_LIBRARIES}
  ${PCL_LIBRARIES}
  libvtkCommon.so
  libvtkFiltering.so
)



#声明cmake最低所需的版本
cmake_minimum_required( VERSION 2.8.3 )

#声明一个工程
project( Exmaple_Code_Project )

#使用c++11进行编译
add_compile_options(-std=c++11)

list( APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake )

#ros库添加
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  geometry_msgs
  sensor_msgs
  std_msgs
  tf
)

#Eiegn库添加，由于Eigen库是头文件组成的，也可以直接在include里面添加
find_package(Eigen3 REQUIRED)

#ceres库
find_package(Ceres REQUIRED)

#g2o库
find_package(G2O REQUIRED)

#Cholmod-一个稀疏矩阵分解库
find_package( Cholmod )

#包含头文件
include_directories(
	inc
	${catkin_INCLUDE_DIRS}
	${CHOLMOD_INCLUDE_DIR} 
	# /usr/include/eigen3
)

#生成库
# add_library( Exmaple_Code_Project src/example_code.cpp )
add_library( ${PROJECT_NAME} SHARED src/example_code.cpp )

target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES} )

#添加一个可执行文件
Add_executable( ${PROJECT_NAME}_Node src/example_code.cpp )

#find_package直接找glog找不到，这里link过去
target_link_libraries( ${PROJECT_NAME}_Node 
				glog
				${CERES_LIBRARIES}
				g2o_core g2o_types_slam3d g2o_solver_csparse g2o_stuff g2o_csparse_extension g2o_types_sba
				${CHOLMOD_LIBRARIES}
				)
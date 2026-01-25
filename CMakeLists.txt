cmake_minimum_required(VERSION 3.29.0)
project(MyProject VERSION 0.0.1 
    LANGUAGES CXX
    DESCRIPTION "A sample CMake project"
    #删除.git
    HOMEPAGE_URL "https://github.com/yoyo980/cmake_planning_demo" 
)
set(CMAKE_CXX_STANDARD 17)

#设置 可执行文件、动态文件、静态文件 输出路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

#自己定义一个宏，存放一些路径
set(PROCESS_DIR ${PROJECT_SOURCE_DIR}/src/process)
set(PNC_MAP_DIR ${PROJECT_SOURCE_DIR}/src/pnc_map)
set(SHOW_RESULT_DIR ${PROJECT_SOURCE_DIR}/src/show_result)

#三方库（这么写就是不行，不知道为什么）
set(EIGEN3_INCLUDE_DIR "C:/D/eigen-3.4.0")
list(APPEND CMAKE_MODULE_PATH "${EIGEN3_INCLUDE_DIR}/cmake")
message("CMAKE_MODULE_PATH= ${CMAKE_MODULE_PATH}")


find_package(Eigen3 3.4 REQUIRED)
if(TARGET Eigen3::Eigen)
    message(STATUS "****** Successfully found Eigen3 3.4 ******")
endif()

#添加子目录
add_subdirectory(src)

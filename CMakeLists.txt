cmake_minimum_required(VERSION 3.29.0)
project(MyProject VERSION 0.0.1 
    LANGUAGES CXX
    DESCRIPTION "A sample CMake project"
    HOMEPAGE_URL "https://github.com/yoyo980/cmake_planning_demo"#删除.git
)
set(CMAKE_CXX_STANDARD 17)

#设置 可执行文件、动态文件、静态文件 输出路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

#自己定义一个宏，存放一些路径
set(PROCESS_DIR ${PROJECT_SOURCE_DIR}/src/process)
set(PNC_MAP_DIR ${PROJECT_SOURCE_DIR}/src/pnc_map)

#添加子目录
add_subdirectory(src)

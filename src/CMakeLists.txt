
#声明工程名称
project(planning_main)

#添加子文件
add_subdirectory(pnc_map)
add_subdirectory(process)

#添加可执行文件
add_executable(${PROJECT_NAME} planning_main.cpp)

#可执行文件 指定搜索头文件目录
target_include_directories(${PROJECT_NAME} PUBLIC
    ${PROCESS_DIR}
    ${PNC_MAP_DIR}
)

#链接动态库
target_link_libraries(${PROJECT_NAME} PUBLIC
    process
    pnc_map
)
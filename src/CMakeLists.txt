
#声明工程名称
project(planning_main)

#添加子文件
add_subdirectory(pnc_map)
add_subdirectory(process)
add_subdirectory(show_result)

#添加可执行文件
add_executable(${PROJECT_NAME} planning_main.cpp)

#可执行文件 指定搜索头文件目录
target_include_directories(${PROJECT_NAME} PUBLIC
    ${PROCESS_DIR}
)
#链接动态库
target_link_libraries(${PROJECT_NAME} PUBLIC
    process
)

#可执行文件 指定搜索头文件目录
target_include_directories(${PROJECT_NAME} PUBLIC
    ${SHOW_RESULT_DIR}
)
#链接动态库
target_link_libraries(${PROJECT_NAME} PUBLIC
    show_result
)
project(map_test)

add_executable(${PROJECT_NAME} map_test.cpp)

#添加头文件搜索路径
target_include_directories(${PROJECT_NAME} 
    PUBLIC 
    ${PNC_MAP_DIR}
)
#链接库
target_link_libraries(${PROJECT_NAME}
    PUBLIC
    pnc_map
)

add_test(NAME map_info_test
    COMMAND ${PROJECT_NAME}
)
project(process)

#生成动态库
add_library(${PROJECT_NAME} 
    SHARED
    process.cpp
)


#这个动态库的 头文件 包含目录
target_include_directories(${PROJECT_NAME} 
    PUBLIC
    ${PNC_MAP_DIR}
)

#链接pnc_map动态库
target_link_libraries(${PROJECT_NAME} PUBLIC
    pnc_map
)
#链接eigen库
target_link_libraries(${PROJECT_NAME} PUBLIC
    Eigen3::Eigen
)
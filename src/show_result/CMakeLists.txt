#创建动态库
project(show_result)

#生成动态库
add_library(${PROJECT_NAME} 
    SHARED
    show_result.cpp
)

#添加头文件目录
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${PROCESS_DIR}
)

#链接库
target_link_libraries(${PROJECT_NAME} 
    PUBLIC
    process
)

target_link_libraries(${PROJECT_NAME} 
    PUBLIC
    easyx
)
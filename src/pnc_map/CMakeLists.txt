#项目名称
project(pnc_map)

#生成动态库
add_library(${PROJECT_NAME} 
    SHARED
    pnc_map.cpp
)
#这个动态库的 头文件 包含目录
# target_include_directories(${PROJECT_NAME}
#     PUBLIC
#     ${PNC_MAP_DIR}
# )
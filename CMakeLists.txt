cmake_minimum_required(VERSION 3.28)
project(C_Learn C)

set(CMAKE_C_STANDARD 99)

#add_executable(C_Learn main.c
#)

# 获取项目根目录下所有的 .cpp 文件
file(GLOB CPP_FILES "${CMAKE_SOURCE_DIR}/*.cpp")

# 遍历每个文件，检查是否包含 main 函数，并创建对应的 target
foreach(CPP_FILE ${CPP_FILES})
    file(READ ${CPP_FILE} FILE_CONTENTS)
    if(FILE_CONTENTS MATCHES "int[ ]+main[ ]*\\(")
        get_filename_component(FILE_NAME ${CPP_FILE} NAME_WE)
        add_executable(${FILE_NAME} ${CPP_FILE})
    endif()
endforeach()
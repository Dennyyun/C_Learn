cmake_minimum_required(VERSION 3.28)
project(C_Learn C)

set(CMAKE_C_STANDARD 99)

#add_executable(C_Learn main.c
#)

# 设置源文件目录路径
set(SOURCE_DIR "E:/@DevCode/C_Learn/Lib")

# 获取项目根目录下所有的 .cpp 文件
file(GLOB ROOT_CPP_FILES "${CMAKE_SOURCE_DIR}/*.cpp")

# 获取源文件目录下所有的 .cpp 文件
file(GLOB CPP_FILES "${SOURCE_DIR}/*.cpp")

# 合并两个文件列表
list(APPEND CPP_FILES ${ROOT_CPP_FILES})

# 遍历每个文件，检查是否包含 main 函数，并创建对应的 target
foreach(CPP_FILE ${CPP_FILES})
    file(READ ${CPP_FILE} FILE_CONTENTS)
    if(FILE_CONTENTS MATCHES "int[ ]+main[ ]*\\(")
        get_filename_component(FILE_NAME ${CPP_FILE} NAME_WE)
        add_executable(${FILE_NAME} ${CPP_FILE})
    endif()
endforeach()
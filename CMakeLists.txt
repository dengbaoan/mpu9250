cmake_minimum_required(VERSION 2.8)

project(MPU9250)

SET(CMAKE_BUILD_TYPE "Debug")

# 查找当前目录下的所有源文件,并将名称保存到 DIR_SRCS 变量.(非迭代)
aux_source_directory(. DIR_SRCS)

add_executable(${PROJECT_NAME} ${DIR_SRCS})

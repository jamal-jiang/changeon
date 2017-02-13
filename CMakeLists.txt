cmake_minimum_required(VERSION 3.5)
project(luoxuan_redis)

file(GLOB SOURCE_FILES_1 ./main.c)
file(GLOB SOURCE_FILES_2 ./common/*.c)
include_directories("./include")
add_executable(luoxuan_redis ${SOURCE_FILES_1} ${SOURCE_FILES_2})
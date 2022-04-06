#cmake_minimum_required(VERSION 3.21)
#project(untitled C)
#
#set(CMAKE_C_STANDARD 11)
#
#add_executable(untitled 01data_type.c 02data_type_char.c)
#add_executable(P1 02data_type_char.c)
#cmake_minimum_required(VERSION 3.10.2)
#
#get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
#string(REPLACE " " "_" ProjectId ${ProjectId})
#project(${ProjectId} C)
#
#set(CMAKE_C_STANDARD 11)
#
#file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
#foreach(file ${files})
#    get_filename_component(name ${file} NAME)
#    add_executable(${name} ${file} a1.c)
#endforeach()
cmake_minimum_required(VERSION 3.10.2)

get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})
project(${ProjectId} C)

set(CMAKE_C_STANDARD 11)

file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
foreach(file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file} a1.c)
endforeach()
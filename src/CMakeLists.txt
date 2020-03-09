cmake_minimum_required(VERSION 3.14)

include_directories(
    ${CMAKE_INCLUDE_PATH}
)
add_library(ArrayList ${CMAKE_CURRENT_LIST_DIR}/ArrayList.cpp)
add_library(LinkedList ${CMAKE_CURRENT_LIST_DIR}/LinkedList.cpp)
add_library(Sort ${CMAKE_CURRENT_LIST_DIR}/Sort.cpp)

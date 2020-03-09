cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_FLAGS "-Wall -pedantic -O0")

include_directories("${CMAKE_INCLUDE_PATH}")

add_executable(ArrayListTest ArrayListTest.cpp)

target_link_libraries(ArrayListTest PUBLIC gtest_main ArrayList ${GTEST_LIBRARIES} pthread)

add_test(
    NAME ArrayListTest
    COMMAND ArrayListTest
)

add_executable(LinkedListTest LinkedListTest.cpp)
target_link_libraries(LinkedListTest PUBLIC gtest_main LinkedList ${GTEST_LIBRARIES} pthread)

add_test(
    NAME LinkedListTest
    COMMAND LinkedListTest
)


add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/sort)
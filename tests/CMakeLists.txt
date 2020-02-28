cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra -pedantic")

include_directories("${CMAKE_INCLUDE_PATH}")

add_executable(ArrayListTest ArrayListTest.cpp)

target_link_libraries(ArrayListTest PUBLIC gtest_main ArrayList ${GTEST_LIBRARIES} pthread)

add_test(
    NAME ArrayListTest
    COMMAND ArrayListTest
)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/sort)
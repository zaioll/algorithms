cmake_minimum_required(VERSION 3.14)

include_directories("${CMAKE_INCLUDE_PATH}/sort")

add_executable(SortTest InsertSortTest.cpp BubbleSortTest.cpp)

target_link_libraries(SortTest PUBLIC gtest_main Sort ${GTEST_LIBRARIES} pthread)

add_test(
    NAME InsertSortTest
    COMMAND InsertSortTest
)

add_test(
    NAME BubbleSortTest
    COMMAND BubbleSortTest
)
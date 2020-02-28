#include <gtest/gtest.h>
#include "ArrayList.hpp"

using Zaioll::ArrayList;

TEST(ArrayList, Create)
{
    ASSERT_NO_FATAL_FAILURE(ArrayList<int> list(10));
}
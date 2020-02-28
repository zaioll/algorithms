#include <gtest/gtest.h>
#include "ArrayList.hpp"

using Zaioll::ArrayList;

TEST(ArrayList, Create)
{
    ASSERT_NO_FATAL_FAILURE(ArrayList<int> list(10));
}

TEST(ArrayList, InsertEnd)
{
    ArrayList<int> list(10);
    ASSERT_TRUE(list.insertEnd(1));
}

TEST(ArrayList, InsertAtPosition)
{
    ArrayList<int> list(10);
    list.insertEnd(1);
    list.insertEnd(2);
    list.insertEnd(4);

    ASSERT_TRUE(list.insertAt(3, 2));
    ASSERT_EQ(3, list.retrieveAt(3));
}

TEST(ArrayList, RemoveAtInexistentPosition)
{
    ArrayList<int> list(10);

    ASSERT_FALSE(list.removeAt(1));
}

TEST(ArrayList, RemoveAtValidPosition)
{
    ArrayList<int> list(10);
    list.insertEnd(1);
    list.insertEnd(2);

    ASSERT_TRUE(list.removeAt(1));
}

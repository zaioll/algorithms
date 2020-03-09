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

TEST(ArrayList, TestEqualsOperator)
{
    ArrayList<int> list(1);
    list.insertEnd(1);

    ArrayList<int> list_1(1);
    list_1.insertEnd(1);

    ASSERT_TRUE(list == list_1);
}

TEST(ArrayList, TestAssignmentOperator)
{
    ArrayList<int> list(1);
    list.insertEnd(1);

    ArrayList<int> list_1 = list;

    ASSERT_EQ(1, list_1.getSize());
}
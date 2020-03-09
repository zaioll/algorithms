#include <gtest/gtest.h>
#include "LinkedList.hpp"

using Zaioll::LinkedList;

TEST(LinkedList, Create)
{
    LinkedList<int> list;
    ASSERT_EQ(0, list.getLength());
}

TEST(LinkedList, InsertAtFront)
{
    LinkedList<int> list;
    ASSERT_TRUE(list.insertAtFront(12));
    ASSERT_TRUE(list.insertAtFront(12));
}
#include <gtest/gtest.h>

extern "C"
{
#include "rectangle.h"
}

TEST(RectangleTest, CreateRectangleTest)
{
  rectangle_t rect = rectangle_create();
}

TEST(RectangleTest, SetRectangleTest)
{
  rectangle_t rect = rectangle_create();
  rectangle_set(rect, 10, 20);
  EXPECT_EQ(rectangle_get_area(rect), 200);
}
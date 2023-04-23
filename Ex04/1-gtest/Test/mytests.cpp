#include <gtest/gtest.h>

extern "C"
{
#include "calc.h"
}

TEST(calc, Add)
{
  EXPECT_EQ(calc_add(2, 3), 5);
  EXPECT_EQ(calc_add(0, 0), 0);
  EXPECT_EQ(calc_add(-2, 3), 1);
}

TEST(calc, Subtract)
{
  EXPECT_EQ(calc_subtract(5, 3), 2);
  EXPECT_EQ(calc_subtract(0, 0), 0);
  EXPECT_EQ(calc_subtract(-2, 3), -5);
}

TEST(calc, Multiply)
{
  EXPECT_EQ(calc_multiply(2, 3), 6);
  EXPECT_EQ(calc_multiply(0, 0), 0);
  EXPECT_EQ(calc_multiply(-2, 3), -6);
}

TEST(calc, Divide)
{
  EXPECT_EQ(calc_divide(6, 3), 2);
  EXPECT_EQ(calc_divide(3, 0), INFINITY);
  EXPECT_EQ(calc_divide(-3, 0), -INFINITY);
  EXPECT_EQ(calc_divide(-6, 3), -2);
}

// implement tests for square root, and power of (a^b), and factorial (5! = 5*4*3*2*1=120. Also implement the code so the tests are passed.

TEST(calc, SquareRoot)
{
  EXPECT_EQ(calc_square_root(4), 2);
  EXPECT_EQ(calc_square_root(0), 0);
}

TEST(calc, PowerOf)
{
  EXPECT_EQ(calc_power_of(2, 3), 8);
  EXPECT_EQ(calc_power_of(0, 0), 1);
  EXPECT_EQ(calc_power_of(0, 3), 0);
  EXPECT_EQ(calc_power_of(2, 0), 1);
  EXPECT_EQ(calc_power_of(-2, 3), -8);
}

TEST(calc, Factorial)
{
  EXPECT_EQ(calc_factorial(5), 120);
  EXPECT_EQ(calc_factorial(0), 1);
}
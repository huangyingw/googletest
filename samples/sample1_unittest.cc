#include "sample1.h"
#include "gtest/gtest.h"

TEST(FactorialTest, Negative) {
 EXPECT_EQ(1, Factorial(-5));
  EXPECT_EQ(1, Factorial(-1));
  EXPECT_TRUE(Factorial(-10) > 0);
}
TEST(Factorial, NonNegative) {
 EXPECT_EQ(1, Factorial(-5));
  EXPECT_EQ(1, Factorial(-1));
  EXPECT_TRUE(Factorial(-10) > 0);
}

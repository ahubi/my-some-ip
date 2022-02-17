#include <gtest/gtest.h>

int main(int argc, char** argv) {
  // Demonstrate some basic assertions.
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
TEST(HelloTest, BasicAssertions) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}

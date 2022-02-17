#include <gtest/gtest.h>
#include "../src/ApplicationFabric/LinuxApplicationFabric.h"


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
TEST(LinuxApplicationFabric, BasicAssertions) {
    LinuxApplicationFabric linuxAppFabric;
    IApplication* app = linuxAppFabric.createApplication();
    // Expect two strings not to be equal.
    EXPECT_NE(app, nullptr);
}

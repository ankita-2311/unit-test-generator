#include <gtest/gtest.h>
#include <limits>  // For INT_MAX and INT_MIN

int add(int a, int b);  // Function declaration

// Tests for the 'add' function.
TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(10, 20), 30);
}

TEST(AddTest, NegativeNumbers) {
    EXPECT_EQ(add(-1, -1), -2);
    EXPECT_EQ(add(-10, -5), -15);
}

TEST(AddTest, MixedSigns) {
    EXPECT_EQ(add(-5, 5), 0);
    EXPECT_EQ(add(7, -3), 4);
}

TEST(AddTest, ZeroHandling) {
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(0, 10), 10);
    EXPECT_EQ(add(-10, 0), -10);
}

TEST(AddTest, BoundaryValues) {
    EXPECT_EQ(add(std::numeric_limits<int>::max(), 0), std::numeric_limits<int>::max());
    EXPECT_EQ(add(std::numeric_limits<int>::min(), 0), std::numeric_limits<int>::min());
    // Note: Don't add INT_MAX + 1 or INT_MIN - 1 due to overflow.
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

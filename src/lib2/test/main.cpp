#include <gtest/gtest.h>

#include "lib2.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    auto result = RUN_ALL_TESTS();

    return result;
}

TEST(Lib2Test, Lib2)
{
    EXPECT_EQ(lib2(), 2);
}

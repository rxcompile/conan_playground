#include <gtest/gtest.h>

#include "lib1.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    auto result = RUN_ALL_TESTS();

    return result;
}

TEST(Lib1Test, Lib1)
{
    EXPECT_EQ(lib1(), 1);
}

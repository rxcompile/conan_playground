#include <gtest/gtest.h>

#include "lib3.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    auto result = RUN_ALL_TESTS();

    return result;
}

TEST(Lib3Test, Lib3)
{
    EXPECT_EQ(lib3(), 3);
}

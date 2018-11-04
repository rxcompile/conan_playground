#include <gtest/gtest.h>

#include "lib1.h"
#include "lib2.h"
#include "lib3.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    auto result = RUN_ALL_TESTS();

    return result;
}

TEST(LinkageOfDependentLibraries, Linkage)
{
    EXPECT_EQ(lib1() + lib2() + lib3(), 6);
}

TEST(Lib1Test, Linkage)
{
    EXPECT_EQ(lib1(), 1);
}

TEST(Lib2Test, Linkage)
{
    EXPECT_EQ(lib2(), 2);
}

TEST(Lib3Test, Linkage)
{
    EXPECT_EQ(lib3(), 3);
}
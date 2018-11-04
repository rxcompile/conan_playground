#include <gtest/gtest.h>

#include "lib1.h"
#include "lib2.h"
#include "lib3.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(LinkageOfDependentLibraries, Linkage)
{
    EXPECT_EQ(lib1() + lib2() + lib3(), 6);
}
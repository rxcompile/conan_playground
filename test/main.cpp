#define CATCH_CONFIG_RUNNER
#include <catch2/catch.hpp>

#include "lib1.h"
#include "lib2.h"
#include "lib3.h"

int main(int argc, char *argv[])
{
    // global setup...

    int result = Catch::Session().run(argc, argv);

    // global clean-up...

    return result;
}

TEST_CASE("Linkage of dependent libraries", "[linkage]")
{
    REQUIRE(lib1() + lib2() + lib3() == 6);
}
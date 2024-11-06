#include "0062.UniquePaths.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Unique Paths", "[uniquePaths]")
{
    Solution solution;

    SECTION("Example 1")
    {
        REQUIRE(solution.uniquePaths(3, 2) == 3);
    }
    SECTION("Example 2")
    {
        REQUIRE(solution.uniquePaths(7, 3) == 28);
    }
    SECTION("Minimum grid size")
    {
        REQUIRE(solution.uniquePaths(1, 1) == 1);
    }
    SECTION("One row only")
    {
        REQUIRE(solution.uniquePaths(1, 100) == 1);
    }
    SECTION("One column only")
    {
        REQUIRE(solution.uniquePaths(100, 1) == 1);
    }
    SECTION("Square grid")
    {
        REQUIRE(solution.uniquePaths(10, 10) == 48620);
    }
    SECTION("Medium grid")
    {
        REQUIRE(solution.uniquePaths(23, 12) == 193536720);
    }
}

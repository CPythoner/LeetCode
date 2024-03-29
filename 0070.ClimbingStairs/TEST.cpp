#include "0070.ClimbingStairs.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>

using namespace std;

TEST_CASE("Intersection of Two Arrays II", "[intersect]")
{
    Solution solution;

    SECTION("1")
    {
        REQUIRE(solution.climbStairs(2) == 2);
        REQUIRE(solution.climbStairs(3) == 3);
        REQUIRE(solution.climbStairs(4) == 5);
    }
}

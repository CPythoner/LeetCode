#include "0746.MinCostClimbingStairs.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("MinCostClimbingStairs", "[utest]")
{
    Solution solution;

    SECTION("Example 1")
    {
        std::vector<int> cost = {10, 15, 20};
        REQUIRE(solution.minCostClimbingStairs(cost) == 15);
    }
    SECTION("Example 2")
    {
        std::vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
        REQUIRE(solution.minCostClimbingStairs(cost) == 6);
    }
}

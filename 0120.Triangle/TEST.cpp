#include "0120.Triangle.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Triangle Minimum Path Sum", "[minimumTotal]")
{
    Solution solution;

    SECTION("Small triangle")
    {
        vector<vector<int>> triangle = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
        REQUIRE(solution.minimumTotal(triangle) == 11);
    }

    SECTION("Single element triangle")
    {
        vector<vector<int>> triangle = {{-10}};
        REQUIRE(solution.minimumTotal(triangle) == -10);
    }

    SECTION("Triangle with negative numbers")
    {
        vector<vector<int>> triangle = {{-1}, {3, 2}, {-3, 1, -1}};
        REQUIRE(solution.minimumTotal(triangle) == -1);
    }

    SECTION("Larger triangle")
    {
        vector<vector<int>> triangle = {{2}, {4, 3}, {6, 5, 7}, {4, 1, 8, 3}};
        REQUIRE(solution.minimumTotal(triangle) == 11);
    }

    SECTION("Mixed values triangle")
    {
        vector<vector<int>> triangle = {{2}, {3, 4}, {1, -1, -3}, {-3, 2, 1, -1}};
        REQUIRE(solution.minimumTotal(triangle) == 2);
    }
}

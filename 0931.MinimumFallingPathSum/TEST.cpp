#include "0931.MinimumFallingPathSum.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Minimum Falling Path Sum", "[minFallingPathSum]")
{
    Solution solution;

    SECTION("Example 1")
    {
        vector<vector<int>> matrix = {{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};
        REQUIRE(solution.minFallingPathSum(matrix) == 13);
    }
    SECTION("Negative numbers")
    {
        vector<vector<int>> matrix = {{-19, 57}, {-40, -5}};
        REQUIRE(solution.minFallingPathSum(matrix) == -59);
    }
    SECTION("Large values")
    {
        vector<vector<int>> matrix = {
            {100, -42, -46, -41}, {31, 97, 10, -10}, {-58, -51, 82, 89}, {51, 81, 69, -51}};
        REQUIRE(solution.minFallingPathSum(matrix) == -36);
    }
    SECTION("Square matrix")
    {
        vector<vector<int>> matrix = {{10, 10, 10}, {10, 10, 10}, {10, 10, 10}};
        REQUIRE(solution.minFallingPathSum(matrix) == 30);
    }
    SECTION("2x2 Matrix")
    {
        vector<vector<int>> matrix = {{2, 3}, {4, 5}};
        REQUIRE(solution.minFallingPathSum(matrix) == 6);
    }
    SECTION("100x100 Matrix with all elements as 100")
    {
        vector<vector<int>> matrix(100, vector<int>(100, 100));
        REQUIRE(solution.minFallingPathSum(matrix) == 10000);
    }
}

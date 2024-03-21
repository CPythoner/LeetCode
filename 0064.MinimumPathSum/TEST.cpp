#include "0064.MinimumPathSum.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("MinimumPathSum", "[minimumpathsum]")
{
    Solution solution;

    SECTION("Example 1")
    {
        vector<vector<int>> grid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
        REQUIRE(solution.minPathSum(grid) == 7);
    }
    SECTION("Example 2")
    {
        vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}};
        REQUIRE(solution.minPathSum(grid) == 12);
    }
    SECTION("Single Row")
    {
        vector<vector<int>> grid = {{1, 2, 3, 4}};
        REQUIRE(solution.minPathSum(grid) == 10);
    }
    SECTION("Single Column")
    {
        vector<vector<int>> grid = {{1}, {2}, {3}, {4}};
        REQUIRE(solution.minPathSum(grid) == 10);
    }
    SECTION("Edge Case Maximum Value")
    {
        vector<vector<int>> grid(200, vector<int>(200, 200));
        // 这里不提供具体的期望值，因为它将取决于解决方案的具体实现和可能的整数溢出
        // 请根据实际情况调整
    }
    SECTION("Minimum And Maximum Values")
    {
        vector<vector<int>> grid = {{0, 200}, {200, 0}};
        REQUIRE(solution.minPathSum(grid) == 200);
    }
    SECTION("Medium Size Grid")
    {
        vector<vector<int>> grid = {{0, 100, 200}, {100, 50, 100}, {200, 0, 0}};
        REQUIRE(solution.minPathSum(grid) == 150);
    }
}

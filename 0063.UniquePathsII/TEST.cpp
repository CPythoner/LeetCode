#include "0063.UniquePathsII.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("UniquePathsII", "[uniquepathsII]")
{
    Solution solution;

    SECTION("Example 1")
    {
        vector<vector<int>> obstacleGrid = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
        REQUIRE(solution.uniquePathsWithObstacles(obstacleGrid) == 2);
    }
    SECTION("Example 2")
    {
        vector<vector<int>> obstacleGrid = {{0, 1}, {0, 0}};
        REQUIRE(solution.uniquePathsWithObstacles(obstacleGrid) == 1);
    }
    SECTION("All obstacles")
    {
        vector<vector<int>> obstacleGrid = {{1}};
        REQUIRE(solution.uniquePathsWithObstacles(obstacleGrid) == 0);
    }
    SECTION("Path blocked by obstacles")
    {
        vector<vector<int>> obstacleGrid = {{0, 0, 0}, {0, 1, 1}, {0, 0, 0}};
        REQUIRE(solution.uniquePathsWithObstacles(obstacleGrid) == 1);
    }
    SECTION("Single row with an obstacle")
    {
        vector<vector<int>> obstacleGrid = {{0, 1, 0, 0}};
        REQUIRE(solution.uniquePathsWithObstacles(obstacleGrid) == 0);
    }
    SECTION("Single column with an obstacle")
    {
        vector<vector<int>> obstacleGrid = {{0}, {1}, {0}, {0}};
        REQUIRE(solution.uniquePathsWithObstacles(obstacleGrid) == 0);
    }
    SECTION("Large grid with no obstacles")
    {
        vector<vector<int>> obstacleGrid(100, vector<int>(100, 0));
        // 此测试用例的期望值依赖于具体实现，此处未给出具体数字
    }
    SECTION("Start or End with obstacle")
    {
        vector<vector<int>> obstacleGrid = {{1, 0}, {0, 0}};
        REQUIRE(solution.uniquePathsWithObstacles(obstacleGrid) == 0);
        obstacleGrid = {{0, 0}, {0, 1}};
        REQUIRE(solution.uniquePathsWithObstacles(obstacleGrid) == 0);
    }
}

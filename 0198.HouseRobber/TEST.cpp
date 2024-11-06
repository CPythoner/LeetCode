#include "0198.HouseRobber.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("House Robber", "[rob]")
{
    Solution solution;  // 实例化 Solution 对象
    SECTION("Example 1")
    {
        std::vector<int> nums = {1, 2, 3, 1};
        REQUIRE(solution.rob(nums) == 4);
    }
    SECTION("Example 2")
    {
        std::vector<int> nums = {2, 7, 9, 3, 1};
        REQUIRE(solution.rob(nums) == 12);
    }
    SECTION("Single house")
    {
        std::vector<int> nums = {5};
        REQUIRE(solution.rob(nums) == 5);
    }
    SECTION("Two houses, choose the larger one")
    {
        std::vector<int> nums = {2, 3};
        REQUIRE(solution.rob(nums) == 3);
    }
    SECTION("All houses with the same amount")
    {
        std::vector<int> nums(5, 100);
        REQUIRE(solution.rob(nums) == 300);
    }
    SECTION("Increasing amounts within constraints")
    {
        std::vector<int> nums = {10, 20, 30, 40, 50};
        REQUIRE(solution.rob(nums) == 90);
    }
    SECTION("Decreasing amounts within constraints")
    {
        std::vector<int> nums = {50, 40, 30, 20, 10};
        REQUIRE(solution.rob(nums) == 90);
    }
    SECTION("Alternating high and low amounts within constraints")
    {
        std::vector<int> nums = {100, 1, 1, 100, 1, 1, 100, 1, 1, 100};
        REQUIRE(solution.rob(nums) == 400);
    }
    SECTION("Large numbers with a zero in between")
    {
        std::vector<int> nums = {200, 300, 0, 300, 200};
        REQUIRE(solution.rob(nums) == 600);
    }
}

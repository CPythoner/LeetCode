#include "0740.DeleteAndEarn.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Delete and Earn", "[deleteAndEarn]")
{
    Solution solution;
    SECTION("Example 1")
    {
        std::vector<int> nums = {3, 4, 2};
        REQUIRE(solution.deleteAndEarn(nums) == 6);
    }
    SECTION("Example 2")
    {
        std::vector<int> nums = {2, 2, 3, 3, 3, 4};
        REQUIRE(solution.deleteAndEarn(nums) == 9);
    }
    SECTION("All elements are the same")
    {
        std::vector<int> nums = {10, 10, 10};
        REQUIRE(solution.deleteAndEarn(nums) == 30);
    }
    SECTION("Non-adjacent large elements")
    {
        std::vector<int> nums = {1, 2, 3, 100};
        REQUIRE(solution.deleteAndEarn(nums) == 104);
    }
    SECTION("Sequential elements")
    {
        std::vector<int> nums = {3, 4, 5};
        REQUIRE(solution.deleteAndEarn(nums) == 8);
    }
    SECTION("Large range of elements")
    {
        std::vector<int> nums = {1, 6, 7, 8, 10};
        REQUIRE(solution.deleteAndEarn(nums) == 25);
    }
    SECTION("Single element")
    {
        std::vector<int> nums = {100};
        REQUIRE(solution.deleteAndEarn(nums) == 100);
    }
    SECTION("Multiple choices with same max result")
    {
        std::vector<int> nums = {3, 1, 2, 3, 4, 3};
        REQUIRE(solution.deleteAndEarn(nums) == 10);
    }
    SECTION("Large array with multiple optimal substructures")
    {
        std::vector<int> nums = {2, 3, 4, 2, 3, 3, 3, 4, 4, 4, 4};
        REQUIRE(solution.deleteAndEarn(nums) == 24);
    }
    SECTION("Maximal single value")
    {
        std::vector<int> nums = {10000};
        REQUIRE(solution.deleteAndEarn(nums) == 10000);
    }
}

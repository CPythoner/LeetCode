// 0238.ProductOfArrayExceptSelf.TEST.cpp
#include <catch2/catch_test_macros.hpp>
#include "0238.ProductOfArrayExceptSelf.h"

TEST_CASE("ProductOfArrayExceptSelf - O(n) Space Complexity", "[productexceptself]")
{
    Solution solution;

    // 测试用例 1: [1, 2, 3, 4] -> [24, 12, 8, 6]
    SECTION("Test Case 1")
    {
        vector<int> nums = {1, 2, 3, 4};
        vector<int> expected = {24, 12, 8, 6};
        vector<int> result = solution.productExceptSelf_On(nums);
        REQUIRE(result == expected);
    }

    // 测试用例 2: [-1, 1, 0, -3, 3] -> [0, 0, 9, 0, 0]
    SECTION("Test Case 2")
    {
        vector<int> nums = {-1, 1, 0, -3, 3};
        vector<int> expected = {0, 0, 9, 0, 0};
        vector<int> result = solution.productExceptSelf_On(nums);
        REQUIRE(result == expected);
    }

    // 测试用例 3: [0, 0] -> [0, 0]
    SECTION("Test Case 3")
    {
        vector<int> nums = {0, 0};
        vector<int> expected = {0, 0};
        vector<int> result = solution.productExceptSelf_On(nums);
        REQUIRE(result == expected);
    }

    // 测试用例 4: [1, 1] -> [1, 1]
    SECTION("Test Case 4")
    {
        vector<int> nums = {1, 1};
        vector<int> expected = {1, 1};
        vector<int> result = solution.productExceptSelf_On(nums);
        REQUIRE(result == expected);
    }

    // 测试用例 5: [2, 3, 5, 7] -> [105, 70, 42, 30]
    SECTION("Test Case 5")
    {
        vector<int> nums = {2, 3, 5, 7};
        vector<int> expected = {105, 70, 42, 30};
        vector<int> result = solution.productExceptSelf_On(nums);
        REQUIRE(result == expected);
    }

    // 测试用例 6: 单个元素数组 [5] -> [1]
    SECTION("Test Case 6")
    {
        vector<int> nums = {5};
        vector<int> expected = {1};
        vector<int> result = solution.productExceptSelf_On(nums);
        REQUIRE(result == expected);
    }

    // 测试用例 7: 包含负数和正数的数组 [-2, 3, -4, 5] -> [-60, 40, -30, 24]
    SECTION("Test Case 7")
    {
        vector<int> nums = {-2, 3, -4, 5};
        vector<int> expected = {-60, 40, -30, 24};
        vector<int> result = solution.productExceptSelf_On(nums);
        REQUIRE(result == expected);
    }
}

TEST_CASE("ProductOfArrayExceptSelf - O(1) Space Complexity", "[productexceptself]")
{
    Solution solution;

    // 测试用例 1: [1, 2, 3, 4] -> [24, 12, 8, 6]
        SECTION("Test Case 1")
    {
        vector<int> nums = {1, 2, 3, 4};
        vector<int> expected = {24, 12, 8, 6};
        vector<int> result = solution.productExceptSelf_O1(nums);
        REQUIRE(result == expected);
    }

    // 测试用例 2: [-1, 1, 0, -3, 3] -> [0, 0, 9, 0, 0]
    SECTION("Test Case 2")
    {
        vector<int> nums = {-1, 1, 0, -3, 3};
        vector<int> expected = {0, 0, 9, 0, 0};
        vector<int> result = solution.productExceptSelf_O1(nums);
        REQUIRE(result == expected);
    }

    // 测试用例 3: [0, 0] -> [0, 0]
    SECTION("Test Case 3")
    {
        vector<int> nums = {0, 0};
        vector<int> expected = {0, 0};
        vector<int> result = solution.productExceptSelf_O1(nums);
        REQUIRE(result == expected);
    }

    // 测试用例 4: [1, 1] -> [1, 1]
    SECTION("Test Case 4")
    {
        vector<int> nums = {1, 1};
        vector<int> expected = {1, 1};
        vector<int> result = solution.productExceptSelf_O1(nums);
        REQUIRE(result == expected);
    }

    // 测试用例 5: [2, 3, 5, 7] -> [105, 70, 42, 30]
    SECTION("Test Case 5")
    {
        vector<int> nums = {2, 3, 5, 7};
        vector<int> expected = {105, 70, 42, 30};
        vector<int> result = solution.productExceptSelf_O1(nums);
        REQUIRE(result == expected);
    }

    // 测试用例 6: 单个元素数组 [5] -> [1]
    SECTION("Test Case 6")
    {
        vector<int> nums = {5};
        vector<int> expected = {1};
        vector<int> result = solution.productExceptSelf_O1(nums);
        REQUIRE(result == expected);
    }

    // 测试用例 7: 包含负数和正数的数组 [-2, 3, -4, 5] -> [-60, 40, -30, 24]
    SECTION("Test Case 7")
    {
        vector<int> nums = {-2, 3, -4, 5};
        vector<int> expected = {-60, 40, -30, 24};
        vector<int> result = solution.productExceptSelf_O1(nums);
        REQUIRE(result == expected);
    }
}

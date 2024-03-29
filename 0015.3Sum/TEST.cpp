#include "0015.3Sum.h"
#include "../utils/utils.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>
#include <vector>

using namespace std;

TEST_CASE("ThreeSum", "[threeSum]")
{
    Solution solution;

    SECTION("1")
    {
        vector<vector<int>> expected_result{{-1, -1, 2}, {-1, 0, 1}};   // 因为已经排序了，所以可以固定两个vector顺序
        vector<int> nums{-1, 0, 1, 2, -1, -4};
        vector<vector<int>> result = solution.threeSum(nums);
        REQUIRE(result.size() == 2);
        if (result.size() == 2) {
            REQUIRE(CompareVectorsIgnoreOrder(result[0], expected_result[0]));
            REQUIRE(CompareVectorsIgnoreOrder(result[1], expected_result[1]));
        }

    }
    SECTION("2")
    {
        vector<int> nums{0};
        vector<vector<int>> result = solution.threeSum(nums);
        REQUIRE(result.size() == 0);
    }
    SECTION("3")
    {
        vector<int> nums{0};
        vector<vector<int>> result = solution.threeSum(nums);
        REQUIRE(result.size() == 0);
    }
}

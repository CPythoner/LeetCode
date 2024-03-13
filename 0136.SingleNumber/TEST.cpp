#include "0136.SingleNumber.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>

using namespace std;

TEST_CASE("Single Number", "[singleNumber]")
{
    Solution solution;

    SECTION("1")
    {
        vector<int>nums{ 2,2,1 };
        REQUIRE(solution.singleNumber(nums) == 1);
    }
    SECTION("2")
    {
        vector<int>nums{ 4,1,2,1,2 };
        REQUIRE(solution.singleNumber(nums) == 4);
    }
}

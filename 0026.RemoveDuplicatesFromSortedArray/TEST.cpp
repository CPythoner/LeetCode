// 0026. Remove Duplicates from Sorted Array.cpp: 定义控制台应用程序的入口点。
//

#include "0026. Remove Duplicates from Sorted Array.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>
#include <vector>

using namespace std;

TEST_CASE("Remove Duplicates from Sorted Array", "[removeDuplicates]")
{
    Solution solution;

    SECTION("1")
    {
        vector<int>nums{ 1,1,2 };
        REQUIRE(solution.removeDuplicates(nums) == 2);
        cout << "the items of new vector:";
        for (auto &i : nums) {
            cout << i << " ";
        }
    }
    SECTION("2")
    {
        vector<int>nums{ 0,0,1,1,1,2,2,3,3,4 };
        REQUIRE(solution.removeDuplicates(nums) == 5);
        cout << "the items of new vector:";
        for (auto &i : nums) {
            cout << i << " ";
        }
    }
}

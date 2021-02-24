// 189. Rotate Array.cpp: 定义控制台应用程序的入口点。
//

#include "0189. Rotate Array.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>

using namespace std;

TEST_CASE("Rotate Array", "[rotate]")
{
    Solution solution;

    SECTION("1")
    {
        vector<int>nums{ 7,1,5,3,6,4 };
        solution.rotate(nums, 1);
        for (auto &item:nums)
        {
            cout << item << " ";
        }
        cout << endl;
    }
}

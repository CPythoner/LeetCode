#include "0189.RotateArray.h"
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

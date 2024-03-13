#include "0350.IntersectionofTwoArraysII.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>

using namespace std;

TEST_CASE("Intersection of Two Arrays II", "[intersect]")
{
    Solution solution;

    SECTION("1")
    {
        vector<int>nums1{ 1,2,2,1 };
        vector<int>nums2{ 2,2 };
        vector<int>result = solution.intersect(nums1, nums2);
        for (auto item : result)
            cout << item << " ";
        cout << endl;
    }
    SECTION("2")
    {
        vector<int>nums1{ 4,9,5 };
        vector<int>nums2{ 9,4,9,8,4 };
        vector<int>result = solution.intersect(nums1, nums2);
        for (auto item : result)
            cout << item << " ";
        cout << endl;
    }
}

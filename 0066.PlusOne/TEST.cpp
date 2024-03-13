#include "0066.PlusOne.h"

#include <catch2/catch_test_macros.hpp>
#include <iostream>

using namespace std;

TEST_CASE("Plus One", "[plusOne]")
{
    Solution solution;

    SECTION("1")
    {
        vector<int>digits{ 1, 2, 3 };
        vector<int> tmp = solution.plusOne(digits);
        for (auto &item : tmp)
        {
            cout << item << " ";
        }
        cout << endl;
    }
    SECTION("2")
    {
        vector<int>digits{ 4, 3, 2, 1 };
        vector<int> tmp = solution.plusOne(digits);
        for (auto &item : tmp)
        {
            cout << item << " ";
        }
        cout << endl;
    }
    SECTION("3")
    {
        vector<int>digits{ 9, 9, 9, 9 };
        vector<int> tmp = solution.plusOne(digits);
        for (auto &item : tmp)
        {
            cout << item << " ";
        }
        cout << endl;
    }
}

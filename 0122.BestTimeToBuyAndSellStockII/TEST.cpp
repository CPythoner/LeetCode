// 0122. Best Time to Buy and Sell Stock II.cpp: 定义控制台应用程序的入口点。
//

#include "0122. Best Time to Buy and Sell Stock II.h"
#include <catch2/catch_test_macros.hpp>


TEST_CASE("Best Time to Buy and Sell Stock II", "[maxProfit]")
{
    Solution solution;

    SECTION("1")
    {
        vector<int>prices{ 7,1,5,3,6,4 };
        REQUIRE(solution.maxProfit(prices) == 7);
    }
    SECTION("2")
    {
        vector<int>prices{ 1,2,3,4,5 };
        REQUIRE(solution.maxProfit(prices) == 4);
    }
    SECTION("3")
    {
        vector<int>prices{ 7,6,4,3,1 };
        REQUIRE(solution.maxProfit(prices) == 0);
    }
}

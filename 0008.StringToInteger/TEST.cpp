// 0008. String to Integer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "0008.StringToInteger.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("String to Integer", "[myAtoi]")
{
    Solution solution;

    SECTION("1")
    {
        REQUIRE(solution.myAtoi("42") == 42);
    }
    SECTION("2")
    {
        REQUIRE(solution.myAtoi("   -42") == -42);
    }
    SECTION("3")
    {
        REQUIRE(solution.myAtoi("4193 with words") == 4193);
    }
    SECTION("4")
    {
        REQUIRE(solution.myAtoi("words and 987") == 0);
    }
    SECTION("5")
    {
        REQUIRE(solution.myAtoi("-91283472332") == -2147483648);
    }

    system("pause");
}

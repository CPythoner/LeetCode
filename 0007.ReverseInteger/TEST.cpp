// 0007. Reverse Integer.cpp: 定义控制台应用程序的入口点。
//

#include "0007.ReverseInteger.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>
#include <vector>

using namespace std;

TEST_CASE("Reverse Integer", "[reverse]")
{
    Solution solution;

    SECTION("1")
    {
        REQUIRE(solution.reverse(123) == 321);
    }
    SECTION("2")
    {
        REQUIRE(solution.reverse(-123) == -321);
    }
    SECTION("3")
    {
        REQUIRE(solution.reverse(120) == 21);
    }
}

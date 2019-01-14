// 0007. Reverse Integer.cpp: 定义控制台应用程序的入口点。
//

#include "0007. Reverse Integer.h"
#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch.hpp"

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

	system("pause");
}


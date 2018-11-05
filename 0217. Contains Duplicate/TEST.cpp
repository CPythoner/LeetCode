// 0217. Contains Duplicate.cpp: 定义控制台应用程序的入口点。
//

#include "0217. Contains Duplicate.h"
#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch.hpp"

#include <iostream>

using namespace std;

TEST_CASE("Contains Duplicate", "[containsDuplicate]")
{
	Solution solution;

	SECTION("1")
	{
		vector<int>nums{ 1, 2, 3, 1 };
		REQUIRE(solution.containsDuplicate(nums) == true);
	}
	SECTION("2")
	{
		vector<int>nums{ 1, 2, 3, 4 };
		REQUIRE(solution.containsDuplicate(nums) == false);
	}
	SECTION("3")
	{
		vector<int>nums{ 1, 1, 1, 3, 3, 4, 3, 2, 4, 2 };
		REQUIRE(solution.containsDuplicate(nums) == true);
	}
	SECTION("4")
	{
		vector<int>nums{ 2, 14, 18, 22, 22 };
		REQUIRE(solution.containsDuplicate(nums) == true);
	}

	system("pause");
}


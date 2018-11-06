#include "0136. Single Number.h"
#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch.hpp"

#include <iostream>

using namespace std;

TEST_CASE("Single Number", "[singleNumber]")
{
	Solution solution;

	SECTION("1")
	{
		vector<int>nums{ 2,2,1 };
		REQUIRE(solution.singleNumber(nums) == 1);
	}
	SECTION("2")
	{
		vector<int>nums{ 4,1,2,1,2 };
		REQUIRE(solution.singleNumber(nums) == 4);
	}

	system("pause");
}


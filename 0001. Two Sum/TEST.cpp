#include "0001. Two Sum.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>

using namespace std;

TEST_CASE("Two Sum", "[twoSum]")
{
	Solution solution;

	SECTION("1")
	{
		vector<int>nums{ 2, 7, 11, 15 };
		vector<int>result = solution.twoSum(nums, 9);
		for (auto item : result)
			cout << item << " ";
		cout << endl;
	}

	system("pause");
}

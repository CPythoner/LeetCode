#include "0283. Move Zeroes.h"
#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch.hpp"

#include <iostream>

using namespace std;

TEST_CASE("Intersection of Two Arrays II", "[intersect]")
{
	Solution solution;

	SECTION("1")
	{
		vector<int>nums{ 0,1,0,3,12 };
		solution.moveZeroes(nums);
		for (auto item : nums)
			cout << item << " ";
		cout << endl;
	}
	SECTION("2")
	{
		vector<int>nums{ 0,0,54,1,0,3,12,0,0 };
		solution.moveZeroes2(nums);
		for (auto item : nums)
			cout << item << " ";
		cout << endl; 
	}

	system("pause");
}
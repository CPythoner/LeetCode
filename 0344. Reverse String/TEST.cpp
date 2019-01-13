// 0344. Reverse String.cpp: 定义控制台应用程序的入口点。
//

#include "0344. Reverse String.h"

#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch.hpp"

TEST_CASE("Reverse String", "[reverseString]")
{
	Solution solution;

	SECTION("1")
	{
		string s = "hello";
		cout << "The string reversed is: " << solution.reverseString(s) << endl;
	}
	SECTION("2")
	{
		string s = "A man, a plan, a canal: Panama";
		cout << "The string reversed is: " << solution.reverseString(s) << endl;
	}

	system("pause");
}
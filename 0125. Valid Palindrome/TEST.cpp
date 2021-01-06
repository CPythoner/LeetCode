// 0125. Valid Palindrome.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "0125. Valid Palindrome.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("Valid Palindrome", "[isPalindrome]")
{
    Solution solution;

    SECTION("1")
    {
        string s = "A man, a plan, a canal: Panama";
        REQUIRE(solution.isPalindrome(s) == true);
    }
    SECTION("2")
    {
        string s = "race a car";
        REQUIRE(solution.isPalindrome(s) == false);
    }
    system("pause");
}

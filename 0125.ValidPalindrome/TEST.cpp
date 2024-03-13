#include "0125.ValidPalindrome.h"

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

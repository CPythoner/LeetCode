#include "0003.LongestSubstringWithoutRepeatingCharacters.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>

#include "../utils/utils.h"

using namespace std;

TEST_CASE("LongestSubstringWithoutRepeatingCharacters", "[test]")
{
    Solution solution;

    SECTION("1")
    {
        string s = "abcabcbb";
        REQUIRE(solution.lengthOfLongestSubstring(s) == 3);
    }
    SECTION("2")
    {
        string s = "bbbbb";
        REQUIRE(solution.lengthOfLongestSubstring(s) == 1);
    }
    SECTION("3")
    {
        string s = "pwwkew";
        REQUIRE(solution.lengthOfLongestSubstring(s) == 3);
    }
    SECTION("4")
    {
        string s = "";
        REQUIRE(solution.lengthOfLongestSubstring(s) == 0);
    }
}

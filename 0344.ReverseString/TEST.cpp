#include "0344. Reverse String.h"

#include <catch2/catch_test_macros.hpp>

void PrintMatrix(const vector<vector<int>> &matrix);

TEST_CASE("Reverse String", "[reverseString]")
{
    Solution solution;

    SECTION("1")
    {
        string s("hello");
        REQUIRE(solution.reverseString(s) == "olleh");
    }
    SECTION("2")
    {
        string s("A man, a plan, a canal: Panama");
        REQUIRE(solution.reverseString(s) == "amanaP :lanac a ,nalp a ,nam A");
    }
}

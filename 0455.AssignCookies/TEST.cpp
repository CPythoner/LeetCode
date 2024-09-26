#include <catch2/catch_test_macros.hpp>
#include "0455.AssignCookies.h"
TEST_CASE("Test findContentChildren function", "[findContentChildren]")
{
    Solution solution;

    SECTION("Basic test case")
    {
        std::vector<int> g = {1, 2, 3};
        std::vector<int> s = {1, 1};
        REQUIRE(solution.findContentChildren(g, s) == 1);
    }

    SECTION("All children can be satisfied")
    {
        std::vector<int> g = {1, 2};
        std::vector<int> s = {1, 2, 3};
        REQUIRE(solution.findContentChildren(g, s) == 2);
    }

    SECTION("No cookies available")
    {
        std::vector<int> g = {1, 2, 3};
        std::vector<int> s = {};
        REQUIRE(solution.findContentChildren(g, s) == 0);
    }

    SECTION("No children to satisfy")
    {
        std::vector<int> g = {};
        std::vector<int> s = {1, 2, 3};
        REQUIRE(solution.findContentChildren(g, s) == 0);
    }

    SECTION("Cookies are not sufficient")
    {
        std::vector<int> g = {10, 9, 8, 7};
        std::vector<int> s = {5, 6, 7, 8};
        REQUIRE(solution.findContentChildren(g, s) == 2);
    }

    SECTION("Cookies are exactly sufficient")
    {
        std::vector<int> g = {5, 7, 9, 10};
        std::vector<int> s = {5, 7, 9, 10};
        REQUIRE(solution.findContentChildren(g, s) == 4);
    }

    SECTION("Cookies are more than sufficient")
    {
        std::vector<int> g = {1, 2, 3};
        std::vector<int> s = {1, 2, 3, 4, 5};
        REQUIRE(solution.findContentChildren(g, s) == 3);
    }
}

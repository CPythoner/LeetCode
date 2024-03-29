#include "0509.FibonacciNumber.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>

using namespace std;

TEST_CASE("Intersection of Two Arrays II", "[intersect]")
{
    Solution solution;

    SECTION("1")
    {
        REQUIRE(solution.fib(2) == 1);
        REQUIRE(solution.fib(3) == 2);
        REQUIRE(solution.fib(4) == 3);
    }
    SECTION("2")
    {
        REQUIRE(solution.fib2(2) == 1);
        REQUIRE(solution.fib2(3) == 2);
        REQUIRE(solution.fib2(4) == 3);
    }
}

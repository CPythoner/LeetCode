#include "1137.N-thTribonacciNumber.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>

using namespace std;

TEST_CASE("Intersection of Two Arrays II", "[intersect]")
{
    Solution solution;

    SECTION("1")
    {
        REQUIRE(solution.tribonacci(3) == 2);
        REQUIRE(solution.tribonacci(4) == 4);
        REQUIRE(solution.tribonacci(25) == 1389537);
    }
}

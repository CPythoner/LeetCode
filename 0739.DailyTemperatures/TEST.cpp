#include "0739.DailyTemperatures.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Daily Temperatures", "[dailyTemperatures]") {
    Solution solution;

    SECTION("Example 1") {
        vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
        vector<int> result = solution.dailyTemperatures(temperatures);
        vector<int> expected = {1, 1, 4, 2, 1, 1, 0, 0};
        REQUIRE(result == expected);
    }

    SECTION("Example 2") {
        vector<int> temperatures = {30, 40, 50, 60};
        vector<int> result = solution.dailyTemperatures(temperatures);
        vector<int> expected = {1, 1, 1, 0};
        REQUIRE(result == expected);
    }

    SECTION("Example 3") {
        vector<int> temperatures = {30, 60, 90};
        vector<int> result = solution.dailyTemperatures(temperatures);
        vector<int> expected = {1, 1, 0};
        REQUIRE(result == expected);
    }

    SECTION("Edge Cases") {
        SECTION("Single Temperature") {
            vector<int> temperatures = {30};
            vector<int> result = solution.dailyTemperatures(temperatures);
            vector<int> expected = {0};
            REQUIRE(result == expected);
        }

        SECTION("All Same Temperatures") {
            vector<int> temperatures = {30, 30, 30, 30};
            vector<int> result = solution.dailyTemperatures(temperatures);
            vector<int> expected = {0, 0, 0, 0};
            REQUIRE(result == expected);
        }

        SECTION("Decreasing Temperatures") {
            vector<int> temperatures = {90, 80, 70, 60};
            vector<int> result = solution.dailyTemperatures(temperatures);
            vector<int> expected = {0, 0, 0, 0};
            REQUIRE(result == expected);
        }
    }

    SECTION("Additional Test Cases") {
        SECTION("Complex Pattern") {
            vector<int> temperatures = {70, 60, 80, 70, 90, 75, 85};
            vector<int> result = solution.dailyTemperatures(temperatures);
            vector<int> expected = {2, 1, 2, 1, 0, 1, 0};
            REQUIRE(result == expected);
        }

        SECTION("Alternating Pattern") {
            vector<int> temperatures = {70, 65, 75, 70, 80, 75};
            vector<int> result = solution.dailyTemperatures(temperatures);
            vector<int> expected = {2, 1, 2, 1, 0, 0};
            REQUIRE(result == expected);
        }
    }
}

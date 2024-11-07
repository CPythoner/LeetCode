#include "0221.MaximalSquare.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Maximal Square", "[maximalSquare]") {
    Solution solution;

    SECTION("Example 1") {
        vector<vector<char>> matrix = {
            {'1','0','1','0','0'},
            {'1','0','1','1','1'},
            {'1','1','1','1','1'},
            {'1','0','0','1','0'}
        };
        REQUIRE(solution.maximalSquare(matrix) == 4);
    }

    SECTION("Example 2") {
        vector<vector<char>> matrix = {
            {'0','1'},
            {'1','0'}
        };
        REQUIRE(solution.maximalSquare(matrix) == 1);
    }

    SECTION("Example 3") {
        vector<vector<char>> matrix = {
            {'0'}
        };
        REQUIRE(solution.maximalSquare(matrix) == 0);
    }

    SECTION("Edge Cases") {
        SECTION("Empty Matrix") {
            vector<vector<char>> matrix;
            REQUIRE(solution.maximalSquare(matrix) == 0);
        }

        SECTION("All Zeros") {
            vector<vector<char>> matrix = {
                {'0','0','0'},
                {'0','0','0'},
                {'0','0','0'}
            };
            REQUIRE(solution.maximalSquare(matrix) == 0);
        }

        SECTION("All Ones") {
            vector<vector<char>> matrix = {
                {'1','1','1'},
                {'1','1','1'},
                {'1','1','1'}
            };
            REQUIRE(solution.maximalSquare(matrix) == 9);
        }
    }

    SECTION("Additional Test Cases") {
        SECTION("Single Row") {
            vector<vector<char>> matrix = {
                {'1','1','1','1'}
            };
            REQUIRE(solution.maximalSquare(matrix) == 1);
        }

        SECTION("Single Column") {
            vector<vector<char>> matrix = {
                {'1'},
                {'1'},
                {'1'},
                {'1'}
            };
            REQUIRE(solution.maximalSquare(matrix) == 1);
        }

        SECTION("Complex Pattern") {
            vector<vector<char>> matrix = {
                {'1','1','1','1','1'},
                {'1','1','1','1','1'},
                {'1','1','1','1','1'},
                {'1','1','1','1','0'}
            };
            REQUIRE(solution.maximalSquare(matrix) == 16);
        }
    }
}

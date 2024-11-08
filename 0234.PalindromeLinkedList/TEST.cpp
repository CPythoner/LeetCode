#include "0234.PalindromeLinkedList.h"
#include "list_utils.h"
#include <catch2/catch_test_macros.hpp>
#include <iostream>

using namespace std;

TEST_CASE("Palindrome Linked List", "[isPalindrome]") {
    Solution solution;

    SECTION("Example 1: Palindrome [1,2,2,1]") {
        ListNode* head = createList({1, 2, 2, 1});
        REQUIRE(solution.isPalindrome(head) == true);
        cleanupList(head);
    }

    SECTION("Example 2: Not Palindrome [1,2]") {
        ListNode* head = createList({1, 2});
        REQUIRE(solution.isPalindrome(head) == false);
        cleanupList(head);
    }

    SECTION("Edge Cases") {
        SECTION("Empty List") {
            REQUIRE(solution.isPalindrome(nullptr) == true);
        }

        SECTION("Single Node") {
            ListNode* head = createList({1});
            REQUIRE(solution.isPalindrome(head) == true);
            cleanupList(head);
        }

        SECTION("Two Same Nodes") {
            ListNode* head = createList({1, 1});
            REQUIRE(solution.isPalindrome(head) == true);
            cleanupList(head);
        }
    }

    SECTION("Additional Test Cases") {
        SECTION("Odd Length Palindrome") {
            ListNode* head = createList({1, 2, 3, 2, 1});
            REQUIRE(solution.isPalindrome(head) == true);
            cleanupList(head);
        }

        SECTION("Even Length Palindrome") {
            ListNode* head = createList({1, 2, 3, 3, 2, 1});
            REQUIRE(solution.isPalindrome(head) == true);
            cleanupList(head);
        }

        SECTION("Odd Length Not Palindrome") {
            ListNode* head = createList({1, 2, 3, 2, 2});
            REQUIRE(solution.isPalindrome(head) == false);
            cleanupList(head);
        }

        SECTION("Even Length Not Palindrome") {
            ListNode* head = createList({1, 2, 2, 1, 2, 2});
            REQUIRE(solution.isPalindrome(head) == false);
            cleanupList(head);
        }

        SECTION("All Same Values") {
            ListNode* head = createList({2, 2, 2, 2, 2});
            REQUIRE(solution.isPalindrome(head) == true);
            cleanupList(head);
        }

        SECTION("Long Palindrome") {
            ListNode* head = createList({1, 2, 3, 4, 5, 5, 4, 3, 2, 1});
            REQUIRE(solution.isPalindrome(head) == true);
            cleanupList(head);
        }

        SECTION("Long Not Palindrome") {
            ListNode* head = createList({1, 2, 3, 4, 5, 6, 5, 4, 3, 2});
            REQUIRE(solution.isPalindrome(head) == false);
            cleanupList(head);
        }
    }
}

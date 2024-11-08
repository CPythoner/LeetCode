#include "0206.ReverseLinkedList.h"
#include "list_utils.h"
#include <catch2/catch_test_macros.hpp>
#include <vector>

using namespace std;

TEST_CASE("Reverse Linked List", "[reverseList]") {
    Solution solution;

    SECTION("Example 1") {
        // 创建链表 [1,2,3,4,5]
        ListNode* head = createList({1, 2, 3, 4, 5});

        // 反转链表
        ListNode* result = solution.reverseList(head);

        // 验证结果 [5,4,3,2,1]
        vector<int> expected = {5, 4, 3, 2, 1};
        ListNode* curr = result;
        int i = 0;
        while (curr != nullptr) {
            REQUIRE(curr->val == expected[i++]);
            curr = curr->next;
        }
        REQUIRE(i == expected.size());

        cleanupList(result);
    }

    SECTION("Example 2") {
        // 创建链表 [1,2]
        ListNode* head = createList({1, 2});

        // 反转链表
        ListNode* result = solution.reverseList(head);

        // 验证结果 [2,1]
        REQUIRE(result->val == 2);
        REQUIRE(result->next->val == 1);
        REQUIRE(result->next->next == nullptr);

        cleanupList(result);
    }

    SECTION("Example 3") {
        // 空链表
        ListNode* head = nullptr;
        ListNode* result = solution.reverseList(head);
        REQUIRE(result == nullptr);
    }

    SECTION("Edge Cases") {
        SECTION("Single Node") {
            ListNode* head = createList({1});
            ListNode* result = solution.reverseList(head);

            REQUIRE(result->val == 1);
            REQUIRE(result->next == nullptr);

            cleanupList(result);
        }

        SECTION("Two Same Nodes") {
            ListNode* head = createList({1, 1});
            ListNode* result = solution.reverseList(head);

            REQUIRE(result->val == 1);
            REQUIRE(result->next->val == 1);
            REQUIRE(result->next->next == nullptr);

            cleanupList(result);
        }
    }

    SECTION("Additional Test Cases") {
        SECTION("Long List") {
            // 创建长链表
            vector<int> values = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            ListNode* head = createList(values);

            // 反转链表
            ListNode* result = solution.reverseList(head);

            // 验证结果
            vector<int> expected = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
            ListNode* curr = result;
            int i = 0;
            while (curr != nullptr) {
                REQUIRE(curr->val == expected[i++]);
                curr = curr->next;
            }
            REQUIRE(i == expected.size());

            cleanupList(result);
        }

        SECTION("All Same Values") {
            // 创建所有节点值相同的链表
            vector<int> values = {5, 5, 5, 5, 5};
            ListNode* head = createList(values);

            // 反转链表
            ListNode* result = solution.reverseList(head);

            // 验证结果
            ListNode* curr = result;
            int count = 0;
            while (curr != nullptr) {
                REQUIRE(curr->val == 5);
                count++;
                curr = curr->next;
            }
            REQUIRE(count == values.size());

            cleanupList(result);
        }
    }
}

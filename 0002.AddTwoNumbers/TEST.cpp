#include <catch2/catch_test_macros.hpp>

#include "0002.AddTwoNumbers.h"

TEST_CASE("AddTwoNumbers", "[addtwonumbers]")
{
    Solution solution;

    // 辅助函数：将链表转换为整数
    auto listToInt = [](ListNode* head) -> int
    {
        int result = 0;
        int base   = 1;
        while (head)
        {
            result += head->val * base;
            base *= 10;
            head = head->next;
        }
        return result;
    };

    // 辅助函数：将整数转换为链表
    auto intToList = [](int num) -> ListNode*
    {
        ListNode* dummyHead = new ListNode(0);
        ListNode* curr      = dummyHead;
        while (num > 0)
        {
            curr->next = new ListNode(num % 10);
            curr       = curr->next;
            num /= 10;
        }
        return dummyHead->next;
    };

    // 测试用例 1: 342 + 465 = 807
    SECTION("Test Case 1")
    {
        ListNode* l1     = intToList(342);
        ListNode* l2     = intToList(465);
        ListNode* result = solution.addTwoNumbers(l1, l2);
        REQUIRE(listToInt(result) == 807);
    }

    // 测试用例 2: 0 + 0 = 0
    SECTION("Test Case 2")
    {
        ListNode* l1     = intToList(0);
        ListNode* l2     = intToList(0);
        ListNode* result = solution.addTwoNumbers(l1, l2);
        REQUIRE(listToInt(result) == 0);
    }

    // 测试用例 3: 9999999 + 9999 = 10009998
    SECTION("Test Case 3")
    {
        ListNode* l1     = intToList(9999999);
        ListNode* l2     = intToList(9999);
        ListNode* result = solution.addTwoNumbers(l1, l2);
        REQUIRE(listToInt(result) == 10009998);
    }

    // 测试用例 4: 123 + 456 = 579
    SECTION("Test Case 4")
    {
        ListNode* l1     = intToList(123);
        ListNode* l2     = intToList(456);
        ListNode* result = solution.addTwoNumbers(l1, l2);
        REQUIRE(listToInt(result) == 579);
    }

    // 测试用例 5: 5 + 5 = 10
    SECTION("Test Case 5")
    {
        ListNode* l1     = intToList(5);
        ListNode* l2     = intToList(5);
        ListNode* result = solution.addTwoNumbers(l1, l2);
        REQUIRE(listToInt(result) == 10);
    }
}

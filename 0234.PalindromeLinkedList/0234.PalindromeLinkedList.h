#pragma once

#include "list_utils.h"

/*
234. 回文链表

给你一个单链表的头节点 head ，请你判断该链表是否为回文链表。如果是，返回 true ；否则，返回 false 。

示例 1：
    输入：head = [1,2,2,1]
    输出：true

    1 -> 2 -> 2 -> 1

示例 2：
    输入：head = [1,2]
    输出：false

    1 -> 2

提示：
    - 链表中节点数目在范围[1, 10^5] 内
    - 0 <= Node.val <= 9

进阶：你能否用 O(n) 时间复杂度和 O(1) 空间复杂度解决此题？

解题思路：
    1. 使用快慢指针找到链表中点：
       - 快指针每次移动两步，慢指针每次移动一步
       - 当快指针到达末尾时，慢指针位于中点
       - 对于奇数长度链表，慢指针在中间节点
       - 对于偶数长度链表，慢指针在前半部分的最后节点

    2. 反转后半部分链表：
       - 从慢指针的下一个节点开始反转
       - 使用三个指针（prev, curr, next）完成反转
       - 反转后，后半部分链表的方向被改变

    3. 比较前后两部分：
       - 从头节点和反转后的后半部分开始比较
       - 依次比较对应位置的节点值
       - 如果所有节点值都相同，则是回文链表

    4. 恢复链表结构（可选）：
       - 再次反转后半部分，恢复原始结构
       - 这一步不是必需的，但是保持了链表的原始结构

时间复杂度：O(n)
    - 找到中点需要 O(n/2)
    - 反转后半部分需要 O(n/2)
    - 比较需要 O(n/2)
    - 恢复结构需要 O(n/2)

空间复杂度：O(1)
    - 只使用了几个指针变量
    - 没有使用额外的数据结构
*/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;

        // 1. 找到中点
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. 反转后半部分
        ListNode* secondHalf = reverseList(slow->next);
        ListNode* firstHalf = head;
        ListNode* temp = secondHalf;  // 保存起始位置，用于恢复

        // 3. 比较前后两部分
        bool isPalind = true;
        while (secondHalf != nullptr) {
            if (firstHalf->val != secondHalf->val) {
                isPalind = false;
                break;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        // 4. 恢复链表结构（可选）
        slow->next = reverseList(temp);

        return isPalind;
    }

private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};

#pragma once

#include "list_utils.h"

/*
206. 反转链表

给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。

示例 1：
    输入：head = [1,2,3,4,5]
    输出：[5,4,3,2,1]

    1 -> 2 -> 3 -> 4 -> 5
    变为
    5 -> 4 -> 3 -> 2 -> 1

示例 2：
    输入：head = [1,2]
    输出：[2,1]

    1 -> 2
    变为
    2 -> 1

示例 3：
    输入：head = []
    输出：[]

提示：
    - 链表中节点的数目范围是 [0, 5000]
    - -5000 <= Node.val <= 5000

解题思路：
    1. 迭代法：
       - 使用三个指针：prev、curr、next
       - prev 指向已反转部分的头节点
       - curr 指向当前处理的节点
       - next 保存下一个要处理的节点
       - 每次迭代：
         a) 保存 next = curr->next
         b) 反转当前节点 curr->next = prev
         c) 移动 prev = curr
         d) 移动 curr = next

    2. 递归法（可选）：
       - 递归到链表末尾
       - 反转当前节点与下一个节点的指向
       - 返回新的头节点（原链表的最后一个节点）

时间复杂度：O(n)
    - 需要遍历整个链表一次

空间复杂度：O(1)
    - 迭代法只需要几个指针变量
    - 递归法需要 O(n) 的栈空间
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;  // prev 最终指向反转后的头节点
    }
};

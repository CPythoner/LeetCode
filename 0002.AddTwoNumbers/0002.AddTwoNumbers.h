#pragma once

/*
给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序
的方式存储的，并且每个节点只能存储 一位 数字。

请你将两个数相加，并以相同形式返回一个表示和的链表。

你可以假设除了数字 0 之外，这两个数都不会以 0 开头。

示例 1:
    输入：l1 = [2,4,3], l2 = [5,6,4]
    输出：[7,0,8]
    解释：342 + 465 = 807.

示例 2:
    输入：l1 = [0], l2 = [0]
    输出：[0]

示例 3:
    输入：l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
    输出：[8,9,9,9,0,0,0,1]

提示:
    - 每个链表中的节点数在范围 [1, 100] 内
    - 0 <= Node.val <= 9
    - 题目数据保证列表表示的数字不含前导零
*/

struct ListNode
{
    int       val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        // 创建一个哑节点，用于构建结果链表
        ListNode *dummyHead = new ListNode(0);
        ListNode *curr = dummyHead;
        // 进位初始化为0
        int carry = 0;

        // 当两个链表都不为空时，进行循环
        while (l1 != nullptr || l2 != nullptr)
        {
            // 如果l1不为空，则获取当前节点的值，否则默认为0
            int x = l1 ? l1->val : 0;
            // 如果l2不为空，则获取当前节点的值，否则默认为0
            int y = l2 ? l2->val : 0;

            // 计算当前位的和，包括进位
            int sum = x + y + carry;
            // 计算新的进位值
            carry = sum / 10;
            // 创建新节点保存当前位的值（和的最后一位）
            curr->next = new ListNode(sum % 10);
            // 移动到下一个节点
            curr = curr->next;

            // 如果l1不为空，移动到下一个节点
            if (l1) l1 = l1->next;
            // 如果l2不为空，移动到下一个节点
            if (l2) l2 = l2->next;
        }

        // 如果最后还有进位，添加一个新节点来保存进位值
        if (carry > 0)
        {
            curr->next = new ListNode(carry);
        }

        // 返回结果链表的头节点（哑节点的下一个节点）
        return dummyHead->next;
    }
};

    /**
     * @brief 加两个数字
     *
     * 给两个非空的链表，用来表示两个非负整数。数字以反转的形式存储，
     * 每个节点只包含一位数字。将两个数字相加，返回一个新的链表形式的和。
     *
     * @param l1 第一个链表的头节点
     * @param l2 第二个链表的头节点
     * @return ListNode* 返回相加后的结果链表的头节点
     */
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        // 创建一个哑节点，用于构建结果链表
        ListNode *dummyHead = new ListNode(0);
        ListNode *curr = dummyHead;
        // 进位初始化为0
        int carry = 0;

        // 当两个链表都不为空时，进行循环
        while (l1 != nullptr || l2 != nullptr)
        {
            // 如果l1不为空，则获取当前节点的值，否则默认为0
            int x = l1 ? l1->val : 0;
            // 如果l2不为空，则获取当前节点的值，否则默认为0
            int y = l2 ? l2->val : 0;

            // 计算当前位的和，包括进位
            int sum = x + y + carry;
            // 计算新的进位值
            carry = sum / 10;
            // 创建新节点保存当前位的值（和的最后一位）
            curr->next = new ListNode(sum % 10);
            // 移动到下一个节点
            curr = curr->next;

            // 如果l1不为空，移动到下一个节点
            if (l1) l1 = l1->next;
            // 如果l2不为空，移动到下一个节点
            if (l2) l2 = l2->next;
        }

        // 如果最后还有进位，添加一个新节点来保存进位值
        if (carry > 0)
        {
            curr->next = new ListNode(carry);
        }

        // 返回结果链表的头节点（哑节点的下一个节点）
        return dummyHead->next;
    }

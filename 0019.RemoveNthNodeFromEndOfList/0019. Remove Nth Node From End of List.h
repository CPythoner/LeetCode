#pragma once

/*
0036. 删除链表的倒数第N个节点
给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。

示例：
    给定一个链表: 1->2->3->4->5, 和 n = 2.
    当删除了倒数第二个节点后，链表变为 1->2->3->5.
说明：
    给定的 n 保证是有效的。

进阶：
    你能尝试使用一趟扫描实现吗？
*/

#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr || n == 0) return head;

        ListNode *fast = head, *slow = head;
        // fast 先行，先于slow n 个结点
        while (n--)
            fast = fast->next;

        // fast 为空，已经是链表尾结点，则删除 head 即可
        if (fast == nullptr)
            return head->next;

        // fast 不是尾结点，一直向后遍历
        while (fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;


        return head;
    }
};

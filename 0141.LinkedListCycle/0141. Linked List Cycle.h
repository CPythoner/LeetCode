#pragma once

#ifndef NULL
    #ifdef __cplusplus
        #define NULL 0
    #else
        #define NULL ((void *)0)
    #endif
#endif

// Definition for single-linked list.
typedef struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
}Node, *PNode;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (NULL == head || NULL == head->next)	// 空表和长度为1的链表
            return false;

        ListNode *fast = head->next;
        ListNode *slow = head;

        while (fast != slow) {
            if (NULL == fast || NULL == fast->next)
                return false;

            slow = slow->next;
            fast = fast->next->next;
        }

        return true;
    }
};

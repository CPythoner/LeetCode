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
    ListNode* reverseList(ListNode* head) {
        if (NULL == head || NULL == head->next)
            return head;

        ListNode *tmp = head;
        while (tmp->next)
        {
            ListNode *t = tmp->next;
            tmp->next = t->next;
            t->next = head;
            head = t;
        }

        return head;
    }
};

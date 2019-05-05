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
	ListNode* oddEvenList(ListNode* head) {
		if (NULL == head || NULL == head->next || NULL == head->next->next)
			return head;

		ListNode*pt1 = head, *pt2 = head->next, *pt3 = head->next;
		ListNode*temp;
		while (pt2&&pt2->next) {
			temp = pt2->next;
			pt2->next = pt2->next->next;
			pt2 = pt2->next;
			pt1->next = temp;
			temp->next = pt3;
			pt1 = pt1->next;
		}
		return head;
	}
};
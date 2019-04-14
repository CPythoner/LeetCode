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
	ListNode *detectCycle(ListNode *head) {
		if (NULL == head || NULL == head->next)	// 空表和长度为1的链表
			return NULL;

		bool hasCycle = false;
		ListNode *fast = head;
		ListNode *slow = head;

		while (fast && fast->next) {
			slow = slow->next;
			fast = fast->next->next;

 			if (fast == slow) {
				hasCycle = true;
				break;
			}
		}
		
		if (hasCycle) {
			ListNode *tmp = head;
			while (tmp != slow)	{
				tmp = tmp->next;
				slow = slow->next;
			}

			return slow;
		}
		else
			return NULL;
	}
};
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
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if (NULL == headA || NULL == headB)
			return NULL;

		// 将 B 拼接到 A 后面
		ListNode *tailA = headA;
		while (tailA->next)
			tailA = tailA->next;

		tailA->next = headB;

		// 检测是否有环
		bool hasCycle = false;
		ListNode *fast = headA;
		ListNode *slow = headA;

		while (fast && fast->next) {
			slow = slow->next;
			fast = fast->next->next;

			if (fast == slow) {
				hasCycle = true;
				break;
			}
		}

		if (hasCycle) {
			ListNode *tmp = headA;
			while (tmp != slow) {
				tmp = tmp->next;
				slow = slow->next;
			}

			// 还原 A 尾部
			tailA->next = NULL;
			return slow;
		}
		else
		{
			// 还原 A 尾部
			tailA->next = NULL;
			return NULL;
		}			
	}
};
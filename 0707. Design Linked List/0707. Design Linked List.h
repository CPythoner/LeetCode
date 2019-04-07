#pragma once

#ifndef NULL
	#ifdef __cplusplus
		#define NULL 0
	#else
		#define NULL ((void *)0)
	#endif
#endif

// Definition for single-linked list.
typedef struct SingleLinkedListNode {
	int val;
	SingleLinkedListNode *next;
	SingleLinkedListNode(int x) : val(x), next(NULL) {}
}Node, *PNode;


class MyLinkedList {
private:
	PNode head;	// 头节点
	int size;	// 链表长度
public:
	/** Initialize your data structure here. */
	MyLinkedList() {
		head = NULL;	// 链表为空
		size = 0;		// 链表长度为0
	}

	/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
	int get(int index) {
		if (index >= size)
			return -1;

		PNode walk = head;
		while (index-- > 0)
			walk = walk->next;

		return walk->val;
	}

	/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
	void addAtHead(int val) {
		PNode newHead = new Node(val);
		newHead->next = head;
		head = newHead;
		size++;
	}

	/** Append a node of value val to the last element of the linked list. */
	void addAtTail(int val) {
		addAtIndex(size, val);
	}

	/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
	void addAtIndex(int index, int val) {
		if (index > size)
			return;
		else if (0 == index)
			addAtHead(val);
		else {
			PNode newNode = new Node(val);
			PNode walk = head;
			while (index-- > 1)
				walk = walk->next;
			newNode->next = walk->next;
			walk->next = newNode;
			size++;
		}
	}

	/** Delete the index-th node in the linked list, if the index is valid. */
	void deleteAtIndex(int index) {
		if (index >= size)
			return;
		else if (0 == index) {
			PNode delNode = head;
			head = head->next;
			delete delNode;
		}
		else {
			PNode walk = head;
			while (index-- > 1)
				walk = walk->next;

			PNode delNode = walk->next;
			walk->next = delNode->next;
			delete delNode;
		}

		size--;
	}
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
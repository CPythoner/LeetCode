// 0019. Remove Nth Node From End of List.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "0019. Remove Nth Node From End of List.h"
#include <iostream>
#include <vector>

#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch.hpp"

using namespace std;

ListNode *CreateList(vector<int> vec)
{
	auto beg = vec.begin();
	auto end = vec.end();
	ListNode *head = beg == end ? NULL : new ListNode(*beg++);
	for (ListNode *cur = head; beg != end; cur = cur->next)
		cur->next = new ListNode(*beg++);
	return head;
}

void CoutAndClear(ListNode *head)
{
	while (head)
	{
		cout << head->val;
		if (head->next) 
			cout << "->";
		ListNode *del = head;
		head = head->next;
		delete del;
	}
	cout << endl;
}

TEST_CASE("Remove Nth Node From End of List", "[removeNthFromEnd]")
{
	Solution solution;

	SECTION("1")
	{
		vector<int> vec{ 1,2,3,4,5 };
		ListNode* head = CreateList(vec);
		ListNode *p = solution.removeNthFromEnd(head, 2);
		CoutAndClear(p);
	}

	system("pause");
}

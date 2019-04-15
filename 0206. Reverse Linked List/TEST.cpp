#include "0206. Reverse Linked List.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch.hpp"

using namespace std;

void trimLeftTrailingSpaces(string &input) {
	input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
		return !isspace(ch);
	}));
}

void trimRightTrailingSpaces(string &input) {
	input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
		return !isspace(ch);
	}).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
	vector<int> output;
	trimLeftTrailingSpaces(input);
	trimRightTrailingSpaces(input);
	input = input.substr(1, input.length() - 2);
	stringstream ss;
	ss.str(input);
	string item;
	char delim = ',';
	while (getline(ss, item, delim)) {
		output.push_back(stoi(item));
	}
	return output;
}

ListNode* stringToListNode(string input) {
	// Generate list from the input
	vector<int> list = stringToIntegerVector(input);

	// Now convert that list into linked list
	ListNode* dummyRoot = new ListNode(0);
	ListNode* ptr = dummyRoot;
	for (int item : list) {
		ptr->next = new ListNode(item);
		ptr = ptr->next;
	}
	ptr = dummyRoot->next;
	delete dummyRoot;
	return ptr;
}

int stringToInteger(string input) {
	return stoi(input);
}

string boolToString(bool input) {
	return input ? "True" : "False";
}

ListNode* SetListCyclePosition(ListNode* head, int pos)
{
	if (pos == -1)
		return head;

	ListNode* CycleNode = head;
	while (pos--)
		CycleNode = CycleNode->next;

	ListNode* ptr = head;
	while (NULL != ptr->next)
		ptr = ptr->next;

	ptr->next = CycleNode;
	return head;
}

void PrintList(ListNode* head)
{
	cout << "list: ";
	while (NULL != head)
	{
		cout << head->val << " ,";
		head = head->next;
	}
	cout << endl;
}

TEST_CASE("Reverse Linked List", "[reverseList]")
{
	Solution solution;

	SECTION("1")
	{
		string line = "[1,2,3,4,5]";
		ListNode* head = stringToListNode(line);
		ListNode* newHead = solution.reverseList(head);
		PrintList(newHead);
	}
}

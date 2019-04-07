#include "0707. Design Linked List.h"
#include <iostream>

using namespace std;

int main()
{
	MyLinkedList linkedlist;
	cout << "========= addAtHead() test ========= " << endl;
	linkedlist.addAtHead(1);
	cout<<linkedlist.get(0)<<endl;

	cout << "========= addAtTail() test ========= " << endl;
	linkedlist.addAtTail(3);
	linkedlist.addAtTail(4);
	cout<<linkedlist.get(1)<<endl;

	cout << "========= addAtIndex() test ========= " << endl;
	linkedlist.addAtIndex(1, 2);
	cout << linkedlist.get(0) << endl;
	cout << linkedlist.get(1) << endl;
	cout << linkedlist.get(2) << endl;
	cout << linkedlist.get(3) << endl;

	cout << "========= deleteAtIndex() test ========= " << endl;
	linkedlist.deleteAtIndex(1);
	cout << linkedlist.get(0) << endl;
	cout << linkedlist.get(1) << endl;
	cout << linkedlist.get(2) << endl;
}



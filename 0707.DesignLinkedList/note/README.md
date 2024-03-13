[TOC]



# 1. 题目描述

## 1.1 英文描述

Design your implementation of the linked list. You can choose to use the singly linked list or the doubly linked list. A node in a singly linked list should have two attributes: `val` and `next`. `val` is the value of the current node, and `next` is a pointer/reference to the next node. If you want to use the doubly linked list, you will need one more attribute `prev` to indicate the previous node in the linked list. Assume all nodes in the linked list are 0-indexed.

Implement these functions in your linked list class:

- get(index) : Get the value of the `index`-th node in the linked list. If the index is invalid, return `-1`.
- addAtHead(val) : Add a node of value `val` before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.
- addAtTail(val) : Append a node of value `val` to the last element of the linked list.
- addAtIndex(index, val) : Add a node of value `val` before the `index`-th node in the linked list. If `index` equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted.
- deleteAtIndex(index) : Delete the `index`-th node in the linked list, if the index is valid.

**Example:**

```
MyLinkedList linkedList = new MyLinkedList();
linkedList.addAtHead(1);
linkedList.addAtTail(3);
linkedList.addAtIndex(1, 2);  // linked list becomes 1->2->3
linkedList.get(1);            // returns 2
linkedList.deleteAtIndex(1);  // now the linked list is 1->3
linkedList.get(1);            // returns 3
```

**Note:**

- All values will be in the range of `[1, 1000]`.
- The number of operations will be in the range of `[1, 1000]`.
- Please do not use the built-in LinkedList library.



## 1.2 中文描述

设计链表的实现。您可以选择使用单链表或双链表。单链表中的节点应该具有两个属性：`val` 和 `next`。`val` 是当前节点的值，`next` 是指向下一个节点的指针/引用。如果要使用双向链表，则还需要一个属性 `prev` 以指示链表中的上一个节点。假设链表中的所有节点都是 0-index 的。

在链表类中实现这些功能：

- get(index)：获取链表中第 `index` 个节点的值。如果索引无效，则返回`-1`。
- addAtHead(val)：在链表的第一个元素之前添加一个值为 `val` 的节点。插入后，新节点将成为链表的第一个节点。
- addAtTail(val)：将值为 `val` 的节点追加到链表的最后一个元素。
- addAtIndex(index,val)：在链表中的第 `index` 个节点之前添加值为 `val`  的节点。如果 `index` 等于链表的长度，则该节点将附加到链表的末尾。如果 `index` 大于链表长度，则不会插入节点。
- deleteAtIndex(index)：如果索引 `index` 有效，则删除链表中的第 `index` 个节点。

 

**示例：**

```
MyLinkedList linkedList = new MyLinkedList();
linkedList.addAtHead(1);
linkedList.addAtTail(3);
linkedList.addAtIndex(1,2);   //链表变为1-> 2-> 3
linkedList.get(1);            //返回2
linkedList.deleteAtIndex(1);  //现在链表是1-> 3
linkedList.get(1);            //返回3
```

 

**提示：**

- 所有值都在 `[1, 1000]` 之内。
- 操作次数将在  `[1, 1000]` 之内。
- 请不要使用内置的 LinkedList 库。



# 2. 解题思路

本体采用单链表，单链表节点定义如下：

```cpp
typedef struct SingleLinkedListNode {
	int val;
	SingleLinkedListNode *next;
	SingleLinkedListNode(int x) : val(x), next(NULL) {}
}Node, *PNode;
```



## 2.1 构造函数

在 **MyLinkedList** 类中添加两个私有变量：

- **head** 表示头节点
- **size** 表示链表长度

并在构造函数中对两者进行初始化：将链表置空（head = NULL，size = 0）

![01_private_variate_and_construction](https://github.com/CPythoner/LeetCode/blob/master/0707.%20Design%20Linked%20List/note/images/01_private_variate_and_construction.png?raw=true)

下面以一个实例进行讲解链表的各个操作，假设一个原始链表如图所示：

![02_original_linked_list](https://github.com/CPythoner/LeetCode/blob/master/0707.%20Design%20Linked%20List/note/images/02_original_linked_list.png?raw=true)

## 2.2 get(int index)

**函数功能**：获取链表中第 `index` 个节点的值。如果索引无效，则返回`-1`。

以 `get(2)` 为例：

1. 先对 index 进行条件判断，只有 `index < size` 时合法，所以 `index >= size` 时函数返回` -1`

   ```cpp
   if (index >= size)
   	return -1;
   ```

2. 新建一个节点（walk）让其等于 head
3. walk 后移（walk = walk->next）一个节点，并让 index 自减；如此循环直至index = 0，此时的 walk 即为所找的节点
4. 返回 walk 的值（walk->val)



步骤如图所示：

![03_get()](https://github.com/CPythoner/LeetCode/blob/master/0707.%20Design%20Linked%20List/note/images/03_get().png?raw=true)



get() 实现代码：

```cpp
int get(int index) {
    if (index >= size)
        return -1;

    PNode walk = head;
    while (index-- > 0)
        walk = walk->next;

    return walk->val;
}
```



## 2.3 void addAtHead(int val) 

**函数功能**：在链表的第一个元素之前添加一个值为 `val` 的节点。插入后，新节点将成为链表的第一个节点。



以`addAtHead(2)` 为例：

1. 新建一个节点，将其值赋为2：`PNode newHead = new Node(val);`
2. 将新节点（newHead）的 next 指针指向 head 节点：`newHead->next = head;`
3. 将 head 指向 newHead：`head = newHead;`
4. 由于插入了新节点，链表长度要加1：`size++;`

![04_addAtHead()](https://github.com/CPythoner/LeetCode/blob/master/0707.%20Design%20Linked%20List/note/images/04_addAtHead().png?raw=true)

addAtHead()实现代码：

```cpp
void addAtHead(int val) {
    PNode newHead = new Node(val);
    newHead->next = head;
    head = newHead;
    size++;
}
```



## 2.4 void addAtIndex(int index, int val)

**函数功能**：在链表中的第 `index` 个节点之前添加值为 `val`  的节点。如果 `index` 等于链表的长度，则该节点将附加到链表的末尾。如果 `index` 大于链表长度，则不会插入节点。



1. 条件合法判断：由于是在 index 个节点之前插入，所以 `index <= size` 即可：

   ```cpp
   if (index > size)
   	return;
   ```

2. 如果 index 为 0，则相当于在头节点之前插入新节点，调用 `addAtHead` 即可；

3. 找到 index 节点之前的节点，令 walk 节点后移，直至到达 index 的前驱节点：

   ```cpp
   while (index-- > 1)
   	walk = walk->next;
   ```

4. 新建节点 `newNode`，令 newNode->next 指向 walk->next；walk->next 指向 newHead;

5. size 加 1



![05_addAtIndex()](https://github.com/CPythoner/LeetCode/blob/master/0707.%20Design%20Linked%20List/note/images/05_addAtIndex().png?raw=true)



addAtIndex() 实现代码：

```cpp
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
```



## 2.5 void addAtTail(int val)

**函数功能**：将值为 `val` 的节点追加到链表的最后一个元素。

尾节点的索引为 `size-1`, 所以该功能相当于在索引为 `size` 的节点之前插入新节点，可以直接调用`addAtIndex(size, val)` 实现。



## 2.6 void deleteAtIndex(int index)

**函数功能**：如果索引 `index` 有效，则删除链表中的第 `index` 个节点。



1. 条件合法判断：`index < size`
2. 如果 `index == 0 ` 则表示要删除头节点：
   - 新建节点 `delNode` ，令`delNode = head`
   - 令 `head = head->next` 使得头节点后移
   - 删除 delNode ：`delete delNode;`

![06_deleteAtIndex(0)](https://github.com/CPythoner/LeetCode/blob/master/0707.%20Design%20Linked%20List/note/images/06_deleteAtIndex(0).png?raw=true)

3. 如果 index 不等于 0

   - 新建节点 `walk`， 令 `walk = head`， walk 后移直至找到要删除节点的前驱节点

   - 新建节点 `delNode`，令 `delNode = walk->next;`
   - 令 `walk->next = delNode->next`，改变 walk 节点的后继节点
   - 删除 `delNode`

![07_deleteAtIndex(2)](https://github.com/CPythoner/LeetCode/blob/master/0707.%20Design%20Linked%20List/note/images/07_deleteAtIndex(2).png?raw=true)

4. size 减 1





# 3. 完整代码

```cpp
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
```












































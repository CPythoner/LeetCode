#pragma once

/*

给定一个完美二叉树，其所有叶子节点都在同一层，每个父节点都有两个子节点。二叉树定义如下：

struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
填充它的每个 next 指针，让这个指针指向其下一个右侧节点。如果找不到下一个右侧节点，则将 next 指针设置为 NULL。

初始状态下，所有 next 指针都被设置为 NULL。

 

示例：


输入：{"$id":"1","left":{"$id":"2","left":{"$id":"3","left":null,"next":null,"right":null,"val":4},"next":null,"right":{"$id":"4","left":null,"next":null,"right":null,"val":5},"val":2},"next":null,"right":{"$id":"5","left":{"$id":"6","left":null,"next":null,"right":null,"val":6},"next":null,"right":{"$id":"7","left":null,"next":null,"right":null,"val":7},"val":3},"val":1}

输出：{"$id":"1","left":{"$id":"2","left":{"$id":"3","left":null,"next":{"$id":"4","left":null,"next":{"$id":"5","left":null,"next":{"$id":"6","left":null,"next":null,"right":null,"val":7},"right":null,"val":6},"right":null,"val":5},"right":null,"val":4},"next":{"$id":"7","left":{"$ref":"5"},"next":null,"right":{"$ref":"6"},"val":3},"right":{"$ref":"4"},"val":2},"next":null,"right":{"$ref":"7"},"val":1}

解释：给定二叉树如图 A 所示，你的函数应该填充它的每个 next 指针，以指向其下一个右侧节点，如图 B 所示。
 

提示：

你只能使用常量级额外空间。
使用递归解题也符合要求，本题中递归程序占用的栈空间不算做额外的空间复杂度。

*/

#include <stdlib.h>
#include <vector>
#include <queue>

using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
 
class Solution {
public:
    Node* connect(Node* root) { // 递归解法
        if (root == NULL)
            return NULL;

        if (root->left)
            root->left->next = root->right;
        if (root->right)
            root->right->next = (root->next ? root->next->left : NULL);

        connect(root->left);
        connect(root->right);

        return root;
    }

    Node* connect_1(Node* root) {   // 采用层级遍历的方法，符合题目要求
        if (root == NULL)
            return NULL;

        Node* cur;
        Node* levelRoot = root; // 每一层的头结点

        while(levelRoot) {            
            cur = levelRoot;
            while (cur && cur->left) {     // 说明有子结点，left 和 right 子结点都存在，开始层级遍历
                cur->left->next = cur->right;
                if (cur->next == NULL) {
                    cur->right->next = NULL;
                }
                else {
                    cur->right->next = cur->next->left;
                }
                cur = cur->next;
            }
            
            levelRoot = levelRoot->left;
        }
        return root;
    }

    Node* connect_2(Node* root) {   // 此解法虽然可以得到结果，但不符合题意使用O(1)的空间
        if (root == NULL)
            return NULL;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* tmp = q.front();
            q.pop();

            if (tmp->left) {    // 说明有子结点，left 和 right 子结点都存在
                tmp->left->next = tmp->right;
                q.push(tmp->left);

                if (tmp->next) {
                    tmp->right->next = q.front()->left;
                    q.push(tmp->right);
                }
                else {
                    tmp->right->next = NULL;
                    q.push(tmp->right);
                }
            }            
        }
        return root;        
    }
};
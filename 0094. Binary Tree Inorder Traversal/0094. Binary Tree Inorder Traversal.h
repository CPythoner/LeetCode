#pragma once
/*

给定一个二叉树，返回它的中序 遍历。

示例:

输入: [1,null,2,3]
   1
    \
     2
    /
   3

输出: [1,3,2]
进阶: 递归算法很简单，你可以通过迭代算法完成吗？

 */

#include <vector>
#include <stdio.h>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal_1(TreeNode* root) {
        vector<int> result;
        
        if (root) {
            pushNode(root, result);
        }
        
        return result;
    }

    vector<int> inorderTraversal_2(TreeNode* root) {
        vector<int> result;
        
        if (root == NULL) {
            return result;
        }

        stack<TreeNode*> stackTree;

        while (true)
        {
            while (root)
            {
                stackTree.push(root);
                root = root->left;
            }

            if (stackTree.empty())
                return result;

            result.push_back(stackTree.top()->val);
            root = stackTree.top()->right;
            stackTree.pop();            
        }
             
        return result;
    }

private:  
    void pushNode(TreeNode* root, vector<int> & vec) {
        if (root) {
            pushNode(root->left, vec);
            vec.push_back(root->val);
            pushNode(root->right, vec);
        }
    }
};
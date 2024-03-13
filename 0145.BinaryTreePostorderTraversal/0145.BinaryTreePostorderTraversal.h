#pragma once
/*

给定一个二叉树，返回它的 后序 遍历。

示例:

输入: [1,null,2,3]  
   1
    \
     2
    /
   3 

输出: [3,2,1]
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
    vector<int> postorderTraversal_1(TreeNode* root) {
        vector<int> result;
        
        if (root) {
            pushNode(root, result);
        }
        
        return result;
    }

    vector<int> postorderTraversal_2(TreeNode* root) {
        vector<int> result;
        
        if (root == NULL) {
            return result;
        }

        stack<TreeNode*> stackTree;
        TreeNode* pre = root;
        TreeNode* curr;

        stackTree.push(root);

        while (!stackTree.empty()) {
            curr = stackTree.top();

            if (curr->left && pre != curr->left && pre != curr->right)
                stackTree.push(curr->left);
            else if(curr->right && pre != curr->right)
                stackTree.push(curr->right);
            else {
                result.push_back(curr->val);
                stackTree.pop();
                pre = curr;
            }
        }        
        
        return result;
    }

private:  
    void pushNode(TreeNode* root, vector<int> & vec) {
        if (root) {
            pushNode(root->left, vec);
            pushNode(root->right, vec);
            vec.push_back(root->val);
        }
    }
};
#pragma once

/*

给定一个二叉树，返回其按层次遍历的节点值。 （即逐层地，从左到右访问所有节点）。

例如:
给定二叉树: [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
返回其层次遍历结果：

[
  [3],
  [9,20],
  [15,7]
]

 */

#include <vector>
#include <stdio.h>
#include <queue>

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;

        if (root == NULL)
            return result;

        queue <TreeNode*> queueTree;
        TreeNode* tmp = NULL;
        queueTree.push(root);

        while (!queueTree.empty()) {
            vector<int> vec;
            int width = queueTree.size();

            for (int i = 0; i < width; i++) {
                tmp = queueTree.front();
                vec.push_back(tmp->val);
                queueTree.pop();

                if (tmp->left)
                    queueTree.push(tmp->left);
                if (tmp->right)
                    queueTree.push(tmp->right);
            }
            result.push_back(vec);
        }

        return result;
    }
};
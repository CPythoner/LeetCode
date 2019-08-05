
/*

给定一个二叉树，返回它的 前序 遍历。

 示例:

输入: [1,null,2,3]  
   1
    \
     2
    /
   3 

输出: [1,2,3]
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
    vector<int> preorderTraversal_1(TreeNode* root) {
        vector<int> result;
        
        if (root) {
            pushNode(root, result);
        }
        
        return result;
    }

    vector<int> preorderTraversal_2(TreeNode* root) {
        vector<int> result;
        
        if (root == NULL) {
            return result;
        }

        stack<TreeNode*> stackTree;
        TreeNode* tmp;

        stackTree.push(root);

        while (!stackTree.empty()) {
            tmp = stackTree.top();
            result.push_back(tmp->val);
            stackTree.pop();

            if (tmp->right != NULL)
                stackTree.push(tmp->right);

            if(tmp->left != NULL)
                stackTree.push(tmp->left);
        }        
        
        return result;
    }

private:  
    void pushNode(TreeNode* root, vector<int> & vec) {
        if (root) {
            vec.push_back(root->val);
            pushNode(root->left, vec);
            pushNode(root->right, vec);
        }
    }
};
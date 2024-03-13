#pragma once

/*

给定一个二叉树，检查它是否是镜像对称的。

例如，二叉树 [1,2,2,3,4,4,3] 是对称的。

    1
   / \
  2   2
 / \ / \
3  4 4  3
但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的:

    1
   / \
  2   2
   \   \
   3    3

说明:
    如果你可以运用递归和迭代两种方法解决这个问题，会很加分。

 */

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
    bool isSymmetric_1(TreeNode* root) {
        if (root == NULL)
            return true;

        if (root->left == NULL)
            return (root->right == NULL);
        
        if (root->right == NULL)
            return false;

        TreeNode* ltree = root->left;
        TreeNode* rtree = root->right;
        queue<TreeNode*> lqueue, rqueue;

        lqueue.push(ltree);
        rqueue.push(rtree);

        while (!lqueue.empty() && !rqueue.empty()) {
            TreeNode* ltmp = lqueue.front();
            TreeNode* rtmp = rqueue.front();

            lqueue.pop();
            rqueue.pop();

            if (ltmp->val != rtmp->val)
                return false;

            if (ltmp->left == NULL) {
                if (rtmp->right != NULL)
                    return false;
            }
            else {
                if (rtmp->right == NULL)
                    return false;
                lqueue.push(ltmp->left);
                rqueue.push(rtmp->right);
            }

            if (ltmp->right == NULL) {
                if (rtmp->left != NULL)
                    return false;
            }
            else {
                if (rtmp->left == NULL)
                    return false;

                lqueue.push(ltmp->right);
                rqueue.push(rtmp->left);
            }
        }

        return (lqueue.empty() && rqueue.empty());
    }

    bool isSymmetric_2(TreeNode* root) {
        if (root == NULL)
            return true;

        return compare(root->left, root->right);
    }

private:
    bool compare(TreeNode* ltree, TreeNode* rtree) {
        if (ltree == NULL) 
            return (rtree == NULL);
        
        if (rtree == NULL)
            return false;

        if (ltree->val != rtree->val)
            return false;

        return (compare(ltree->left, rtree->right) && compare(ltree->right, rtree->left));        
    }
};
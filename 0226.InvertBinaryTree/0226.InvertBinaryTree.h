#pragma once

#include "tree_utils.h"

/*
226. 翻转二叉树

给你一棵二叉树的根节点 root ，翻转这棵二叉树，并返回其根节点。

示例 1：
    输入：root = [4,2,7,1,3,6,9]
    输出：[4,7,2,9,6,3,1]

         4                 4
       /   \             /   \
      2     7    =>     7     2
     / \   / \         / \   / \
    1   3 6   9       9   6 3   1

示例 2：
    输入：root = [2,1,3]
    输出：[2,3,1]

         2               2
        / \     =>      / \
       1   3           3   1

示例 3：
    输入：root = []
    输出：[]

提示：
    - 树中节点数目范围在 [0, 100] 内
    - -100 <= Node.val <= 100

解题思路：
    1. 递归解法：
       - 对于每个节点，交换其左右子树
       - 递归处理左右子树
       - 基准情况：空节点直接返回

    2. 迭代解法（可选）：
       - 使用队列层序遍历
       - 对每个节点交换其左右子树

时间复杂度：O(n)
    - 每个节点只访问一次

空间复杂度：O(h)
    - h 是树的高度
    - 递归调用栈的深度
*/

class Solution
{
public:
    TreeNode* invertTree(TreeNode* root)
    {
        if (root == nullptr)
        {
            return nullptr;
        }

        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};

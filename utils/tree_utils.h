#pragma once

#include <vector>

/**
 * @brief 二叉树节点结构
 */
struct TreeNode {
    int val;            ///< 节点值
    TreeNode *left;     ///< 左子节点指针
    TreeNode *right;    ///< 右子节点指针

    /**
     * @brief 构造函数
     * @param x 节点值
     */
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

/**
 * @brief 从数组创建二叉树
 * @param values 输入数组，按层序遍历顺序存储节点值，-1表示null节点
 * @param index 当前处理的节点在数组中的索引，默认从0开始
 * @return 返回创建的二叉树根节点指针
 */
TreeNode* createTree(const std::vector<int>& values, int index = 0);

/**
 * @brief 在二叉树中查找指定值的节点
 * @param root 二叉树根节点
 * @param value 要查找的节点值
 * @return 返回找到的节点指针，如果未找到返回nullptr
 */
TreeNode* findNode(TreeNode* root, int value);

/**
 * @brief 清理二叉树，释放所有节点的内存
 * @param root 二叉树根节点
 */
void cleanupTree(TreeNode* root);

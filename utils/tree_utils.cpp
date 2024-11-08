#include "tree_utils.h"

/**
 * @brief 从数组创建二叉树的实现
 *
 * 使用递归方式创建二叉树，数组中的值按层序遍历顺序存储。
 * 对于索引为i的节点，其左子节点索引为2i+1，右子节点索引为2i+2。
 *
 * @param values 输入数组
 * @param index 当前处理的节点索引
 * @return TreeNode* 返回创建的树节点
 */
TreeNode* createTree(const std::vector<int>& values, int index) {
    if (index >= values.size() || values[index] == -1) {
        return nullptr;
    }

    TreeNode* root = new TreeNode(values[index]);
    root->left = createTree(values, 2 * index + 1);
    root->right = createTree(values, 2 * index + 2);

    return root;
}

/**
 * @brief 在二叉树中查找节点的实现
 *
 * 使用递归方式在二叉树中查找值为value的节点。
 * 按照前序遍历的顺序进行查找。
 *
 * @param root 当前节点
 * @param value 要查找的值
 * @return TreeNode* 返回找到的节点，未找到返回nullptr
 */
TreeNode* findNode(TreeNode* root, int value) {
    if (!root) return nullptr;
    if (root->val == value) return root;

    TreeNode* left = findNode(root->left, value);
    if (left) return left;

    return findNode(root->right, value);
}

/**
 * @brief 清理二叉树的实现
 *
 * 使用后序遍历的方式清理二叉树，
 * 确保先删除子节点，再删除父节点。
 *
 * @param root 要清理的树的根节点
 */
void cleanupTree(TreeNode* root) {
    if (!root) return;
    cleanupTree(root->left);
    cleanupTree(root->right);
    delete root;
}

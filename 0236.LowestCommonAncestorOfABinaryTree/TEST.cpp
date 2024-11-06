#include "0236.LowestCommonAncestorOfABinaryTree.h"
#include <catch2/catch_test_macros.hpp>
#include <iostream>

using namespace std;

// 辅助函数：创建二叉树
TreeNode* createTree(const vector<int>& values, int index = 0) {
    if (index >= values.size() || values[index] == -1) {  // 使用-1表示null
        return nullptr;
    }

    TreeNode* root = new TreeNode(values[index]);
    root->left = createTree(values, 2 * index + 1);
    root->right = createTree(values, 2 * index + 2);

    return root;
}

// 辅助函数：查找节点
TreeNode* findNode(TreeNode* root, int value) {
    if (!root) return nullptr;
    if (root->val == value) return root;

    TreeNode* left = findNode(root->left, value);
    if (left) return left;

    return findNode(root->right, value);
}

// 辅助函数：清理二叉树
void cleanupTree(TreeNode* root) {
    if (!root) return;
    cleanupTree(root->left);
    cleanupTree(root->right);
    delete root;
}

TEST_CASE("Lowest Common Ancestor of a Binary Tree", "[lowestCommonAncestor]") {
    Solution solution;

    SECTION("Example 1") {
        // 创建树 [3,5,1,6,2,0,8,null,null,7,4]
        vector<int> values = {3,5,1,6,2,0,8,-1,-1,7,4};
        TreeNode* root = createTree(values);

        // 找到节点 p(5) 和 q(1)
        TreeNode* p = findNode(root, 5);
        TreeNode* q = findNode(root, 1);

        // 验证结果
        TreeNode* result = solution.lowestCommonAncestor(root, p, q);
        REQUIRE(result->val == 3);

        cleanupTree(root);
    }

    SECTION("Example 2") {
        // 创建相同的树，但是不同的节点
        vector<int> values = {3,5,1,6,2,0,8,-1,-1,7,4};
        TreeNode* root = createTree(values);

        // 找到节点 p(5) 和 q(4)
        TreeNode* p = findNode(root, 5);
        TreeNode* q = findNode(root, 4);

        // 验证结果
        TreeNode* result = solution.lowestCommonAncestor(root, p, q);
        REQUIRE(result->val == 5);

        cleanupTree(root);
    }

    SECTION("Example 3") {
        // 创建树 [1,2]
        vector<int> values = {1,2};
        TreeNode* root = createTree(values);

        // 找到节点 p(1) 和 q(2)
        TreeNode* p = findNode(root, 1);
        TreeNode* q = findNode(root, 2);

        // 验证结果
        TreeNode* result = solution.lowestCommonAncestor(root, p, q);
        REQUIRE(result->val == 1);

        cleanupTree(root);
    }

    SECTION("Edge Cases") {
        SECTION("Node is its own ancestor") {
            vector<int> values = {1,2,3};
            TreeNode* root = createTree(values);

            TreeNode* p = root;  // 节点1
            TreeNode* q = root->left;  // 节点2

            TreeNode* result = solution.lowestCommonAncestor(root, p, q);
            REQUIRE(result->val == 1);

            cleanupTree(root);
        }

        SECTION("Deep tree") {
            // 创建一个较深的树
            vector<int> values = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
            TreeNode* root = createTree(values);

            TreeNode* p = findNode(root, 8);
            TreeNode* q = findNode(root, 9);

            TreeNode* result = solution.lowestCommonAncestor(root, p, q);
            REQUIRE(result->val == 4);  // 节点8和9的LCA是4

            cleanupTree(root);
        }
    }
}

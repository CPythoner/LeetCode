#include "0226.InvertBinaryTree.h"
#include <catch2/catch_test_macros.hpp>

#include <vector>
#include <queue>

using std::vector;
using std::queue;

TEST_CASE("Invert Binary Tree", "[invertTree]") {
    Solution solution;

    SECTION("Example 1") {
        vector<int> values = {4,2,7,1,3,6,9};
        vector<int> expected = {4,7,2,9,6,3,1};

        TreeNode* root = createTree(values);
        TreeNode* result = solution.invertTree(root);

        // 验证结果：层序遍历比较
        vector<int> resultValues;
        queue<TreeNode*> q;
        q.push(result);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            resultValues.push_back(node->val);

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        REQUIRE(resultValues == expected);
        cleanupTree(root);
    }

    SECTION("Example 2") {
        vector<int> values = {2,1,3};
        vector<int> expected = {2,3,1};

        TreeNode* root = createTree(values);
        TreeNode* result = solution.invertTree(root);

        REQUIRE(result->val == 2);
        REQUIRE(result->left->val == 3);
        REQUIRE(result->right->val == 1);

        cleanupTree(root);
    }

    SECTION("Example 3") {
        TreeNode* root = nullptr;
        TreeNode* result = solution.invertTree(root);
        REQUIRE(result == nullptr);
    }

    SECTION("Single Node") {
        TreeNode* root = new TreeNode(1);
        TreeNode* result = solution.invertTree(root);

        REQUIRE(result->val == 1);
        REQUIRE(result->left == nullptr);
        REQUIRE(result->right == nullptr);

        delete root;
    }

    SECTION("Complete Binary Tree") {
        vector<int> values = {1,2,3,4,5,6,7};
        vector<int> expected = {1,3,2,7,6,5,4};

        TreeNode* root = createTree(values);
        TreeNode* result = solution.invertTree(root);

        vector<int> resultValues;
        queue<TreeNode*> q;
        q.push(result);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            resultValues.push_back(node->val);

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        REQUIRE(resultValues == expected);
        cleanupTree(root);
    }
}

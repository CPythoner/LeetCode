#include "0236.LowestCommonAncestorOfABinaryTree.h"
#include <catch2/catch_test_macros.hpp>
#include <iostream>

using namespace std;

TEST_CASE("Lowest Common Ancestor of a Binary Tree", "[lowestCommonAncestor]") {
    Solution solution;

    SECTION("Example 1") {
        vector<int> values = {3,5,1,6,2,0,8,-1,-1,7,4};
        TreeNode* root = createTree(values);

        TreeNode* p = findNode(root, 5);
        TreeNode* q = findNode(root, 1);

        TreeNode* result = solution.lowestCommonAncestor(root, p, q);
        REQUIRE(result->val == 3);

        cleanupTree(root);
    }

    SECTION("Example 2") {
        vector<int> values = {3,5,1,6,2,0,8,-1,-1,7,4};
        TreeNode* root = createTree(values);

        TreeNode* p = findNode(root, 5);
        TreeNode* q = findNode(root, 4);

        TreeNode* result = solution.lowestCommonAncestor(root, p, q);
        REQUIRE(result->val == 5);

        cleanupTree(root);
    }

    SECTION("Example 3") {
        vector<int> values = {1,2};
        TreeNode* root = createTree(values);

        TreeNode* p = findNode(root, 1);
        TreeNode* q = findNode(root, 2);

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

#pragma once

/*

根据一棵树的前序遍历与中序遍历构造二叉树。

注意:
你可以假设树中没有重复的元素。

例如，给出

前序遍历 preorder = [3,9,20,15,7]
中序遍历 inorder = [9,3,15,20,7]
返回如下的二叉树：

    3
   / \
  9  20
    /  \
   15   7

*/

#include <stdlib.h>
#include <vector>

using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder, inorder, 0, inorder.size() - 1, 0, preorder.size() - 1);
    }

private:
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int prebegin, int preend, int inbegin, int inend)
    {
        if (prebegin > preend || inbegin > inend) 
            return NULL;

        int val = preorder.at(prebegin);
        TreeNode* root = new TreeNode(val);

        if (prebegin == preend)
            return root;            

        int index = 0;
        for (index = inbegin; index <= inend; index++) {
            if (val == inorder.at(index)) 
                break;
        }

        int leftTreeLen = index - inbegin;  // 计算左子树的长度

        root->left = helper(preorder, inorder, prebegin + 1, prebegin + leftTreeLen, inbegin, index);
        root->right = helper(preorder, inorder, prebegin + leftTreeLen + 1, preend, index + 1, inend);
        
        return root;
    }
};
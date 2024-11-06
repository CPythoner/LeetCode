#pragma once

/*

根据一棵树的中序遍历与后序遍历构造二叉树。

注意:
你可以假设树中没有重复的元素。

例如，给出

中序遍历 inorder = [9,3,15,20,7]
后序遍历 postorder = [9,15,7,20,3]
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(inorder, postorder, postorder.size() - 1, 0, inorder.size() - 1);
    }

private:
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder, int postend, int inbegin, int inend)
    {
        if (postend < 0 || inbegin > inend) 
            return NULL;
            
        int val = postorder.at(postend);
        TreeNode* root = new TreeNode(val);

        int index = 0;
        for (index = inbegin; index < inend; index++) {
            if (val == inorder.at(index)) 
                break;
        }

        int leftTreeLen = index - inbegin;  // 计算左子树的长度

        root->left = helper(inorder, postorder, postend - inend + index - 1, inbegin, index - 1);
        root->right = helper(inorder, postorder, postend - 1, index + 1, inend);
        
        return root;
    }
};
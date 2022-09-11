/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==nullptr)
        return 0;
        int lh,rh;
        lh=minDepth(root->left);
        rh=minDepth(root->right);
        if(root->left==nullptr && root->right==nullptr)
            return 1+min(lh,rh);
        if(root->left==nullptr &&  root->right!=nullptr)
            return 1+max(lh,rh);
         if(root->left!=nullptr &&  root->right==nullptr) 
             return 1+max(lh,rh);
         return 1+min(lh,rh);
    }
};
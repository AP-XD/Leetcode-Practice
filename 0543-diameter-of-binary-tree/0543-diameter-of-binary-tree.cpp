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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        int k=calc(maxi,root);
        return maxi;
    }
    int calc(int &maxi,TreeNode * root)
    {
        if(root==NULL)
            return 0;
        int lh=max(0,calc(maxi,root->left));
        int rh=max(0,calc(maxi,root->right));
        maxi=max(maxi,lh+rh);
        return 1+max(lh,rh);
    }
};
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
    bool isSymmetric(TreeNode* root) {
        return root==NULL || sym(root->left,root->right);
    }
    bool sym(TreeNode* rleft,TreeNode* rright)
    {
        if(rleft==NULL || rright==NULL)
            return rleft==rright;
        if(rleft->val !=rright->val)
            return false;
        
        return sym(rleft->left,rright->right) && sym(rleft->right,rright->left);
        
        
    }
};
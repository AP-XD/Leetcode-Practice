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
    int calcdia(int&d,TreeNode* root)
    {
        if(root==nullptr)return 0;
        
        int l=max(0,calcdia(d,root->left));
        int r=max(0,calcdia(d,root->right));
        
        d=max(d,l+r+root->val);
        return root->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        int d=INT_MIN;
        calcdia(d,root);
        return d;
    }
};
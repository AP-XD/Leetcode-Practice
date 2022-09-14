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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)return root;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* t=q.front();
            q.pop();
            TreeNode*temp=t->left;
            t->left=t->right;
            t->right=temp;
            if(t->left)q.push(t->left);
            if(t->right)q.push(t->right);
        }
        return root;
    }
};
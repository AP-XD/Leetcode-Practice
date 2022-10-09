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
    void inorder(TreeNode* root,vector<int>&in)
    {
        if(root==nullptr)return;
        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> in;
        inorder(root,in);
        
        map<int,int>mp;
        for(auto i:in)
        {
            
            mp[i]++;
            
        }
        for(auto i:in)
        {
            mp[i]--;
            if(mp[k-i]!=0)
                return true;
            
        }
        return false;
    }
};
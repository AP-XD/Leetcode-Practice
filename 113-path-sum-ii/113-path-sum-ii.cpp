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
    void find(TreeNode* root,vector<int>cur,int target,vector<vector<int>>&ans)
    {
        if (root ==nullptr)
            return;
        cur.push_back(root->val);
        if(root->val==target && root->left==NULL && root->right==NULL)
        {
                ans.push_back(cur);
        }
        find(root->left,cur,target-root->val,ans);
        find(root->right,cur,target-root->val,ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>c;
        find(root,c,targetSum,ans);
        return ans;
    }
};
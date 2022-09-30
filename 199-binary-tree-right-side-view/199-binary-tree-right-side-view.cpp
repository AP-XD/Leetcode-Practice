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
     vector<int> find(TreeNode* root,vector<int>&ans) {
        queue<TreeNode*>q;
         vector<int>l;
         vector<vector<int>>bfs;
         q.push(root);
         while(!q.empty())
         {
             int s=q.size();
             
             for(int i=0;i<s;i++){
             TreeNode* p=q.front();
             q.pop();
             l.push_back(p->val);
             if(p->left)q.push(p->left);
             if(p->right)q.push(p->right);}
             bfs.push_back(l);
             l.clear();
         }
         for(auto i:bfs)
         {
             ans.push_back(i[i.size()-1]);
         }
         return ans;
     }
    vector<int> rightSideView(TreeNode* root) {
         vector<int>ans;
        if(!root)return ans;
        return find(root,ans);
        
    }
};
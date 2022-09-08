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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        map<int,map<int,multiset<int>>>node;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            int x=p.second.first;
           int  y=p.second.second;
            node[x][y].insert(p.first->val);
            if(p.first->left)
                q.push({p.first->left,{x-1,y+1}});
             if(p.first->right)
                 q.push({p.first->right,{x+1,y+1}});
            
        }
        for(auto i:node)
        {
            vector<int> v;
            for(auto j:i.second)
            {
               for(auto k:j.second) {
                v.push_back(k);
            }
            }ans.push_back(v);
        }
        return ans;
        
    }
};
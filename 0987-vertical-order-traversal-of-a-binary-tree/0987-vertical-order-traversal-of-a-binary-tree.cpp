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
        map<int,map<int,multiset<int>>>mp;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            TreeNode* node=it.first;
            int v=it.second.first,l=it.second.second;
            mp[v][l].insert(node->val);
            if(node->left)q.push({node->left,{v-1,l+1}});
            if(node->right)q.push({node->right,{v+1,l+1}});
        }
        vector<vector<int>>ans;
        for(auto it:mp)
        {
            vector<int>k;
            
            for(auto i:it.second)
            {
                for(auto j:i.second)
                k.push_back(j);
            }
            ans.push_back(k);
            
        }
        return ans;
    }
};
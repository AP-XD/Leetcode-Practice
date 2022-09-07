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
class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        queue<TreeNode *> q;
        vector<vector<int>> ans;
        if (root == nullptr)
            return ans;
        int f = 1;

        q.push(root);
        while (!q.empty())
        {
            int s = q.size();
            vector<int> level;
            for (int i = 0; i < s; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                if (node->left != nullptr)
                    q.push(node->left);
                if (node->right != nullptr)
                    q.push(node->right);
                if (f & 1)
                {
                    level.push_back(node->val);
                }
                else
                {
                    level.insert(level.begin(),1,node->val);
                }
            }

            f++;

            ans.push_back(level);
        }
        return ans;
    }
};
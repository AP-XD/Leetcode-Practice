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
    TreeNode* addOneRow(TreeNode* root, int v, int depth) {
        int n;
        if(depth==1)
        {
            
           TreeNode* cur=new TreeNode(v);
            
            cur->left=root;
            return cur;
            
        }
        queue<TreeNode*>q;
        int d=2;
        q.push(root);
        while(!q.empty())
        {
            n=q.size();
            if(d==depth)
            {
                for(int i=0;i<n;i++)
                {
                    TreeNode* cur=q.front();
                    TreeNode* r=cur->right;TreeNode* l=cur->left;
                    cur->right=new TreeNode(v);
                    cur->left=new TreeNode(v);
                    cur->right->right=r;
                    cur->left->left=l;
                    q.pop();
                }
                
                break;
                
            }
            else
            {
               for(int i=0;i<n;i++)
                { 
                TreeNode* cur=q.front();
                if(cur->right)
                    q.push(cur->right);
                if(cur->left)
                    q.push(cur->left);
                q.pop();
               }
                d+=1;
            }
        }
        return root;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s1="";
        if(root==NULL){
            return s1;
        }
        
        stack<TreeNode*>stack;
        TreeNode* cur=root;
        while(!stack.empty() || cur!=NULL){
            if(cur!=NULL){
                stack.push(cur);
                s1+=to_string(cur->val)+",";
                cur=cur->left;
                
            }
            else{
                s1+="-1001,";
                cur=stack.top();
                stack.pop();
                cur=cur->right;
            }
        }
        
        return s1;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        list<int>trav;
        if(data.empty()){
            return NULL;
        }
        int i;
        stringstream ss(data);
        while (ss >> i) {
            trav.push_back(i);
            ss.ignore(1);
        }
        TreeNode* r=new TreeNode(trav.front());
        stack<pair<TreeNode*,int>>stack;
        TreeNode* cur=r;
        stack.push({cur,0});
        trav.pop_front();
        while(!trav.empty()){
            cur=stack.top().first;
            if(trav.front()==-1001){
                if(stack.top().second==0){
                    stack.top().second++;
                }
                else{
                    stack.pop();
                }
            }
            else{
                if(stack.top().second==0){
                   cur->left=new TreeNode(trav.front());
                    stack.top().second++;
                    cur=cur->left;
                    stack.push({cur,0});
                }
                else{
                     cur->right=new TreeNode(trav.front());
                    cur=cur->right;
                    stack.pop();
                    stack.push({cur,0});
                }
            }
            trav.pop_front(); 
        }
        return r;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
class Solution {
public:
    
    vector<vector<int>> ans;
    void recur(vector<int>& nums,vector<int>&vis,vector<int>& temp)
    {
        if(temp.size()==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(vis[i]==0)
            {vis[i]=1;
             temp.push_back(nums[i]);
             recur(nums, vis,temp);
             vis[i]=0;
             temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<int>vis(nums.size(),0);
        vector<int>temp;
        recur(nums,vis,temp);
        return ans;
    }
};
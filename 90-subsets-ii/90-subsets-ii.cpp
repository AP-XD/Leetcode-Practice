class Solution {
public:
    void sub(int ind,vector<int> nums,vector<int>temp,vector<vector<int>> &ans)
    {
        ans.push_back(temp);
       for(int i=ind;i<nums.size();i++)
       {
           if(i>ind && nums[i]==nums[i-1])continue;
          temp.push_back(nums[i]);
           sub(i+1,nums,temp,ans);
            temp.pop_back();
       }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // set<vector<int>> ans1;
         vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        sub(0,nums,temp,ans);
        // for(auto i:ans1)
        // {
        // ans.push_back(i);}
        return ans;
    }
};
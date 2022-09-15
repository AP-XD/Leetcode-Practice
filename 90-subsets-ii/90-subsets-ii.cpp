class Solution {
public:
    void sub(int ind,vector<int> nums,vector<int>temp,set<vector<int>> &ans)
    {
        ans.insert(temp);
       for(int i=ind;i<nums.size();i++)
       {
          temp.push_back(nums[i]);
           sub(i+1,nums,temp,ans);
            temp.pop_back();
       }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans1;
         vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        sub(0,nums,temp,ans1);
        for(auto i:ans1)
        {
ans.push_back(i);}
        return ans;
    }
};
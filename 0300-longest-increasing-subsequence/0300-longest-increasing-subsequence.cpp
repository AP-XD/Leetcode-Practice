class Solution {
public:
    int solve(vector<int>&nums,int ind,int prev,int n,vector<vector<int>>&dp)
    {
        if(ind==n)
        {
            return dp[ind][prev+1]=0;
        }
        if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];
        int nt,take=0;
        nt=0+solve(nums,ind+1,prev,n,dp);
        if(prev==-1 || nums[ind]>nums[prev])
            take=1+solve(nums,ind+1,ind,n,dp);
        return dp[ind][prev+1]=max(take,nt);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
       return  solve(nums,0,-1,nums.size(),dp);
    }
};
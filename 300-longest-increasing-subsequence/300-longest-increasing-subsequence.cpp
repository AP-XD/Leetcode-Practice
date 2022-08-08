class Solution {
public:
    
    int solve(int ind, vector<int> &nums,vector<vector<int>> &dp,int prev){
        
        if(ind>=nums.size()){
            return 0;
        }
        
        if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
        

        int take =0;
        int not_take = solve(ind+1,nums,dp,prev);
        if(prev==-1 || nums[ind]>nums[prev]) take = solve(ind+1,nums,dp,ind) +1;
        
        return dp[ind][prev+1] = max(take,not_take);
    }
    
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(nums.size()+1,vector<int> (nums.size()+1,-1));
        return solve(0,nums,dp,-1);
    }
};
class Solution {
public:
    long long mod=1e9+7;
    long long find(int n,int ind,int k,int target,vector<vector<int>>&dp)
    {
        
        if(ind==n && target==0)return 1;
        if(target<0 || ind>n)return 0;
        if(dp[ind][target]!=-1)return dp[ind][target];
        long long ans=0;
        
        for(int i=1;i<=k;i++)
        {
            if(i<=target)ans+=find(n,ind+1,k,target-i,dp);
        }
        return dp[ind][target]=ans%mod;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return find(n,0,k,target,dp);
    }
};
#define ll long long
class Solution {
public:
    ll sub(ll k, ll ind,vector<int>& v,vector<vector<int>> &dp)
    {
        if(ind>=v.size()){
            
            return 0;
        }
            
        if(k==0){
            return 1;
            
            
        }
        
        else if(k<0)
            return 0;
    if(dp[ind][k]!=-1)
        return dp[ind][k];
        ll take=0;
        ll ntake= sub(k,ind+1,v,dp);
        
        
        if(v[ind]<=k)
        {
            take= sub(k-v[ind],ind+1,v,dp);
        }
        return dp[ind][k]=take+ntake;
    }

    bool canPartition(vector<int>& nums) {
        ll k,sum=0,n=nums.size();
        for(ll i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if(sum%2==1)
            return false;
        
        k=sum/2;
         vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        return sub(k,0,nums,dp);
    }
};
class Solution {
public:
    int lcs(string &a,string &b,int ind1,int ind2,vector<vector<int>>&dp)
    {
        
         if(ind1<0 || ind2<0)
            return 0;
        if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];
        if(a[ind1]==b[ind2])
            return dp[ind1][ind2]=1+lcs(a,b,ind1-1,ind2-1,dp);
        
            return dp[ind1][ind2]=0+max(lcs(a,b,ind1-1,ind2,dp),lcs(a,b,ind1,ind2-1,dp));
        
    }
    
    int minInsertions(string s) {
        string cp=s;
        int n=s.length();
         vector<vector<int>>dp(n,vector<int>( n,-1));
        reverse(s.begin(),s.end());
        int ans=n-lcs(cp,s,n-1,n-1,dp);
        return  ans;
    }
};
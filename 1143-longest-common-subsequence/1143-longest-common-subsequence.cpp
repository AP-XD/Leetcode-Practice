class Solution {
public:
   
    int longestCommonSubsequence(string a, string b) {
        int n=a.length(),m=b.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=n;i++)
            dp[i][0]=0;
        for(int ind1=1;ind1<=n;ind1++)
        {
            for(int ind2=1;ind2<=m;ind2++)
            {
        if(a[ind1-1]==b[ind2-1])
         dp[ind1][ind2]=1+dp[ind1-1][ind2-1];
        else{
          dp[ind1][ind2]=0+max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
            }
        }
        }
       
        return dp[n][m];
    }
};
class Solution {
public:
    string shortestCommonSupersequence(string a, string b) {
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
        int len=dp[n][m],i=n,j=m;
        string ans="";
        while(i>0 && j>0)
        {
            if(a[i-1]==b[j-1])
            {
                ans+=a[i-1];
                i--;j--;
            }else if(dp[i-1][j]>dp[i][j-1])
            {
                ans+=a[i-1];
                i--;
            }
            else
            {
                 ans+=b[j-1];
                j--;
            }
        }
        while(i>0)
        {
            ans+=a[i-1];
            i--;
        }
        while(j>0)
        {
            ans+=b[j-1];
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
class Solution {
public:
//     int f(int i,int j,string &w1,string &w2)
//     {
//         if(i==0)return j;
//         if(j==0)return i;
//         if(w1[i-1]==w2[j-1])
//             return f(i-1,j-1,w1,w2);
        
//             return 1+min(f(i,j-1,w1,w2),min(f(i-1,j-1,w1,w2),f(i-1,j,w1,w2)));
        
//     }
    int minDistance(string w1, string w2) {
        int n=w1.size(),m=w2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=n;i++)dp[i][0]=i;
         for(int j=0;j<=m;j++)dp[0][j]=j;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(w1[i-1]==w2[j-1])
            dp[i][j]=dp[i-1][j-1];
        else
             dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]));
            }
        }
        return dp[n][m];
    }
};
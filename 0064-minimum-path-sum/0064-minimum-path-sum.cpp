class Solution {
public:
    int solve(vector<vector<int>>& gd,int x,int y,vector<vector<int>>&dp)
    {
       if(dp[x][y]!=-1)
           return dp[x][y];
        if(x==0 && y==0)
        {
            return gd[x][y];
        }
        int ans1,ans2;
        ans1=ans2=INT_MAX;
        if(x>0)
           ans1=gd[x][y]+solve(gd,x-1,y,dp);
        if(y>0)
           ans2=gd[x][y]+solve(gd,x,y-1,dp);
        return dp[x][y]=min(ans1,ans2);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int sum=0;
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n+1,-1));
        return solve(grid,m-1,n-1,dp);
    }
};
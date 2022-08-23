class Solution 
{

    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code herel
        int n=grid.size(),m=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vi(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {q.push({{i,j},0});
                vi[i][j]=2;}
                else
                {
                    vi[i][j]=0;
                }
            }
        }
        int t=0,maxt=0;
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            maxt=max(maxt,t);
            q.pop();
            int k[]={-1,0,1,0},l[]={0,1,0,-1};
            for(int i=0;i<4;i++)
        {
            int nr=r+k[i],nc=c+l[i];
            if(nr>=0 && nc>=0 && nr<grid.size() && nc<grid[0].size() && grid[nr][nc]==1 && vi[nr][nc]!=2)
            {q.push({{nr,nc},t+1});
            vi[nr][nc]=2;}
        }
        }for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && vi[i][j]!=2)
                return -1;
            }
        }return maxt;
        
    }
};

class Solution {
    private:
   
    void bfs(int r,int c,vector<vector<int>> &vi,vector<vector<char>> &grid)
    {
         int k[]={-1,0,1,0},l[]={0,1,0,-1};
        vi[r][c]=1;
        queue<pair<int,int>> q;
        q.push({r,c});
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                   
                    int nr=row+k[i],nc=col+l[i];
                    if(nr>=0 && nc>=0 && nr<grid.size() && nc<grid[0].size() && grid[nr][nc]=='1' && !vi[nr][nc])
                    {
                        vi[nr][nc]=1;
                    q.push({nr,nc});
                    }
                }
            }
        }
        
  public:
    // Function to find the number of islands.
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n=grid.size(),m=grid[0].size(),ans=0;
        vector<vector<int>> vi(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vi[i][j] && grid[i][j]=='1')
                {
                    ans++;
                    bfs(i,j,vi,grid);
                }
            }
        }
        return ans;
    }
};
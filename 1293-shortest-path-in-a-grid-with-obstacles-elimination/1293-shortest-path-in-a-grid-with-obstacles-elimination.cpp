class Solution {
public:
    int shortestPath(vector<vector<int>>& gd, int k) {
        int m=gd.size(),n=gd[0].size();
        vector<vector<int>>vis(m,vector<int>(n,-1));
        
        queue<vector<int>>q;
        q.push({0,0,0,k});
        while(!q.empty())
        {
            auto t=q.front();
            q.pop();
            int x=t[0],y=t[1];

            if(x>=m || y>=n || x<0 || y<0)
                continue;
            if(x==m-1 && y==n-1)
                return t[2];
            if(gd[x][y]==1)
            {
                if(t[3]>=1)
                    t[3]--;
                else
                    continue;
            }
            if(vis[x][y]!=-1 && vis[x][y]>=t[3])
                continue;
            vis[x][y]=t[3];
            q.push({x+1,y,t[2]+1,t[3]});
            q.push({x,y+1,t[2]+1,t[3]});
            q.push({x-1,y,t[2]+1,t[3]});
            q.push({x,y-1,t[2]+1,t[3]});
            
        }
        return -1;
    }
};
class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        n=len(grid)
        m=len(grid[0])
        q=[]
        vis=[[0]*m for _ in range(n)]
        for i in range(n):
            for j in range(m):
                if grid[i][j]==2:
                    q.append([i,j,0])
                    vis[i][j]=2
        maxt=0
        delrow=[-1,0,1,0]
        delcol=[0,1,0,-1]
        while q:
            r,c,t=q.pop(0)
            maxt=max(maxt,t)
            for i in range(4):
                nr=delrow[i]+r
                nc=delcol[i]+c
                if nr>=0 and nc>=0 and nr<n and nc<m and grid[nr][nc]==1 and vis[nr][nc]!=2:
                    vis[nr][nc]=2
                    q.append([nr,nc,t+1])
        for i in range(n):
            for j in range(m):
                if grid[i][j]==1 and vis[i][j]==0:
                    return -1
        return maxt
        
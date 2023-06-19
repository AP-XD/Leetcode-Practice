class Solution:
    def numEnclaves(self, grid: List[List[int]]) -> int:
        n=len(grid)
        m=len(grid[0])
        vis=[[0]*m for _ in range(n)]
        q=[]
        for i in range(n):
            for j in range(m):
                if i==0 or j==0 or i==n-1 or j==m-1:
                    if grid[i][j]:
                        vis[i][j]=1
                        q.append([i,j])
        dr=[-1,0,1,0]
        dc=[0,1,0,-1]
        while q:
            r,c=q.pop(0)
            for i in range(4):
                nr=dr[i]+r
                nc=dc[i]+c
                if nr>=0 and nc>=0 and nr<n and nc<m and grid[nr][nc]==1 and not vis[nr][nc]:
                    vis[nr][nc]=1
                    q.append([nr,nc])
        c=0
        for i in range(n):
            for j in range(m):
                if grid[i][j] and not vis[i][j]:
                    c+=1
        return c
                    
                    
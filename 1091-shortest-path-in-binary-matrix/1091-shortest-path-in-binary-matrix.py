class Solution:
    def shortestPathBinaryMatrix(self, grid: List[List[int]]) -> int:
        n=len(grid)
        m=len(grid[0])
        src=[0,0]
        dest=[n-1,m-1]
        dist=[[1e9]*m for _ in range(n)]
        dist[src[0]][src[1]]=0
        q=[]
        if grid[0][0]==1 or grid[n-1][m-1]==1:
            return -1
        q.append([1,src[0],src[1]])
        delrow=[-1,-1,0,1,1,1,0,-1]
        delcol=[0,1,1,1,0,-1,-1,-1]
        while q:
            # print(q)
            d,row,col=q.pop(0)
            if row==dest[0] and col==dest[1]:
                return d
            for i in range(8):
                nr=row+delrow[i]
                nc=col+delcol[i]
                if nr>=0 and nc>=0 and nr<n and nc<m and grid[nr][nc]==0:
                    if 1+d<dist[nr][nc]:
                        dist[nr][nc]=1+d
                        q.append([1+d,nr,nc])
                        
        return -1

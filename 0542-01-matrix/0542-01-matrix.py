class Solution:
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
        n=len(mat)
        m=len(mat[0])
        vis=[[-1]*m for _ in range(n)]
        q=[]
        for i in range(n):
            for j in range(m):
                if mat[i][j]==0:
                    vis[i][j]=0
                    q.append([i,j,0])
        print(q)
        dr=[-1,0,1,0]
        dc=[0,1,0,-1]
        while q:
            r,c,s=q.pop(0)
            for i in range(4):
                nr=r+dr[i]
                nc=c+dc[i]
                if nr>=0 and nc>=0 and nr<n and nc<m and vis[nr][nc]==-1 and mat[nr][nc]==1:
                    vis[nr][nc]=s+1
                    q.append([nr,nc,s+1])
            # print(q)
        return vis
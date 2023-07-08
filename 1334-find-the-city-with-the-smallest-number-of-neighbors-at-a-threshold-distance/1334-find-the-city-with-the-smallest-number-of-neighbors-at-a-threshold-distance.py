class Solution:
    def findTheCity(self, n: int, edges: List[List[int]], threshold: int) -> int:
        m=n;
        matrix=[[10**9]*m for _ in range(n)]
        for i in range(n):
                    matrix[i][i]=0
        for u,v,w in edges:
            matrix[u][v]=w
            matrix[v][u]=w
        for k in range(n):
            for i in range(n):
                for j in range(m):
                    if matrix[i][k]==10**9 or matrix[k][j]==10**9:
                        continue
                    matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j])
        maxi=10**9
        count=0
        ans=-1
        for i in range(n):
            for j in range(m):
                if matrix[i][j]<=threshold:
                    count+=1
            if count<=maxi:
                maxi=count
                ans=i
            count=0
        return ans
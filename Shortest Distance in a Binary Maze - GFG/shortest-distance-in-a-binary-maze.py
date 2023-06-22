#User function Template for python3

from typing import List

class Solution:
    
    def shortestPath(self, grid: List[List[int]], src: List[int], dest: List[int]) -> int:
        n=len(grid)
        m=len(grid[0])
        # code here
        dist=[[1e9]*m for _ in range(n)]
        dist[src[0]][src[1]]=0
        q=[]
        q.append([0,src[0],src[1]])
        delrow=[-1,0,1,0]
        delcol=[0,1,0,-1]
        while q:
            # print(q)
            d,row,col=q.pop(0)
            if row==dest[0] and col==dest[1]:
                return d
            for i in range(4):
                nr=row+delrow[i]
                nc=col+delcol[i]
                if nr>=0 and nc>=0 and nr<n and nc<m and grid[nr][nc]==1:
                    if 1+d<dist[nr][nc]:
                        dist[nr][nc]=1+d
                        q.append([1+d,nr,nc])
                        
        return -1

#{ 
 # Driver Code Starts
#Initial Template for Python 3

         
if __name__=="__main__":
    for _ in range(int(input())):
        n,m=map(int,input().strip().split())
        grid=[]
        for i in range(n):
            grid.append([int(i) for i in input().strip().split()])
        source = [0] * 2
        source[0], source[1] = map(int,input().strip().split())
        destination = [0] * 2
        destination[0], destination[1] = map(int,input().strip().split())
        obj=Solution()
        print(obj.shortestPath(grid, source, destination))
# } Driver Code Ends
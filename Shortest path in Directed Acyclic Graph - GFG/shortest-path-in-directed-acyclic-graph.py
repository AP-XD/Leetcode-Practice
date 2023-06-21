#User function Template for python3

from typing import List
import sys
class Solution:
    def shortestPath(self, n : int, m : int, edges : List[List[int]]) -> List[int]:
        adj=[[] for _ in range(n)]
        for i in range(m):
            u=edges[i][0]
            v=edges[i][1]
            w=edges[i][2]
            adj[u].append([v,w])
        vis=[0]*n
        stack=[]
        def dfs(node):
            vis[node]=1
            for i,w in adj[node]:
                if not vis[i]:
                    dfs(i)
            
            stack.append(node)
        for i in range(n):
            if not vis[i]:
                dfs(i)
            
        dist=[1e9 for _ in range(n)]
        dist[0]=0
        while stack:
            node=stack.pop()
            for i,w in adj[node]:
                if dist[node]+w<dist[i]:
                    dist[i]=dist[node]+w
            
        for i in range (n):
            if dist[i]==1e9:
                dist[i]=-1
        return dist
        pass


#{ 
 # Driver Code Starts
#Initial Template for Python 3

from typing import List




class IntMatrix:
    def __init__(self) -> None:
        pass
    def Input(self,n,m):
        matrix=[]
        #matrix input
        for _ in range(n):
            matrix.append([int(i) for i in input().strip().split()])
        return matrix
    def Print(self,arr):
        for i in arr:
            for j in i:
                print(j,end=" ")
            print()



class IntArray:
    def __init__(self) -> None:
        pass
    def Input(self,n):
        arr=[int(i) for i in input().strip().split()]#array input
        return arr
    def Print(self,arr):
        for i in arr:
            print(i,end=" ")
        print()


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n,m=map(int,input().split())
        
        
        edges=IntMatrix().Input(m, 3)
        
        obj = Solution()
        res = obj.shortestPath(n, m, edges)
        
        IntArray().Print(res)
# } Driver Code Ends
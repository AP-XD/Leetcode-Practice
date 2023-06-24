#User function Template for python3
#User function Template for python3

from typing import List
from collections import defaultdict as dd
import sys
from heapq import *
class Solution:
    def countPaths(self, n: int, roads: List[List[int]]) -> int:
        #Your code here
        
        graph = dd(list)
        for u,v,t in roads:
            graph[u].append([v,t])
            graph[v].append([u,t])
            
        ways = [0 for i in range(n)]
        dist = [1e10 for i in range(n)]
        mod = 10**9+7
        q = []
        heapify(q)
        q.append([0,0])
        ways[0] = 1
        dist[0] = 0
        while q:
            time,node = heappop(q)
            for adj,t in graph[node]:
                if time + t < dist[adj]:
                    ways[adj] = ways[node]
                    dist[adj] = time + t
                    heappush(q,[dist[adj],adj])
                elif time + t == dist[adj]:
                    ways[adj] = (ways[adj]+ways[node])%mod
        return [0,ways[n-1]%mod][dist[n-1]!=1e9]

#{ 
 # Driver Code Starts
#Initial Template for Python 3

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
        
        
        adj=[]
        
        for i in range(m):
            tmp =[]
            x,y,z=map(int,input().split())
            tmp.append(x)
            tmp.append(y)
            tmp.append(z)
            adj.append(tmp)
            
        
        
        
       
        obj = Solution()
        res = obj.countPaths(n, adj)
        
        print(res)
        

# } Driver Code Ends
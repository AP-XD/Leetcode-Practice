#User function Template for python3
from typing import List

class Solution:
    def CheapestFLight(self,n,flights,src,dst,k):
        adj=[[] for _ in range(n)]
        for i in flights:
            u=i[0]
            v=i[1]
            w=i[2]
            adj[u].append([v,w])
        q=[]
        q.append([0,src,0])
        dist=[1e9 for _ in range(n)]
        dist[src]=0
        
        while q:
            stops,node,d=q.pop(0)
            if stops>k:
                continue
            for adjnode,weight in adj[node]:
               if weight+d<dist[adjnode]:
                   dist[adjnode]=weight+d
                   q.append([stops+1,adjnode,dist[adjnode]])
        if dist[dst]==1e9:
            return -1
        return dist[dst]
        pass




#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    test_cases = int(input())
    for _ in range (test_cases):
        n,edge=map(int,input().split())
        flights=[]
        for _ in range(edge):
            temp=list(map(int,input().split()))
            flights.append(temp[:])
        src=int(input())
        dst=int(input())
        k=int(input())
        obj=Solution()
        res=obj.CheapestFLight(n,flights,src,dst,k)
        print(res)

        
        
# } Driver Code Ends
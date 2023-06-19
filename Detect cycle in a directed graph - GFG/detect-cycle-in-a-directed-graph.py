#User function Template for python3


class Solution:
    
    #Function to detect cycle in a directed graph.
    def isCyclic(self, V, adj):
        # code here
        
        # pathvis=[0]*V
        # vis=[0]*V
        # def dfs(node):
        #     vis[node]=1
        #     pathvis[node]=1
        #     for i in adj[node]:
        #         if not vis[i]:
        #             if(dfs(i)):
        #                 return True
        #         elif pathvis[i]:
        #             return True
        #     pathvis[node]=0
        #     return False
        # for i in range(V):
        #     if dfs(i)==True:
        #         return True
        # return False
        
        # TOPO
        
        ind=[0]*V
        q=[]
        
        for i in range(V):
            for j in adj[i]:
                ind[j]+=1
        for i in range(V):
            if ind[i]==0:
                q.append(i)
        stack=[] 
        while q:
            node=q.pop(0)
            stack.append(node)
            for i in adj[node]:
                ind[i]-=1
                if ind[i]==0:
                    q.append(i)
        if len(stack)==V:
            return False
        return True


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import sys
sys.setrecursionlimit(10**6)
        
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        V,E = list(map(int, input().strip().split()))
        adj = [[] for i in range(V)]
        for i in range(E):
            a,b = map(int,input().strip().split())
            adj[a].append(b)
        ob = Solution()
        
        if ob.isCyclic(V, adj):
            print(1)
        else:
            print(0)
# } Driver Code Ends
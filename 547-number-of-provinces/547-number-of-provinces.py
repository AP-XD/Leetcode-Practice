class Solution:
    def findCircleNum(self, adj: List[List[int]]) -> int:
        V=len(adj)
        vi=[0 for i in range(V)]
        
        def dfs(vi,adj,node):
            vi[node]=1
            for i in range(V):
                if adj[node][i]==1:
                    if not vi[i]:
                        dfs(vi,adj,i)
        ans=0
        for i in range(V):
            if not vi[i]:
                dfs(vi,adj,i)
                ans+=1
        return ans  
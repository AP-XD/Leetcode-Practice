class Solution:
    def eventualSafeNodes(self, adj: List[List[int]]) -> List[int]:
        V=len(adj)
        pathvis=[0]*V
        vis=[0]*V
        check=[0]*V
        def dfs(node):
            vis[node]=1
            pathvis[node]=1
            check[node]=0
            for i in adj[node]:
                if not vis[i]:
                    if(dfs(i)):
                        check[node]=0
                        return True
                elif pathvis[i]:
                    check[node]=0
                    return True
            check[node]=1
            pathvis[node]=0
            return False
        for i in range(V):
            if not vis[i]:
                dfs(i)
        sf=[]
        for i in range(V):
            if check[i]==1:
                sf.append(i)
        return sf

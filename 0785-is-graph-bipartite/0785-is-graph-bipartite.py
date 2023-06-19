class Solution:
    
    
    def isBipartite(self, adj: List[List[int]]) -> bool:
        V=len(adj)
        color=[-1]*V
        def dfs(node,col):
            color[node]=col
            for k in adj[node]:
                if color[k]==-1:
                    if dfs(k,not(col))==False:
                         return False
                elif color[k]==col:
                    return False
            return True
        for i in range(V):
            if color[i]==-1:
                if(dfs(i,0)==False):
                    return False
        return True
        
                
        
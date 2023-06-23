class Solution:
    def findCheapestPrice(self, n: int, flights: List[List[int]], src: int, dst: int, k: int) -> int:
        adj=[[] for _ in range(n)]
        for i in flights:
            adj[i[0]].append([i[1],i[2]])
        dist=[1e9]*n
        dist[src]=0
        q=[]
        q.append([0,src,0])
        while q:
            stops,node,weight=q.pop(0)
            
            for adjnode,w in adj[node]:
                if w+weight<dist[adjnode] and stops<=k:
                    dist[adjnode]=w+weight
                    q.append([stops+1,adjnode,dist[adjnode]])
        if dist[dst]==1e9:
            return -1
        return dist[dst]
                    
class Solution:
    
    
    def isBipartite(self, graph: List[List[int]]) -> bool:
        n=len(graph)
        m=len(graph[0])
        color=[-1]*n
        def check(start):
            q=[]
            n=len(graph)
            m=len(graph[0])

            color[start]=0
            q.append(start)
            while q:
                node=q.pop(0)
                for i in graph[node]:
                    if color[i]==-1:
                        color[i]= not(color[node])
                        q.append(i)
                    elif color[i]==color[node]:
                        return False
            return True
        for i in range(n):
            if color[i]==-1:
                if not check(i):
                    return False
        return True
        
                
        
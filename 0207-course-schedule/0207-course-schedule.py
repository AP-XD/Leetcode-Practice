from collections import defaultdict
class Solution:
    def canFinish(self, V: int, prerequisites: List[List[int]]) -> bool:
        

        adj = defaultdict(list)
        for i in prerequisites:
            adj[i[0]].append(i[1])
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
            return True
        return False

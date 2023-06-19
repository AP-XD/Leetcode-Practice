class Solution:
    def findOrder(self, V: int, prerequisites: List[List[int]]) -> List[int]:
        adj = [[] for i in range(V)]
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
        ans=[]
        if len(stack)==V:
            while stack:
                ans.append(stack.pop())
            return ans
        return []

#User function Template for python3

from typing import List
 
class Solution:
    
    def minimumMultiplications(self, arr : List[int], start : int, end : int) -> int:
        # code here
        dist=[1e9]*100000
        dist[start]=0
        q=[]
        mod=100000
        q.append([start,0])
        while q:
            snode,steps=q.pop(0)
            for i in arr:
                num=(i*snode)%mod
                
                if steps+1<dist[num]:
                    # print(steps)
                    dist[num]=1+steps
                    if num==end:
                        return steps+1
                    q.append([num,steps+1])
        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    for _ in range(int(input())):
        n = int(input())
        arr = [int(x) for x in input().strip().split()]
        start, end = list(map(int,input().split()))
        obj=Solution()
        print(obj.minimumMultiplications(arr, start, end))
# } Driver Code Ends
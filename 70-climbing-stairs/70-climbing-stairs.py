class Solution:
    def climbStairs(self, n: int) -> int:
        a,b=1,1
        for i in range (n):
            t=a
            a=a+b
            b=t
            
        return b
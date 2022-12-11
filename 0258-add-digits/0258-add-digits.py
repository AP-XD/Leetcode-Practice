class Solution:
    def addDigits(self, num: int) -> int:
        s=0
        n=num
        while(len(str(n))>1):
            for i in str(n):
                s+=int(i)
            n=s
            s=0
        return n
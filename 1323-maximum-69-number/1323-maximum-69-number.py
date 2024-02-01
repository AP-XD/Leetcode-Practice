class Solution:
    def maximum69Number (self, num: int) -> int:
        c=0
        n=str(num)
        k=0
        for i in str(num):
            
            if i=='6':
                k=1
                break
            c+=1
        if k==1:
            ans=n[0:c]+'9'+n[c+1:]
        else:
            ans=n
        return int(ans)
        
                
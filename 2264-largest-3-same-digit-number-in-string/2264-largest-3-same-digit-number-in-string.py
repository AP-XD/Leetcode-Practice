class Solution:
    def largestGoodInteger(self, num: str) -> str:
        maxi=0
        flag=0
        for i in range(len(num)-2):
            s=int(num[i:i+3])
            k=int(num[i+2])
            
            if num[i:i+3]=="000":
                flag=1
                continue
            if k==0:
                continue
            if s/k==111:
                maxi=max(maxi,s)
        if maxi==0 and flag==1:
            return "000"
        if maxi==0:
            return ""
        return str(maxi)
            
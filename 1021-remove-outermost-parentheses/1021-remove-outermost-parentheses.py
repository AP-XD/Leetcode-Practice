class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        c=0
        ans=""
        for i in s:
            if i=='(':
                if c>0:
                    ans+='('
                c+=1
            else:
                c-=1
                if c>0:
                    ans+=')'
        return ans
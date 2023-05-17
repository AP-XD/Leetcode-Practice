class Solution:
    def largestOddNumber(self, s: str) -> str:
        ans=""
        rev=s[::-1]
        for i in range(len(s)):
            if int(rev[i])%2==1:
                ans=s[0:len(s)-i]
                break
        return ans
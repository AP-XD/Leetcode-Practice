class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
       
        res=""
        m = 0
        for i in s:
            if i in res:
                res=res[res.index(i)+1:]+i
                

            else:
                res += i
            m = max(m, len(res))
        return (m)
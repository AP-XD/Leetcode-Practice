class Solution:
    def beautySum(self, s: str) -> int:
        ans = 0 
        for i in range(len(s)):
            freq = [0]*26
            for j in range(i, len(s)):
                freq[ord(s[j])-97] += 1
                ans += max(freq) - min(x for x in freq if x)
        return ans 
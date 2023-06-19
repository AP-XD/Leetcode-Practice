class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        maxi=0
        sum=0
        for i in gain:
            sum+=i
            maxi=max(sum,maxi)
        return maxi
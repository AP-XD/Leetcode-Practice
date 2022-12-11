class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        s=0
        for i in nums:
            s+=i
        k=len(nums)
        ans=k*(k+1)//2-s
        return ans
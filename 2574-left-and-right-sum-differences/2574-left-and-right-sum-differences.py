class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        l=[0 for i in range(len(nums))]
        r=[0 for i in range(len(nums))]
        ans=[0 for i in range(len(nums))]
        for i in range(1,len(nums)):
            k=len(nums)-i-1
            l[i]=l[i-1]+nums[i-1]
            r[k]=r[k+1]+nums[k+1]
        for i in range(0,len(nums)):
            ans[i]=abs(l[i]-r[i])
        return ans
class Solution:
    def longestConsecutive(self, nums):
        if(len(nums)<=1):
            return len(nums)
        nums.sort()
        c=0
        maxi=-1*float("inf")
        for i in range(len(nums)-1):
            if nums[i+1]==nums[i]+1:
                c+=1
            elif nums[i+1] == nums[i]:
                pass
            else:
                c=0
            maxi=max(maxi,c)
        return maxi+1
        
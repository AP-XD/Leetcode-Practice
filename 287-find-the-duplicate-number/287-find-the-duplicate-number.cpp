class Solution {
public:
   int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int xr,ans;
        for(int i=0;i<nums.size()-1;i++)
        {
            xr=nums[i]^nums[i+1];
            if(xr==0)
            {
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};
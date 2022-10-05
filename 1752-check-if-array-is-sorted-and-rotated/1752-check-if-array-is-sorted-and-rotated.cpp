class Solution {
public:
    bool check(vector<int>& nums) {
        int c=0;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]>nums[(i+1)%(nums.size())])
               c++;
       }
        return c<=1;
    }
};
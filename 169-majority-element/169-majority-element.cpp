class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,mel=nums[0];
        for(auto i:nums)
        {
            if(c!=0)
            {
                if(i==mel)
                    c++;
                else
                    c--;
            }
            else
            {
                mel=i;
                c=1;
            }
        }
        return mel;
    }
};
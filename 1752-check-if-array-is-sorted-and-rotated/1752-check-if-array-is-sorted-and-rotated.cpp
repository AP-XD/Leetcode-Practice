class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>n2=nums;
        for(auto i:n2)
        {
            nums.push_back(i);
        }
        int mxc=0,maxc=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<=nums[i+1])
                mxc++;
            else
            {mxc=0;}
            maxc=max(maxc,mxc);
        }
        // cout<<maxc;
        if(maxc>=n2.size()-1)return true;
        else
            return false;
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int f=0,p=1;
        for(auto i:nums)
        {
            if(i==0)
                f++;
            else
                p*=i;
        }
        vector<int>ans;
        for(auto i:nums)
        {
            if(f>1)
                ans.push_back(0);
            else if(f==1)
            {
                if(i==0)
                    ans.push_back(p);
                else
                    ans.push_back(0);
            }
            else
                ans.push_back(p/i);
        }
        return ans;
    }
};
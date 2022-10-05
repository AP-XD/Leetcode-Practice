class Solution {
#include<bits/stdc++.h>
    public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int k=0;
        vector<bool>ans;
        for(auto i:nums)
        {
            k=(k*2+i)%5;
                ans.push_back(k==0);
           
        }
        return ans;
    }
};
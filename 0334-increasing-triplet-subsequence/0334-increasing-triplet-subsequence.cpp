class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a=INT_MAX,b=INT_MAX;
        for(auto i:nums)
        {
            if(a>=i)a=i;
            else if(b>=i)b=i;
            else return true;
        }
        return false;
    }
};
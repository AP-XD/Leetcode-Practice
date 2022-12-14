class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        return find(nums.begin(),nums.end(),*max_element(nums.begin(),nums.end()))-nums.begin();
    }
};
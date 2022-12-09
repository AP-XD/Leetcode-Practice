class Solution {
public:
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums[m+n];
        // for(int i=0;i<m;i++)
        // {
        //     nums[k++]=nums1[i];
        // }
        int k=m;
        for(int i=0;i<n;i++)
        {
            nums1[k++]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};
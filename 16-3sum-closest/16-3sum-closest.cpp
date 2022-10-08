class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        long long ans;
        long long mini = INT_MAX;
        for(int i=0;i<n;i++){
            int j = i+1,k = n-1;
            while(j<k){
                if(abs(target - (nums[i]+nums[j]+nums[k]))<mini){
                    mini = abs(target - (nums[i]+nums[j]+nums[k]));
                    ans = nums[i]+nums[j]+nums[k];
                    
                }
                if(nums[i]+nums[j]+nums[k]<target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};
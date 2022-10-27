class Solution {
public:
    vector<vector<int>> fourSum(vector<int> nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        set<vector<int>> res;
        if(n < 4) return ans;
        
        sort(begin(nums),end(nums));
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int l = j+1 , r = n-1;
                long long req = (long long)(target)-nums[i]-nums[j];
                while(l < r){
                    if((nums[l]+nums[r]) == req){
                        res.insert({nums[i],nums[j],nums[l],nums[r]});
                        if(nums[l] == nums[l+1]) l++;
                        else r--;
                    }
                    else if((nums[l]+nums[r]) > req) r--;
                    else l++;
                }
            }
        }
        
        for(auto i : res){
            ans.push_back(i);
        }
        
        return ans;
    }
};
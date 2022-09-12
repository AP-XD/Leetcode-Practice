class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans=nums,k;
        sort(nums.begin(),nums.end());
        
        int a=0,b=nums.size()-1,flag=0;
        while(a<b && flag!=1)
        {
            if(nums[a]+nums[b]==target)
            {
                flag=1;
                break;
            }
            else if(nums[a]+nums[b]>target)
                b--;
            else
                a++;
                
                
        }
        for(int i=0;i<ans.size();i++){
            if(nums[a]==ans[i] || nums[b]==ans[i])
                k.push_back(i);
        }
        return k;
    }
};
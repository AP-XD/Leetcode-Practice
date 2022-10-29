class Solution {
public:
    bool canJump(vector<int>& nums) {
        int minjump=0;
        for(int i=nums.size()-2;i>=0;i--)
        {
            minjump++;
            if(nums[i]>=minjump)
                minjump=0;
        }
        return minjump==0?true:false;
    }
};

/* 
        if(curr == nums.size()-1) {
            ans=true;
            return;
        }
        if(curr>nums.size()-1){
            ans = true;
            return;
        };
        if(nums[curr]==0)
        {
            return;
        }
        for(int i = 1; i <=nums[curr];i++) {
            if(ans==true) {
                return;
            }
             jump(nums,ans,curr+i);
        }
    }
    bool canJump(vector<int>& nums) {
        bool ans = false;
        jump(nums,ans);
        return ans;
        */
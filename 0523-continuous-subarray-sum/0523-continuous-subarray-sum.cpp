class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
    //     // prefixsum=[23,25,31,35,42];
    //     // 5,2,4,0,1   
        if(nums.size()==1)
            return false;
    //     vector<int>pre(nums.size(),0);
    //     pre[0] = nums[0];
    //     for(int i = 1; i < nums.size(); i++) {
    //         pre[i] = nums[i] + pre[i-1]; 
    //     }
    //     // if(pre[nums.size()-1]==0)
    //     //     return false;
    //     int l= 0,r = nums.size()-1;
    //     for(r; r>0;r--) {
    //         for(l=0; l <r; l++) {
    //             int sum = pre[r] - pre[l]+ nums[l];
    //             if(sum%k==0)
    //                 return true;
    //         }
    //     }
    //     return false;
    // }
         vector<int>pre(nums.size(),0);
        pre[0] = nums[0]%k;
        for(int i = 1; i < nums.size(); i++) {
            pre[i] = ((nums[i])%k + pre[i-1])%k; 
        }
        // 1 3 1
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(pre[i]==0 && i>0)return true;
            if(mp.find(pre[i])!=mp.end())
            {
                
                if(i-mp[pre[i]]>1)return true;
                
            }else
            {
                mp[pre[i]]=i;
            }
        }
        return false;
        
    }
};
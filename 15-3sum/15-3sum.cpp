class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int s=0,l,r,pl,pr;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
             break;
            
            if(i>0 && nums[i-1]==nums[i])continue;
            
            l=i+1,r=nums.size()-1;
            while(l<r)
            {
                
                    s=nums[r]+nums[l]+nums[i];
                    if(s==0)
                    { ans.push_back({nums[i],nums[l],nums[r]}); pl=nums[l],pr=nums[r];
                 while(l<r && nums[r]==pr)
                        r--;
                 while(l<r && nums[l]==pl)
                        l++;}
                    
                
                    else if(s<0)
                    l++;
                    else if(s>0)
                    r--;
               
            }
            
        }
        return ans;
    }
};
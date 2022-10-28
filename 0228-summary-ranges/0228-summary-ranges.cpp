class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        nums.push_back(INT_MAX);
        int n=nums.size();
        
        // vector<pair<int,int>>vp;
        vector<string>vs;
        if(n==3 && nums[n-2]-1==nums[n-3])
        {string k=to_string(nums[n-3])+"->"+to_string(nums[n-2]);
         vs.push_back(k);
            return vs;
        }
        int l,h,f=0;
        l=nums[0];
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1]-1)
            {
                h=nums[i+1];
                f=1;
            }
        //     else
        //     {
        //         if(f==1)
        //             vp.push_back({l,h});
        //         if(f==0)
        //             vp.push_back({l,l});
        //         l=nums[i+1];
        //         f=0;
        //     }
        // }
        // for(auto i:vp)
        // {
        //     cout<<i.first<<" "<<i.second<<endl;
        // }return vs;
            else
            {
                if(f==1)
                    vs.push_back(to_string(l)+"->"+to_string(h));
                if(f==0)
                    vs.push_back(to_string(l));
                l=nums[i+1];
                f=0;
            }
        }
        return vs;
    }
};
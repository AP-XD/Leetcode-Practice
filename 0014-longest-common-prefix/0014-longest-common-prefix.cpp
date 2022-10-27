#include<bits/stdc++.h>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans="";
        char c;
        int n=strs.size(),f=1;
        if(n==1)
        {
            return strs[0];
        }
        int checkind=0,minl=INT_MAX;
        for(auto i:strs)
        {
            minl>i.size()?minl=i.size():minl=minl;
        }
        int j=0;
        while(j<minl && f==1)
        {
            int k=0;
            if(f==1)
            for(auto i:strs)
            {
                k++;
                if(k==1)
                {
                    c=i[checkind];
                }
                else if(k<n)
                {
                    if(c!=i[checkind])
                    {f=0;break;}
                }
                else
                {
                if(c!=i[checkind])
                {f=0;break;}
                else
                    ans+=c;
                }
            }checkind++;
                
            
            j++;
                
        }
        return ans;
//         }
        
//         // vector<int>temp(26,0);
//         // for(int i = 0; i < strs.size(); i++) {
//         //     temp[strs[i] - 'a'] = 1;
//         // }

        
    }
};
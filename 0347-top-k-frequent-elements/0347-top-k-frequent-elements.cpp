class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp1;
        map<int,vector<int>>mp2;
        vector<int> v;
        for(auto i:nums)
        {
            mp1[i]++;
        }
        for(auto i:mp1)
        {
            mp2[i.second].push_back(i.first);
        }
        int j=0;
         for (auto it = mp2.rbegin(); it != mp2.rend(); it++) 
        {
           
             for(auto i:it->second)
             { if(j==k)
                break;
                 v.push_back(i);
              j++;}
            
        }return v;
    }
};
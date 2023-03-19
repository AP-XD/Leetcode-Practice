class Solution {
public:
    static bool comp(pair<char,int>& a,pair<char,int>& b)
    {
        return  a.second>b.second ;
    }
    string frequencySort(string s) {
        map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        vector<pair<char,int>>vp;
        for(auto i:mp)
        {
            vp.push_back({i.first,i.second});
        }
        sort(vp.begin(),vp.end(),comp);
        string ans="";
        for(auto i:vp)
        {
            for(int i1=1;i1<=i.second;i1++)
            {
                ans+=i.first;
            }
        }
        return ans;
    }
};
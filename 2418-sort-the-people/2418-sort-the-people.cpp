class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>mp;
        int n=names.size();
        for(int i=0;i<n;i++)
        {
            mp[heights[i]]=names[i];
        }
        vector<string>ans;
        for(auto i:mp)
        {
             ans.insert(ans.begin() , i.second);
        }return ans;
    }
};
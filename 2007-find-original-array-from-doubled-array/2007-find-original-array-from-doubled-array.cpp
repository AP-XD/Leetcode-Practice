class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        map<int,int> mp;
        
        if(changed.size()<=1 || changed.size()%2==1)
            return ans;
        sort(changed.begin(),changed.end());
        for(auto i:changed)
        {
            mp[i]++;
           
        }
        for(int i=0;i<changed.size();i++)
        {
            if(mp[changed[i]]==0)continue;
            if(mp[changed[i]*2]==0)return {};
            mp[changed[i]]--;
            mp[changed[i]*2]--;
            ans.push_back(changed[i]);
        }return ans;
    }
};
class Solution {
public:
    int beautySum(string s) {
        int maxi=0,mini=s.length(),ans=0;
         map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp.clear();
            for(int j=i;j<s.length();j++)
            {
                maxi=0,mini=s.length();
                mp[s[j]]++;
                
                
                for(auto i:mp)
                {
                    maxi=max(maxi,i.second);
                     mini=min(mini,i.second);
                }
                ans+=maxi-mini;
              
                
            }
        }
        return ans;
        
    }
};
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<int,string>mp;
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        vector<string>ans;
        travel(digits,mp,ans);
        return ans;
    }
    void travel(string d,map<int,string>mp, vector<string>&ans,int i=0,string curr="")
    {
        if(i>d.length()-1)return;
        if(i==d.length()-1)
        {
            for(int k=0;k<mp[d[i]-'0'].length();k++)
            {
                ans.push_back(curr+mp[d[i]-'0'][k]);
            }
            return;
        }
        for(int k=0;k<mp[d[i]-'0'].length();k++)
            {
                 travel(d,mp,ans,i+1,curr+mp[d[i]-'0'][k]);
            }
       
        
    }
};
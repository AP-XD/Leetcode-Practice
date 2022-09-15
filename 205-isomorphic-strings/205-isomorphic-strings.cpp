class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> m,mp;
        int k=0;
        int g=1,f=1;
        
        for(auto i:s)
        {
            if(!m[i])
            m[i]=t[k++];
            else
                k++;
        }
        k=0;
        for(auto i:s)
        {
            if(m[i]!=t[k++])
                {f=0;break;}
        }
        k=0;
        for(auto i:t)
        {
            if(!mp[i])
            mp[i]=s[k++];
            else
                k++;
        }
        k=0;
        for(auto i:t)
        {
            if(mp[i]!=s[k++])
            {g=0;break;}
        }
        if(f==0 || g==0)
            return false;
        else
            return true;
    }
};
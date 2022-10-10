class Solution
{
    public:
        string breakPalindrome(string p)
        {
            if (p.length() == 1)
            {
                return "";
            }
            else
            {
                string c=p;
                for (int i = 0; i < p.length(); i++) {
                    if(p[i]!='a')
                    {p[i]='a';break;}
                    else if(i==p.length()-1 && p[i]=='a')
                        p[i]='b';
                }
                string cp=p;
                reverse(p.begin(),p.end());
                if(p==cp)
                {
                    
                    c[c.size()-1]='b';
                    return c;
                }
                return cp;
            }
        }
};
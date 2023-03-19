class Solution {
public:
    int check(char ch)
    {
        switch(ch)
        {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }
    
    int romanToInt(string s) 
    {
        int res=0;
        for(int i=0;i<s.length();i++)
        {
            if(check(s[i+1])>check(s[i]))
            {
                res = res + check(s[i+1]) - check(s[i]);
                i++;
                continue;
            }
            res+=check(s[i]);
        }
        return res;
    }
};
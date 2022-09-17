class Solution {
public:
    bool isPalindrome(string s1) {
         transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        string s,rev="";
        for(auto i:s1)
        {
            if((i>='a' && i<='z') || (i>='0' && i<='9'))
                s+=i;
        }rev=s;
        reverse(s.begin(),s.end());
        if(s==rev)
            return true;
        else
            return false;
    }
};
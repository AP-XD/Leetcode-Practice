class Solution {
public:
    int maxDepth(string s) {
        int d=0,maxi=0;
        for(auto i:s)
        {
            if(i=='(')
            {
                d+=1;
                if(maxi<d)maxi=d;
            }else if(i==')')
            {
                d-=1;
            }
        }
        return maxi;
    }
};
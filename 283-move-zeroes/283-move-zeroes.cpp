class Solution {
public:
    void moveZeroes(vector<int>& n) {
        int c=0;
        vector<int>ans;
        for(auto i : n)
        {
            if(i==0)
                c++;
            else
                ans.push_back(i);
        }
        for(int i=0;i<c;i++)
        {
            ans.push_back(0);
        }
        n=ans;
    }
};
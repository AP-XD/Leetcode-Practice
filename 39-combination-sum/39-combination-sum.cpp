class Solution {
public:
     vector<int>v;
    vector<vector<int>>ans;
    void csum(vector<int> c,int t,int i)
    {
        if(t==0)
        {
            ans.push_back(v);
            return;
        }
        if(t<0 || i==c.size())return;
            v.push_back(c[i]);
            csum(c,t-c[i],i);
            v.pop_back();
            csum(c,t,i+1);        
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        csum(c,t,0);
        return ans;
    }
};
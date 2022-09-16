class Solution {
public:
vector<vector<int>>ans;
    vector<int> v;
    void csum(vector<int>& c,int t,int idx)
    {
        if(t==0)
        {
            ans.push_back(v);
            return;
        }
        if(t<0 || idx==c.size())return;
        
        for(int i=idx;i<c.size();i++)
        {
            if(i>idx && c[i]==c[i-1])continue;
            // if(c[i]>t)break;
            v.push_back(c[i]);
            csum(c,t-c[i],i+1);
            v.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(),c.end());
        // vector<int> v;
        csum(c,t,0);  
        return ans;
    }
};
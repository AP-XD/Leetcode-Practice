class Solution {
public:
    int minCost(string col, vector<int>& nt) {
        int ans=0;
        for(int i=0;i<col.size()-1;i++)
        {
            if(col[i]==col[i+1])    
            {
                ans+=min(nt[i],nt[i+1]);
                nt[i+1]=max(nt[i],nt[i+1]);
                
            }
            
        }
            return ans;
    }
};
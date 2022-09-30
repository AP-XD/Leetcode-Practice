class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0,minp=1e5;
        for(auto i :prices)
        {
            minp=min(minp,i);
            maxp=max(maxp,i-minp);
        }return maxp;
    }
};
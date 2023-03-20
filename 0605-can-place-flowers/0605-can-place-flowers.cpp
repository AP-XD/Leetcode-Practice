class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int z=1,ans=0;
        for(auto i:f)
        {
            if(i==0)
            {
                z++;
            }else
            {
                ans+=(z-1)/2;
                z=0;
            }
        }
        return ans+z/2>=n;
    }
};
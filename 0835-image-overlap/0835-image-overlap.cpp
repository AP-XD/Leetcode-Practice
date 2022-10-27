class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        map<pair<int,int>,int>mp;
        vector<pair<int,int>>va,vb;
       
        for(int i=0;i<img1.size();i++)
        {
            for(int j=0;j<img1[0].size();j++)
            {
                if(img2[i][j]) {
                    vb.push_back({i,j});
                }
                if(img1[i][j]) {
                    va.push_back({i,j});
                }
            }
        }
        int ans=0;
        for(auto [i1,j1] : va) {
            for(auto [i2,j2] : vb) {
                mp[{i1-i2,j1-j2}]++;
                ans=max(ans,mp[{i1-i2,j1-j2}]);
            }
        }
        return ans;
    }
};
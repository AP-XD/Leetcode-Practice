class Solution {
public:
int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {

    vector<pair<int,int>>temp;
    for(int i = 0; i < plantTime.size(); i++) {
        temp.push_back({growTime[i],plantTime[i]});
    }
    sort(begin(temp),end(temp));
    int ans = 0;
    for(auto [g,p]: temp) {
        ans = max(ans,g)+p;
    }
    return ans;
    }
};
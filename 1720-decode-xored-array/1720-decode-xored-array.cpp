class Solution {
public:
    vector<int> decode(vector<int>& enc, int f) {
        vector<int > ans;
        ans.push_back(f);
        for(auto i:enc)
        {
            ans.push_back(f^i);
            f=f^i;
        }return ans;
    }
};


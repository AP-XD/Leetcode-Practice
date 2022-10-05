class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> map;
        int ans = 0;
        for (auto i : deck) map[i]++;
        for (auto i : map) ans = __gcd(i.second, ans);
        return ans > 1;
    }
};
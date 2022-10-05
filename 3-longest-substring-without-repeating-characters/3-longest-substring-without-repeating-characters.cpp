class Solution {
public:
    int lengthOfLongestSubstring(string str)
    {
        int n = str.size();
 
    int res = 0;
    vector<int>l(256, -1);
    int i = 0;
    for (int j = 0; j < n; j++) {
        i = max(i, l[str[j]] + 1);
        res = max(res, j - i + 1);
        l[str[j]] = j;
    }
    return res;
}
};
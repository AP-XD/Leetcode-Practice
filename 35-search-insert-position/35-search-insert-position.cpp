class Solution {
public:
    int searchInsert(vector<int>& n, int t) {
        return lower_bound(n.begin(),n.end(),t)-n.begin();
    }
};
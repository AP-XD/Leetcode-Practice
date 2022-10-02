class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int n=m.size(),p=m[0].size(),l=0,h=n*p-1,mid=l+(h-l)/2;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(m[mid/p][mid%p]==t)
                return true;
            else if(m[mid/p][mid%p]<t)
                l=mid+1;
            else
                h=mid-1;
        }
        return false;
    }
};
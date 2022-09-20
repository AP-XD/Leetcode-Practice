class Solution {
public:
    int search(vector<int>& n, int t) {
       int l=0,r=n.size()-1,mid=l+(r-l)/2,f=0;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(n[mid]>t)
                r=mid-1;
            else if(n[mid]<t)
                l=mid+1;
            else
            {
                f=1;
                break;
            }
        }
        if(f==1)
            return mid;
        else
            return -1;
    }
};
class Solution {
public:
     int findMin(vector<int> &n) {
        int l=0,h=n.size()-1;
         while(l<h)
         {
             if(n[l]<n[h])return n[l];
             int m=(l+h)/2;
             if(n[l]<=n[m])l=m+1;
             else
                 h=m;
         }
        
        return n[l];
    }
};
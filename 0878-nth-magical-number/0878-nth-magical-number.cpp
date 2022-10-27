class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
     long long position,mid,l=min(a,b),h=1e17;
        while(l<h)
        {
            mid=l+(h-l)/2;
            position=mid/a+mid/b-mid/( (a*b)/__gcd(a,b));
            if(position<n)
            {
                l=mid+1;
            }else
            {
                h=mid;
            }
        }
        long long mod=1e9+7;
        return h%mod;
          
    }
};
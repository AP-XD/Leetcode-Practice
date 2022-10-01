class Solution {
public:
    int digitSqSum(int n){
        int s=0;
        while(n>0){
            s+=((n%10)*(n%10));
            n=n/10;
        }
        return s;
    }
    
    bool isHappy(int n) {        
        int temp=n;
        while(1)
        {
            if(temp==89)
                return false;
            if(temp==1)
                return true;
            temp=digitSqSum(temp);
        }
        
    }
};
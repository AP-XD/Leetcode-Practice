class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a,b,c;
       for(int i=nums.size()-1;i>=2;i--)
       {
           a=nums[i],b=nums[i-1],c=nums[i-2];
           if(a+b<=c || b+c<=a || a+c<=b)
               continue;
           else break;
       }
       
       
            
        
        if(a+b<=c || b+c<=a || a+c<=b)
            return 0;
        return a+b+c;
    }
};
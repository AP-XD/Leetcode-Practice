class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,maxwater=0,water=0;
        while(l<r)
        {
            water=min(height[l],height[r])*(r-l);
                
            maxwater=max(maxwater,water);
            if(height[r]>height[l])
                l++;
            else
                r--;
        }
        return maxwater;
    }
};
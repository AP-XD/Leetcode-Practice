class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n1=INT_MIN,n2=INT_MIN,c1=0,c2=0;
        for(auto el:nums)
        {
            if(el==n1)c1++;
            else if(el==n2)c2++;
            else if(c1==0)
            {
                c1=1;
                n1=el;
            }
            else if(c2==0)
            {
                c2=1;
                n2=el;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        vector<int>ans;
        int k=0,l=0,n=nums.size();
        for(auto i:nums)
        {
            if(i==n1)
                k++;
            if(i==n2)
                l++;
        }
        
        if(k>n/3)
            ans.push_back(n1);
        if(l>n/3)
            ans.push_back(n2);
        return ans;
    }
};
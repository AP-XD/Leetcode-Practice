class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>>v;
        for(auto i:arr)
        {
            v.push_back({abs(x-i),i});
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(auto i:v)
        {   
            if(k==0)
                break;
            ans.push_back(i.second);
            k--;
        }   sort(ans.begin(),ans.end());  
        return ans;     
    }
};
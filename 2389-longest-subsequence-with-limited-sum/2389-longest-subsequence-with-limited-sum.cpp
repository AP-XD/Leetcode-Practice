class Solution {
public:
    vector<int> answerQueries(vector<int>& n, vector<int>& q) {
        sort(n.begin(),n.end());
        int s=0,c=0,sum=0;
        for(auto i:n)sum+=i;
        vector<int>ans;
        for(auto j:q){
            if(j>=sum)
            {
                ans.push_back(n.size());
                continue;
            }
        for(auto i:n)
        {
            s+=i;
            c++;
            if(s>j)
            {
                ans.push_back(c-1);
                s=c=0;
                break;
            }
        }
        }
        return ans;
    }
};
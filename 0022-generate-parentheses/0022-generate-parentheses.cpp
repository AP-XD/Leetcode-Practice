class Solution {
public:
    vector<string>ans;
    vector<string>generateParenthesis(int n) {
        solve("",n,n);
        return ans;
    }
    void solve(string s, int ob, int cb){
        if(ob==0 && cb==0){
            ans.push_back(s);
            return;
        }
        if(ob>0) solve(s+"(" ,ob-1,cb);
        if(cb>ob) solve(s+")" ,ob,cb-1);
    }
};
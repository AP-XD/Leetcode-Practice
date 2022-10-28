class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <string,vector<string>> mm;
        for (auto i : strs){
            string ii = i;
            sort(ii.begin(),ii.end());
            mm[ii].push_back(i);
        }
        vector <vector<string>> ans;
        for(auto i : mm){
            ans.push_back(i.second);
        }
        return ans;
        
    }  
};
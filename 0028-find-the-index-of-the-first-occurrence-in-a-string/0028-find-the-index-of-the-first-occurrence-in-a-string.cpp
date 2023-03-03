class Solution {
public:
    int strStr(string haystack, string needle) {
      if(haystack.size() < needle.size()) 
          return -1;
        int n = haystack.size();
        // int ret = -1;
        for(int i = 0; i < n; i++) {
            if(haystack[i]==needle[0]) {
                if(i+needle.size() <= n) {
                    string temp = haystack.substr(i,needle.size());
                    if(temp==needle) {
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};
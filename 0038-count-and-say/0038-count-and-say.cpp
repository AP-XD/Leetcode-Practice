class Solution {
public:
    string countAndSay(int n, string prev = "1") {
    if(n==1) return prev;
    int i=0, j, len = prev.size();
    string cur = "";
    while(i<len) {
        j=i;
        while(i<len && prev[i]==prev[j]) i++;
        cur += to_string(i-j) + prev[j];
    }
    return countAndSay(n-1, cur);
}
}; 
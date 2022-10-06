class TimeMap {
    map<string,map<int,string>>str;
    
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        str[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
        for(int t=timestamp;t>0;t--){
            if(str[key].find(t)!=str[key].end())return str[key][t];
        }
        return "";
    }
};
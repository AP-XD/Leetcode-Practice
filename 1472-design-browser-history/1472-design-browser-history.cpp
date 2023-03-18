class BrowserHistory {
public:
    int i=0;
    int limit=0;
    map<int,string>mp;
    BrowserHistory(string homepage) {
        mp[0]=homepage;
    }
    
    void visit(string url) {
        mp[++i]=url;
        limit=i;
    }
    
    string back(int steps) {
        i-=steps;
        if(i<0)
            i=0;
        return mp[i];
    }
    
    string forward(int steps) {
        i+=steps;
        if(i>limit){
        
            i=limit;
        }
            
        return mp[i];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
class MyCalendarThree {
public:
    multiset<pair<int,int>>mp;
    MyCalendarThree() {
        
    }
    
    int book(int s, int e) {
        
        mp.insert({s,1});
        mp.insert({e,0});
       int maxans=0,c=0;
        for(auto i:mp)
        {
            if(i.second==1)
            { c++;
              maxans=max(maxans,c);
            }
            else
                c--;
        }return maxans;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */
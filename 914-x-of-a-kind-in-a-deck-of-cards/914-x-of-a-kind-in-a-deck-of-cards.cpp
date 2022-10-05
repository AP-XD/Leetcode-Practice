class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mp;
        int m=INT_MAX;
        for(auto i:deck)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second<2)
                return false;
            m=min(m,i.second);
           
        }bool flg ;   while(m>=2){flg = true;
           for(auto a : mp){
                if(a.second % m!= 0){
                    flg = false;
                    break;
                }
            }if(flg)return flg;
                                  m--;
                       }
            
            
                return false;
    }
};
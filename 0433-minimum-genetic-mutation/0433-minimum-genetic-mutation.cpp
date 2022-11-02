class Solution {
public:
    // int minans=INT_MAX;
    // int solve(map<string,int>mp,string start,string end)
    // {
    //     int a=0;
    //     if(start==end)return 0;
    //     // if(mp[start]!=1)return INT_MAX;
    //     for(int i=0;i<start.size();i++)
    //     {
    //         if(start[i]!=end[i])
    //         {
    //             start[i]=end[i];
    //             if(mp[start]==1)
    //             { a=1+solve(mp,start,end);
    //             minans=min(minans,a);}
    //         }
    //     }
    //     return minans;
    // }
    // int minMutation(string start, string end, vector<string>& bank) {
    //     map<string,int>mp;
    //     for(auto i:bank)
    //     {
    //         mp[i]=1;
    //     }
    //     int k=solve(mp,start,end);
    //     return minans;
    // }
        // if(find (bank.begin(), bank.end(), end)!=bank.end()) {
        //     int ans = 0;
        //     for(int i = 0; i < start.size();i++)
        //     {
        //         if(start[i]!=end[i])
        //             ans++;
        //     }return ans;
        // }
        // return -1;
    
    int minMutation(string start, string end, vector<string>& bank) {
        
	unordered_set<string> st;
        for(auto i:bank)
            st.insert(i);
	if(!st.count(end)) return -1;
	queue<string>q;
	q.push(start);
	int ans=0,s;
	string temp,t;
	while(!q.empty()){
		s=q.size();
		while(s--)
        {
			temp=q.front();
			q.pop();
			if(temp==end) return ans;
			st.erase(temp);
			for(int i=0;i<8;i++)
            {
				t=temp;
				t[i]='A';
				if(st.count(t)) q.push(t);
				t[i]='C';
				if(st.count(t)) q.push(t);
				t[i]='G';
				if(st.count(t)) q.push(t);
				t[i]='T';
				if(st.count(t)) q.push(t);
			}
		}
		ans++;
	}
	return -1;
}
    
};
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#define ll long long
class Solution {
  public:
    int countPaths(int n, vector<vector<int>>& roads) {
        // code here
        ll u,v,w,node,d,adjnode,edw;
        vector<pair<ll,ll>>adj[n];
        // vector<pair<ll,pair<ll,ll>>>adj;
        for(auto i:roads)
        {
            u=i[0];
            v=i[1];
            w=i[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        vector<ll>dist(n,1e18),ways(n,0);
        dist[0]=0;
        ways[0]=1;
        priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>>pq;
        pq.push({0,0});
        ll mod=(ll)(1e9+7);
        while(!pq.empty()){
            d=pq.top().first;
            node=pq.top().second;
            pq.pop();
            for(auto i:adj[node])
            {
                adjnode=i.first;
                edw=i.second;
                if(d+edw<dist[adjnode])
                {
                    dist[adjnode]=d+edw;
                    pq.push({dist[adjnode],adjnode});
                    ways[adjnode]=ways[node];
                }else if(d+edw==dist[adjnode])
                {
                    ways[adjnode]=(ways[adjnode]+ways[node])%mod;
                }
            }
        }
        
        return ways[n-1]%mod;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends
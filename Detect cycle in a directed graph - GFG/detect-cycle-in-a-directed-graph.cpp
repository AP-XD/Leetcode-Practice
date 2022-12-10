//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool checkcycle(int node,vector<int>&vis,vector<int>&pathvis,vector<int>adj[])
    {
        vis[node]=1;
        pathvis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(checkcycle(it,vis,pathvis,adj))return true;
            }else if(pathvis[it])
            {
                return true;
            }
        }
        pathvis[node]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int> vis(V,0);
        vector<int> pathvis(V,0);
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            if(checkcycle(i,vis,pathvis,adj))return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends
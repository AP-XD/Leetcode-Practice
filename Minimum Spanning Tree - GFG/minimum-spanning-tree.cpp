//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class DisjointSet
{

public:
    vector<int> parent, size;
    DisjointSet(int n)
    {
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 1; i <= n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }
    int findUPar(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }
    void unionBySize(int u, int v)
    {
        int up_u,up_v;
        up_u = findUPar(u);
        up_v = findUPar(v);
        if(up_u==up_v)return;
        if(size[up_u]<size[up_v])
        {
            parent[up_u]=up_v;
            size[up_v]+=size[up_u];
        }
        else{
            parent[up_v]=up_u;
            size[up_u]+=size[up_v];

        }
    }
};
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // // code here
        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        // vector<int>vis(V,0);
        // int sum=0,node,adjnode,wt,edw;
        // pq.push({0,0});
        // while(!pq.empty())
        // {
        //     auto it=pq.top();
        //     pq.pop();
        //     wt=it.first;
        //     node=it.second;
        //     if(vis[node]==1)continue;
        //     vis[node]=1;
        //     sum+=wt;
        //     for(auto i:adj[node])
        //     {
        //         adjnode=i[0];
        //         edw=i[1];
        //         if (!vis[adjnode])
        //         pq.push({edw,adjnode});
        //     }
        // }
        // return sum;
        
        //DSU moment
        vector <pair<int,pair<int,int>>>edges;
        for(int i=0;i<V;i++)
        {
            for (auto it:adj[i])
            {
                int adjnode=it[0];
                int wt=it[1];
                edges.push_back({wt,{i,adjnode}});
            }
        }
        int mstwt=0;
        DisjointSet ds(V);
        sort(edges.begin(),edges.end());
        for(auto i:edges)
        {
            int wt,u,v;
            wt=i.first;
            u=i.second.first;
            v=i.second.second;
            
            if(ds.findUPar(u)!=ds.findUPar(v))
            {
                mstwt+=wt;
                ds.unionBySize(u,v);
                
            }
        }
        return mstwt;
        
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends
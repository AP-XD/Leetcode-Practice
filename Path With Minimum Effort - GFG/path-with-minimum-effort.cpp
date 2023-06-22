//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int MinimumEffort(vector<vector<int>>& grid) {
        // Code here
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>
        ,greater<pair<int,pair<int,int>>>>pq;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        dist[0][0]=0;
        int d=-1;
        pq.push({0,{0,0}});
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        while(!pq.empty())
        {
            auto it=pq.top();
            d=it.first;
            int row=it.second.first;
            int col=it.second.second;
            pq.pop();
            if(row==n-1 && col==m-1)
                return d;
            for(int i=0;i<4;i++)
            {
                int nr=delrow[i]+row;
                int nc=delcol[i]+col;
                if (nr>=0 && nc>=0 && nr<n && nc<m )
                {
                    if(max(abs(grid[row][col]-grid[nr][nc]),d)<dist[nr][nc])
                    {
                        dist[nr][nc]=max(abs(grid[row][col]-grid[nr][nc]),d);
                        pq.push({dist[nr][nc],{nr,nc}});
                    }
                }
            }
            // return d;/
        }
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n,m; cin>>n>>m;
        vector<vector<int>> heights;
       
        for(int i=0; i<n; ++i){
            vector<int> temp;
            for(int j=0; j<m; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            heights.push_back(temp);
        }
       
        Solution obj;
        cout<<obj.MinimumEffort(heights)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
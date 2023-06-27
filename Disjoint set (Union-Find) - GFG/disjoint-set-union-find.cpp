//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int find(int a[],int x);
void unionSet(int a[],int x ,int z);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)
			a[i]=i;
		int k;
		cin>>k;
		for(int i=0;i<k;i++){
			string s;
			cin>>s;
			if(s=="UNION"){
				int z,x;
				cin>>x>>z;
				unionSet(a,x,z);
			}
			else{
				int x;
				cin>>x;
				int parent=find(a,x);
				cout<<parent<<" ";
			}
		}
		cout<<endl;
	}
}
// } Driver Code Ends

// class DisjointSet
// {
//     vector<int>parent,size;
//     public:
//     DisjointSet(int n)
//     {
//         parent.resize(n+1);
//         size.resize(n+1);
//         for(int i=0;i<=n;i++)
//         {
//             parent[i]=i;
//             size[i]=1;
//         }
//     }
// };
/*Complete the functions below*/
int find(int A[],int X)
{
       if(A[X]==X)
       {
           return X;
       }
       return A[X] = find(A,A[X]);
}
void unionSet(int A[],int X,int Z)
{
	int a = find(A,X);
	int B = find(A,Z);
	A[a] = A[B];
}
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        bool check(int p, int n)
{
	int temp = p, count = 0, f = 5;
	while (f <= temp)
	{
		count += temp/f;
		f = f*5;
	}
	return (count >= n);
}

// Return smallest number whose factorial
// contains at least n trailing zeroes
int findNum(int n)
{
	// If n equal to 1, return 5.
	// since 5! = 120.
	if (n==1)
		return 5;

	// Initialising low and high for binary
	// search.
	int low = 0;
	int high = 5*n;

	// Binary Search.
	while (low <high)
	{
		int mid = (low + high) >> 1;

		// Checking if mid's factorial contains
		// n trailing zeroes.
		if (check(mid, n))
			high = mid;
		else
			low = mid+1;
	}

	return low;
}
};
// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends
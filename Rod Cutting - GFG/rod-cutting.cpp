//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
          vector<int> Costs(n+1,0);
        for(int size=1 ; size <= n ; size++)
        {
            int out = 0 ;
            for(int i=1 ; i <= size ; i++)
            {
                out = max(out , price[i-1] + Costs[size - i]);
            }
            Costs[size] = out;
        }
        return Costs[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
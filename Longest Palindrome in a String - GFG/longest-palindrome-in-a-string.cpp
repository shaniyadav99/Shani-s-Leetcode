//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        int n=S.size();
        string str;
        str;
        int ans=0,ansl=0,ansr=0;
        for(int i=0;i<n;i++){
            int l=i,r=i;
            while(S[l]==S[r]&&l>=0&&r<n){
                if(ans<-l+r+1){
                    ans=-l+r+1;
                    ansl=l;ansr=r;
                }
                l--;r++;
            }
        }
        for(int i=0;i<n;i++){
            int l=i,r=i+1;
            while(S[l]==S[r]&&l>=0&&r<n){
                if(ans<-l+r+1){
                    ans=-l+r+1;
                    ansl=l;ansr=r;
                    
                }
                l--;r++;
            }
        }
        int z=ansl;
        while(z<=ansr){
            str+=S[z++];
        }
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
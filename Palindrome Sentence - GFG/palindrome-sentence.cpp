//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
private:
     bool valid(char ch){
        if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9')){
        return 1;
        }
        return 0;
    }
    char tolowerCase(char ch)
    {
        if((ch>='a' && ch<='z')|| (ch>='0' && ch<='9'))
        return ch;
        else
        {
            char temp=ch-'A'+'a';
            return temp;
        }
    }
    bool checkPalindrome(string a)
    {
        int s=0;
        int e=a.length()-1;
        while(s<=e){
            if(a[s]!=a[e])
            {
                return 0;
            }
            else
            {
                s++;
                e--;
            }
        }
        return 1;
    }
public:	
	bool sentencePalindrome(string s) 
	{
	    string temp="";
        for(int j=0;j<s.length();j++)
        {
            if(valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }
        //lowercase me kr do
        for(int j=0;j<temp.length();j++)
        {
            temp[j]=tolowerCase(temp[j]);
        }
        return checkPalindrome(temp);  // code here 
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends
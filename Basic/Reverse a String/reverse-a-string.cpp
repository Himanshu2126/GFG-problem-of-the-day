//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution
{
        
    public:
        void getans(string &str,int start,int end){
            if(start >= end) return;
            swap(str[start],str[end]);
            getans(str,start+1,end-1);
        }
        
        string reverseWord(string str)
        {
            getans(str,0,str.length()-1);
            return str;
        }
};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends
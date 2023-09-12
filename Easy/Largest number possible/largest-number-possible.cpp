//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int n, int s){
        string ans;
        if ((s < 1 && n!=1) || s > 9 * n) return "-1";
        
        if(s<9) ans+=to_string(s);
        
        else{
            int x=s/9;
            string nines(x,'9');
            ans+=nines;
            if(ans.size()!=n)
            ans+=to_string(s%9);
        }
            int reqZero= n-ans.size();
            string zeros(reqZero,'0');
            ans+=zeros;
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
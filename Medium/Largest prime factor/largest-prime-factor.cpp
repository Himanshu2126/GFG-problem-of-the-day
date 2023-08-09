//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends



class Solution{

public: 
    long long int largestPrimeFactor(int N){
        
        int a = N;
        int i=2;
        int ans = 0;
        while(a != 1){            
            if(a%i != 0){
                i++;
            }else{
                a = a/i;
            }            
            ans = max(ans, i);
        }
        return ans;
    }

};






//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
       int i,c=1;
      map<int,int>mp;
      sort(arr,arr+n);
      for(i=1;i<n;i++)
      {
          if(arr[i]==arr[i-1])
          c++;
          else
          {
              
              mp[c]++;
              if(mp[c]>1)
              return false;
              c=1;
          }
      }
      
      mp[c]++;
      if(mp[c]>1)
      return false;
      return true;
      
    


    }
};






//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int a[], int n) {
        // code here
        set<pair<int, int>> s;
        auto it=s.begin();
        int ans=0;
        for(int i=0; i<n; i++) {
            it=s.lower_bound({a[i], i});
            if(it!=s.begin()) {
                it--;
                ans=max(ans, i-it->second);
            }
            it=s.upper_bound({a[i], i});
            if(it==s.begin()) s.insert({a[i], i});
        }
        return ans;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
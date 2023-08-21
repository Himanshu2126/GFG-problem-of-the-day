//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
   int Count(vector<vector<int> >& matrix) {       
    int m=matrix.size(),n=matrix[0].size(),num,ans=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]){
                num=0;
                if(i>0 && matrix[i-1][j]==0) num++;
                if(i<m-1 && matrix[i+1][j]==0) num++;
                if(j>0 && matrix[i][j-1]==0) num++;
                if(j<n-1 && matrix[i][j+1]==0) num++;
                if(i>0 && j>0 && matrix[i-1][j-1]==0) num++;
                if(i>0 && j<n-1 && matrix[i-1][j+1]==0) num++;
                if(i<m-1 && j>0 && matrix[i+1][j-1]==0) num++;
                if(i<m-1 && j<n-1 && matrix[i+1][j+1]==0) num++;
                if(num>0 && num%2==0) ans++;
            }
        }
    }
    return ans;
 }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
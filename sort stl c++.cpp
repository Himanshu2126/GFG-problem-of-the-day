#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    

int n=4;
    vector<int>v={10,20,5,7};
    sort(v.begin(),v.end());
    for(int x:v)
    {
      cout<<x<<" ";
    }

     cout<<endl;

   
}

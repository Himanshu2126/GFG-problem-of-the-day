#include <iostream>
using namespace std;


void print(int i ,int n)
{
    if(i>n)
    {
        return ;
    }
    
  cout<<n<<" "; 
        print(i,n-1);
    
    
}
int main() {
     
     
     int n;
     cin>>n;
    print(1,n);
    

    return 0;
}
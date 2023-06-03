#include<iostream>
using namespace std;

void sumis(int n,int sum)
{
       
      if(n<1)
      {
        cout<<sum<<endl;
         return ;
      }
    
      sumis(n-1,sum+n);

}

int main()
{

    int n;
    cin>>n;


    sumis(n,0);


    return 0;

}
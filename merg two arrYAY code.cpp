#include <iostream>
using namespace std;
int main()
 {


    int n=5,m=7;
    int a[n]={3,4,5,7,8};
    int b[m]={5,7,8,9,10,11,32};
     int c[n+m];


     int i=n;
     int j=m;
     i=0;
     j=0;
  while ( i<n && j<m)
  {
      if (a[i]<=b[j])
       {
           cout<<a[i]<<" ";
           i++;
       }
       else 
       {
           cout<<b[j]<<" ";
            j++;
       }
  }
   while(i<n)
   {
       cout<<a[i]<<" ";
           i++;

   }

  while(j<m)
   {
           cout<<b[j]<<" ";
            j++;
   }

}

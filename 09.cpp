#include <iostream>
using namespace std;




int bSearch(int arr[],int low,int high,int x)
{
  
  while(low<=high)
  {
      int mid=(low+high)/2;

      if(arr[mid]==x)
       return mid;

     else if(arr[mid]>x)
      high=mid-1;
      else
      low=mid+1;


  }
return -1;
}

int  Search(int arr[],int x)
{
    if(arr[0]==x) 
    return 0;
    int i=1;
    while (arr[i]<x)
    { 
        i=i*2;
    if(arr[i]==x)
    return i;
    }
    return bSearch(arr,((i/2)+1),i,x);
    
}



int main(void) {
    


int n = 7;
int x =88;
int arr[]={1,23,4,56,67,78,88,129,333,444,555,666,777,888,999};
 int res = Search(arr,x);
 cout<<res;







}

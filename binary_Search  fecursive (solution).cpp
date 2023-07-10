#include <iostream>
using namespace std;




int bSearch(int arr[], int low, int high, int key)
{
  
  if(low>high)
    return -1;



  
      int mid=(low+high)/2;

      if(arr[mid]==key)
       return mid;

     else if(arr[mid]>key)
      return bSearch(arr,low,mid-1,key);

    else
     return bSearch(arr,mid+1,high,key);

  

}

int main(void) {
    
int n = 7;
int low = 0;
int high = n-1;
int arr[]={1,23,4,56,67,78,8};
 int res = bSearch(arr,0,7-1,67);
 cout<<res;





return 0;

}

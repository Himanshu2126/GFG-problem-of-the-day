#include <iostream>
using namespace std;




int bSearch(int arr[],int n,int key)
{
  int low=0, high=n-1;
  while(low<=high)
  {
      int mid=(low+high)/2;

      if(arr[mid]==key)
       return mid;

     else if(arr[mid]>key)
      high=mid-1;
      else
      low=mid+1;


  }
return -1;
}
int main(void) {
    


int n = 7;
int arr[]={1,23,4,56,67,78,8};
 int res = bSearch(arr,7,56);
 cout<<res;





return 0;

}

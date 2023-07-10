#include <iostream>
using namespace std;




int firstocc(int arr[], int low, int high, int key)
{
  
       if(low>high)
        return -1;



  
      int mid=(low+high)/2;

    

     if(arr[mid]>key)
      return firstocc(arr,low,mid-1,key);

     else if(arr[mid]<key)
     return firstocc(arr,mid+1,high,key);
   
     else
      { if(mid==0||arr[mid-1]!=arr[mid])
       
           return mid;

       
       else
        return firstocc(arr,low,mid-1,key);
      }
}

int main() {
    
int n = 7;
int low = 0;
int high = n-1;
int arr[]={1,23,4,56,56,78,8};
 int res = firstocc(arr,0,7-1,56);
 cout<<res;





return 0;

}

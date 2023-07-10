#include <iostream>
using namespace std;




int firstocc(int arr[], int low, int high, int key)
{
  
       while(low<=high)
        
   {


  
      int mid=(low+high)/2;

    

     if(arr[mid]>key)
      high = mid-1;

     else if(arr[mid]<key)
     low = mid+1;
   
     else
      { if(mid==0|| arr[mid-1]!=arr[mid])
       
           return mid;

       
       else
        high = mid-1;
      }

   }
   return -1;
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

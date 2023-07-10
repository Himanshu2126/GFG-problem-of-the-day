#include <iostream>
using namespace std;





int firstocc(int arr[], int n, int key)
{
  

  int low=0;
  int high= n-1;
       while(low<=high)
        
   {


  
      int mid=(low+high)/2;

    

     if(arr[mid]>key)
      high = mid-1;

     else if(arr[mid]<key)
     low = mid+1;
   
     else
      { if(mid==0|| arr[mid-1]!=arr[mid])
       
           return (n-mid);

       
       else
        high = mid-1;
      }

   }
   return -1;
}


int main() {
    
int n=11;
int arr[]={0,0,0,0,0,1,1,1,1,1,1};
int low=0;
int high=n-1;
int key= 1;

int res = firstocc(arr, n, key);
cout<<res;

}

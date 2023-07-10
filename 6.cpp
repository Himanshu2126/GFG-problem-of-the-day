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

int lastocc(int arr[], int low, int high,int key)
{
  
       if(low>high)
        return -1;



  
      int mid=(low+high)/2;

    

     if(arr[mid]>key)
      return lastocc(arr,low,mid-1,key);

     else if(arr[mid]<key)
     return lastocc(arr,mid+1,high,key);
   
     else
      { if(mid==0||arr[mid]!=arr[mid+1])
       
           return mid;

       
       else
        return lastocc(arr,mid+1,high,key);
      }
}


int countocc(int arr[],int n,int key)
{
    int low=0;
int high=n-1;
    int first =  firstocc(arr ,low,high,key);
    if (first==-1)
     return 0;
    else
     return ( lastocc(arr,low,high,key)-first+1);
}






int main() {
    
int n=11;
int arr[]={1,2,3,3,3,4,4,4,4,4,5,6,};
int low=0;
int high=n-1;
int key= 4;

int res=  countocc(arr , n, key);
cout<<res;

}

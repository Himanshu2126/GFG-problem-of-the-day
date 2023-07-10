#include <iostream>
using namespace std;

void bubleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int swapped=false;
       for(int j=0;j<n-i-1;j++)
       {
           int temp;
          if(arr[j]>arr[j+1])
             {
                
                 temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
             }
      }
      if (swapped=false)
      {
          break;
      }
    }

}



int main(void) {
    int n  = 5;
    int arr[5]={4,6,3,9,3};
      bubleSort(arr,n);
   for(int i=0;i<n;i++)

    cout<<arr[i]<<" ";



    }





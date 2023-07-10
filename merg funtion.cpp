#include <iostream>
using namespace std; 

void merg(int a[],int low,int mid,int high)
{
    int n1= mid-low +1;
    int n2=high-mid;
    int left[n1];
    int right[n2];

    for(int i=0;i<n1;i++)
    {
        left[i]=a[low+i];
    }
      for(int i=0;i<n2;i++)
    {
        right[i]=a[n1+i];
    }


    
     int k=0;
     int i=0;
     int j=0;
    while(i<n1 && j<n2 )
    {      
         if(left[i]<=right[j])
          {  
              a[k]=left[i];
              i++;
              k++;
          }
          else
         { 
             a[k]=right[j];
          k++;
          j++;
         }
        
    } 
    while(i<n1)
       {  
              a[k]=left[i];
              i++;
              k++;
          }
    while(j<n2 )
    { a[k]=right[j];
          j++;
          k++;
    }
        
}
int main()
{
    int  n=10;
    int a[10]={4,5,6,7,8,9,2,3,10,11};
    merg(a,0,5,10);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

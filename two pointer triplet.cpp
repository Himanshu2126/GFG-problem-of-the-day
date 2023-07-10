#include <iostream>
using namespace std;


bool ispair(int arr[],int left,int right,int x)
{
    int n;
    while(left <right)
    {
        if (arr[left]+arr[right]==x)
        return true;
        else if ((arr[left]+arr[right])>n)
        right--;
        else
        left ++;

    }
    return false;
    
}





int main() 
{
    int n=8;
    int x=15;
    int arr[]={2,3,4,5,6,7,8};

for(int i=0;i<n;i++)
{
    if(ispair(arr,i+1,n-1,x-arr[i]))
    {
    cout<<"yes";
    break;
    }
    
}

return false;
    
}

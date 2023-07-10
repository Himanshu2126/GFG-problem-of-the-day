#include <iostream>
using namespace std;

int SqRootfloor(int x)
{
    int i=0;
    while(i*i<=x)
    i++;
    return (i-1);

}
int main() {
    
    int res=SqRootfloor(45);
  cout<<res;
}

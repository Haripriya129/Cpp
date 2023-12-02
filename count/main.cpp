#include <iostream>

using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    while(1)//(n1=0)
    {
        if(n&1==1)
        {
            count++;
        }
        n=n>>1;
      /*  if(n==0)
        {
            break;
        }*/
    }
    cout<<count;
    return 0;
}

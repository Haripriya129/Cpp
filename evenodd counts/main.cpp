#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,count=0,c=0;
    cin>>n;
    while(n)
    {
        r=n%10;
        n=n/10;
        if(r%2==0)
        {
            count=count+1;

        }

        if(r%2!=0)
        {
            c=c+1;

        }

    }
    cout<<"even count="<<count;
    cout<<"odd count="<<c;
    return 0;

}

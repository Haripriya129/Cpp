#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,r;
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        r=n/2;
        cout<<i<<" ";
        n=r;
    }
    return 0;

}

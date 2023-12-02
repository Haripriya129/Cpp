
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0,r;
    for(int i=1;i<=n;i++)
    {
        r=n%10;
        if(r==0)
        {
            count=count+1;
        }
        else{
            count=-1;
        }
    }
    n=n/10;
    cout<<count;

    return 0;
}

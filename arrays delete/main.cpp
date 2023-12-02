#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pos,flag;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            pos=i;
            flag=1;

        }
    }
    if(flag==1)
    {
        for(int i=pos;i<=n;i++)
        {
            a[i]=a[i+1];
        }
        n--;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }


    }
    return 0;

}

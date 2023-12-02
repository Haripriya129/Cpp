
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cap;
    cin>>cap;
    int a[cap];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }int pos,x;
    cin>>pos>>x;
    if(n==cap)
    {
        cout<<"can't insert";
    }
    else
    {
        int ind=pos-1;
        for(int i=n-1;i>=ind;i--)
        {
            a[i+1]=a[i];
        }
        a[ind]=x;
        ind++;
        for(int i=0;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
    }



}

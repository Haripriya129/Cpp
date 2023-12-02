#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i,j,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
    }
    cout<<" the reverse array is:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

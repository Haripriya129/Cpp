#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(a[i]<a[j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout<<"sorted order";
    }
    else{
        cout<<"not sorted order";
    }
}

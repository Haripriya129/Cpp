
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int first=a[0],second=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(first<a[i])//3 5 2
        {
            first=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>second&&a[i]!=first)
        {
            second=a[i];
        }
    }
    cout<<"second max:"<<second;
}

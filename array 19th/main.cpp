#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    int i;
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int fl=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<i<<endl;
            break;
        }
    }
    if( arr[i]!=x)
    {
        fl=-1;
        cout<<fl;
    }
}

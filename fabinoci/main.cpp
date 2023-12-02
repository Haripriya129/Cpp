#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=1;
    int sum,n;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    while(sum<n)
    {
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
    }
}

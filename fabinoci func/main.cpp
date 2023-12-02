#include<bits/stdc++.h>
using namespace std;
int sum;
int a=0,b=1,n;
int fabinoci(int n)
{
    while(sum<n)
    {
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
    }
}
int main()
{
    cin>>n;
    cout<<a<<" " <<b<< " ";
    fabinoci(n);
}

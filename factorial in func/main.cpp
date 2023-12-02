#include<bits/stdc++.h>
using namespace std;
int n;
int i,r=1;
int fact(int n)
{
    for(i=1;i<=n;i++)
    {
       r=r*i;

    }
    cout<<r;

}
int main()
{
    cin>>n;
    fact(n);
}

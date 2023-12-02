#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    while(n)
    {
         int r,res=0;
         r=n%10;
         n=n/10;
         res=res*10+r;
         cout<<res;
    }


}
int main()
{
    int n;
    cin>>n;
    reverse(n);
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,res=0,num;
    cin>>n;
    num=n;
    while(n)
    {
        r=n%10;
        n=n/10;
        res=res*10+r;
    }
    if(num==res)
        cout<<res;
    else
        cout<<"not a palindrome";


}

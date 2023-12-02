#include<bits/stdc++.h>
using namespace std;
int main()
{
    int base,exp,r=1;
    cin>>base>>exp;
    while(exp)
    {
        if(exp & 1==1)
        {
            r=r*base;
        }
        exp=exp>>1;
        base=base*base;
    }
    cout<<r;

}

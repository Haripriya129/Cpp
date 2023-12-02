#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,e=0,o=0;
    cin>>n;
    while(n)
    {
        r=n%10;
        n=n/10;
        if(r%2==0)
        {
            e++;
        }
        else{
            o++;
        }
    }
    if(o==0)
    {
        cout<<"strong even";
    }
    else if(e==0)
    {
        cout<<"strong odd";
    }
    else{
        cout<<"mixed number";
    }

    return 0;
}

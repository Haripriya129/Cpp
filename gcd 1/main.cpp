#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    while(1)
    {
        if(n1<n2)
        {
            swap(n1,n2);
        }
        n1=n1-n2;
        if(n1==0)
        {
            cout<<n2;
            break;

        }
    }
    return 0;

}

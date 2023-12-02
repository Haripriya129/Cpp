#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i;
    int counting=0;
    cin>>x>>y;
    for(i=0;i<=y;i++)
    {
        if(i/x==0)
        {
            counting++;
        }

    }
    cout<<counting;

}

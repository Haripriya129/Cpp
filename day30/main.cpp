#include<bits/stdc++.h>
using namespace std;
void counter(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" " ;
    counter(n-1);
}
int main()
{
    int n;
    cin>>n;
    counter(n);
}

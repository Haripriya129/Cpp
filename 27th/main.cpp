#include<bits/stdc++.h>
using namespace std;
void change(int n,int a[])
{

    a[3]=10;

}
int main()
{
    int n=5;
    int a[n]={1,2,3,4,5};
    change(n,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


}

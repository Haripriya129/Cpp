#include <iostream>

using namespace std;
int rotatedbs(int low,int high, int a[],int t )
{
    while(low<=high){
    int mid=low+high>>1;
    if(t==a[mid])
    {
        return mid;
    }
    if(a[mid]<a[0])
    {
        if(t>=a[0] || t<a[mid])
        {
            high=mid+1;
        }
        else{
            low=mid-1;
        }
    }
    else{
        if(t>a[mid] || t<a[0])
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    }

    return -1;
}


int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<rotatedbs(0,n-1,a,t);
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,count=0;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    /*int *maxi=max_element(arr,arr+n);
    int frq[*maxi+1]={0};
    for(i=0;i<n;i++)
    {
        frq[arr[i]]++;
    }
    int max=0;
    for(i=0;i<*maxi;i++)
    {

        if(max<frq[i])
        {
            max=frq[i];
        }
    }
    cout<<max;*/
    map<int,int>dic;
    for(i=0;i<n;i++)
    {
        dic[arr[i]]++;
    }
    int max=0,id=0;
    for(auto it:dic)
    {
       // cout<<it.first<<" " <<it.second<<endl;

        if(max<it.second)
        {
            max=it.second;
            id=it.first;
        }
    }
    cout<<id<<" "<<max<<endl;
};

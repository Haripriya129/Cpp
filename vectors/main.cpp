#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>ve;
    ve.push_back(10);
    ve.push_back(20);
    ve.emplace_back(30);
   // ve.pop_back();
    /*for(int i=0;i<ve.size();i++)
    {
        cout<<ve[i]<<endl;
    }*/
    vector<int>arr={10, 20,30, 40, 50};

  /*  for(auto it:arr)
    {
        cout<<(it) ;
    }*/
    //vector<int>arr(ve);
    int x=40;
    auto if  find(arr.begin(),arr.end(),x);
    cout<<it-arr.begin();



}

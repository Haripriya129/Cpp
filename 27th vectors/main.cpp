#include<bits/stdc++.h>
using namespace std;
vector<int>fun(vector<int>&ans)
{

    ans.push_back(10);
    ans.push_back(20);
    ans.push_back(30);
    return ans;
}
int main()
{
    vector<int>ans;
    fun(ans);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool ispallin(int l,int r,string s)
{
    if(l>r)
    {
        return true;
    }
    if(s[l]!=s[r])
    {
        return false;
    }
    return ispallin(l+1,r-1,s);
}
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    cout<<ispallin(0,n-1,s);

}

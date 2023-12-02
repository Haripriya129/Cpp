#include<bits/stdc++.h>
using namespace std;
string modifystring(string s)
{
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    string s="hello";
    cout<<modifystring(s);
    return 0;
}

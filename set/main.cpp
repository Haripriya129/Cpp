#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   int pos;
   cin>>n>>pos;
   if(n&((pos-1)<<1))
   {
       cout<<"set";
   }
   else
   {
       cout<<"not a set";
   }
   return 0;

}


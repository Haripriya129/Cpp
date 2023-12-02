#include <iostream>

using namespace std;
int sortedMult(int l,int h,int m,int a[]){
while(m<=h){
        if(a[m]==2)
{
    swap(a[m],a[h]);
    h--;
}
else if(a[m]==0)
{
    swap(a[m],a[l]);
    m++;
    l++;
}
else if(a[m]==1)
{
    m++;
}
}

}

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   cout<<sortedMult(0,n-1,0,a);
}

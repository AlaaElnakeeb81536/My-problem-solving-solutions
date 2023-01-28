#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

/* e.g:
value:4 1 2 3
index:1 2 3 4
a[value]=index
a[4]=1
a[1]=2
a[2]=3
a[3]=4
*/
int main()
{
   int n;
   cin>>n;
   int a[n+1];
   for(int i=1;i<=n;i++)
   {
       int value;
       cin>>value;
       a[value]=i;
   }
    for(int i=1;i<=n;i++)
   {
       cout<<a[i]<<" ";
   }
}



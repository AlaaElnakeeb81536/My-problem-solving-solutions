#include<iostream>
#include<string>
#include <algorithm>
#include<cmath>
#include <stdio.h>
const int MAX = 1e5 + 5;
using namespace std;
int n;
int a[MAX];
int fun(int i,int mx)
{
if(i==n) return 0;
else
{
    cout<<max(mx,a[i])<<" ";
    i++;
    fun(i,max(mx,a[i]));
}
}
int main ()
{
    std::ios_base::sync_with_stdio(0);
cin.tie(NULL);

cin>>n;
int mx=INT_MIN;

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
      /*mx=max(mx,a[i]);
       cout<<mx<<" ";*/
}
fun(0,a[0]);

}

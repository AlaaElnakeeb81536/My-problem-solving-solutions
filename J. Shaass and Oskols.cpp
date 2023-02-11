//BANK MANAGMENT PROJECT
#include<vector>
#include<string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
/*
if we can't understand it you can watch explanation from here https://youtu.be/iRvc0kH_WT4
*/

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
      cin>>a[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        a[x-1]+=y-1;
        a[x+1]+=a[x]-y;
        a[x]=0;

    }
     for(int i=1;i<=n;i++)
    {
      cout<<a[i]<<endl;
    }
}

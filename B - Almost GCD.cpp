//BANK MANAGMENT PROJECT
#include<vector>
#include<string>
#include<cmath>
#include <iostream>
#include<cstring>
#include <stdio.h>
#include <algorithm>
#include<map>
using namespace std;

int main()
{
std::ios_base::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int ans=-1,max=0,c;
	for(int i=2;i<=1000;i++)
    {
        c=0;
       for(int j=0;j<n;j++)
       {
           if(a[j]%i==0) c++;
       }
       if(max<c)
       {
       max=c;
       ans=i;
       }

    }
     cout<<c;
    cout<<ans;

}




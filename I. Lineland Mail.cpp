//BANK MANAGMENT PROJECT
#include<vector>
#include<string>
#include<cmath>
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
/*
1 2 3 4 5
2
if i am in (2) ,min==>(2-1,2-3 ),max==>( 2-1,2-5)
else if i am in (5) ,min==>(5-4),max==>(5-1)
    else if i am in 1,min==>(2-1),max(5-1)

*/

int main()
{
   	int n;
  cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
          {
             cin>>a[i];
            }
    sort(a,a+n);
    for(int i=0;i<n;i++)
          {
              if(i==0)
              cout<<abs(a[i+1]-a[i])<<" "<<abs(a[n-1]-a[i])<<endl;
              else if(i==n-1)
                cout<<abs(a[i]-a[i-1])<<" "<<abs(a[i]-a[0])<<endl;
              else
        cout<<min(abs(a[i]-a[i-1]),abs(a[i+1]-a[i]))<<" "<<max(abs(a[i]-a[0]),abs(a[n-1]-a[i]))<<endl;           }

}

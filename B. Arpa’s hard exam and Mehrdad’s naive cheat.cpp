//BANK MANAGMENT PROJECT
#include<vector>
#include<string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include<cmath>
using namespace std;
/*
note pow(1378,n)==>Of course it is wrong, 1378^n cause easily overflow long long.
so you can 1378^1==1378==>8
1378^2==1,898,884==>4(last digit)
1378^3==2,616,662,152==>2
1378^4==3,605,760,445,456==>6
yuo can make array with last digit

*/

int main()
{
   long long n;
   cin>>n;
   int a[5]={6,8,4,2,6};
   if(n==0)
   {cout<<1;
   return 0;}
   cout<<a[n%4];


}

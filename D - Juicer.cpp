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
   long long n,p,q;
   cin>>n>>p>>q;
   long long a[n];
   long long sum=0;
   long long c=0;
   for(long long i=0;i<n;i++)
   {

       cin>>a[i];
       if(a[i]<=p){
       sum+=a[i];}
       if(sum>q)
       {
           c++;
           sum=0;
       }

   }
   cout<<c;
       return 0;

}




//BANK MANAGMENT PROJECT
#include<vector>
#include<string>
#include<cmath>
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;



int main()
{
   long long int n,a,x,i;
   cin>>n;
   while(n--)
   {

        scanf("%lld",&a);
       x=sqrt(a);
       for( i=2;i*i<x;i++)
       {
           if(x%i==0)
            break;
       }
if(i*i>x&&a>1&&x*x==a)
printf("YES\n");
 else
 printf("NO\n");
   }
    return 0;
}

//BANK MANAGMENT PROJECT
#include<vector>
#include<string>
#include<cmath>
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
/*
num of stairs=10 ==moves can be 1 or 2 to cmplete 10
the number of moves to be a multiple of an integer =2
with 1 step==>1 2 3 4 5 6 7 8 9 10=10 step
with 2==> [1 2 ] [3 4] [ 5 6] [ 7 8] [ 9 10] ==> then it equal 5 step
==> minnimum of them =5 but 5 can't be multiple of 2.then you can splir into [1 2] [3 4] [5 6] [7 8] [9] [10]=6



int fun(string str)
{
     int n = str.size();
     int maxLength = 1, start = 0;
     for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            int flag = 0;

            for (int k = 0; k < (j - i + 1) / 2; k++)
                if (str[i + k] == str[j - k])
                    flag = 1;

                         if (flag && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }
*/


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

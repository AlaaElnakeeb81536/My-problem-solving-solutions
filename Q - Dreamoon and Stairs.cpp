//BANK MANAGMENT PROJECT
#include<vector>
#include<string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
/*
e.g1:
num of stairs=10 and moves can be 1 or 2 to complete 10 stairs.
the number of moves to be a multiple of an integer =2==>m
with 1 step==>1 2 3 4 5 6 7 8 9 10=10 step
with 2==> [1 2 ] [3 4] [ 5 6] [ 7 8] [ 9 10] ==> then it equal 5 step==>x
==> minnimum of them =5 but 5 can't be multiple of 2.then you can split into [1 2] [3 4] [5 6] [7 8] [9] [10]=6 ==> you can make this by looping while(x%m!=0) {x++} while(5%2!=0){5++}
==>then x will be 6 can be %2==0



*/

int main()
{
    int n,m,minn,c=0;
    cin>>n>>m;
    if(m>n) cout<<-1;
    else
    {
    if(n%2==0)
        minn=n/2;
    else

       minn=(n/2)+1;

    while(minn%m!=0)
    {
        minn++;
    }

      cout<<minn;
    }
}

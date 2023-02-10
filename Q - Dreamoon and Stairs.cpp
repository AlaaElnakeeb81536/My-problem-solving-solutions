//BANK MANAGMENT PROJECT
#include<vector>
#include<string>
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

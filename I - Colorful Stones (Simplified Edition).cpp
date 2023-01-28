#include<iostream>
#include<string>
#include <algorithm>
using namespace std;


int main()
{
   string s1,s2;
   cin>>s1>>s2;
   int m=0,c=0;
   for(int i=0;i<s2.size();i++)
   {
       if(s1[m]==s2[i])
        {
            c++;
            m++;
        }

   }
   cout<<c+1;
}



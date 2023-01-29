#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
/***You***Can***Do***It***/
int main() {
	int n;
	cin>>n;
	int a[n];
	int maxvalue=0;
	int minvalue=101;
	int maxindex;
	int minindex;

	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
         if(a[i]>maxvalue)
        {
            maxvalue=a[i];
            maxindex=i;
        }
        if(a[i]<=minvalue)
        {
            minvalue=a[i];
            minindex=i;
        }

    }
   if(maxindex>minindex)
    minindex++;
   cout<<maxindex+(n-1)-minindex;
}

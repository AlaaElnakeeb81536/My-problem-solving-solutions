#include<vector>
#include<string>
#include<cmath>
#include <iostream>
#include<cstring>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[105];
    int freq[1005]= {0};
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }
    int res=0;
    for(int i=1; i<=1000; i++)
    {
        if(freq[i]>=2){
        if(res<freq[i])
            res=freq[i];
    }
    }
    if(n%2==0)
    {

        if(res<=n/2)
            cout<<"YES";
        else
            cout<<"NO";
    }

      else{  if(res<=(n/2)+1)
            cout<<"YES";
        else
            cout<<"NO";
      }
}

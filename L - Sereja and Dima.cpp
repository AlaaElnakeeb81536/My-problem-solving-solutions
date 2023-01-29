#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;
    int a[n];
    bool flag=1;
    for(int i=0; i<n; i++)
        cin>>a[i];

    int k=n-1;
    int l=0;
    int sum1=0,sum2=0;

    for(int i=0; i<n; i++)
    {
        if (i%2==0)
        {
            if(a[k]>a[l])
            {
                sum1+=a[k];
                k--;
            }
            else
            {
                sum1+=a[l];
                l++;
            }
        }
        else
        {
            if(a[k]>a[l])
            {
                sum2+=a[k];
                k--;
            }
            else
            {
                sum2+=a[l];
                l++;
            }
        }
    }
    cout<<sum1<<" "<<sum2;


}


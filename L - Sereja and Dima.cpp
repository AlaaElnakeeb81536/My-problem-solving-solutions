#include<bits/stdc++.h>
using namespace std;
/*
e.g 1 :4 1 2 10
seraj choose the greatest one in left or right then dema do this also
seraj=10  2==>12 
dema=4  1==>5
e.g2:1 2 3 4 5 6 7
seraj=7 5 3 1==>16 
dema=6 4 2==>12
*/
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


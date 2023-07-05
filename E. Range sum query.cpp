#include<iostream>
#include<string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string.h>
#include <unordered_map>
#define  ll long long
#define  srt(v)   sort(v.begin(),v.end());
#define  rev(v)   reverse (v.begin(),v.end());
#define R(arr,n)     reverse (arr,arr+n);
#define S(arr,n)   sort(arr,arr+a);
#define  fixed(n) fixed << setprecision(n)
#define sm(arr)  *min_element(arr, arr + a);
#define la(arr)  *max_element(arr, arr + a);
#define smv(v)   *min_element(v.begin(), v.end());
#define lav(v)    *max_element(v.begin() ,v.end());
using namespace std;
/***You***Can***Do***It***/
/*
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int isPrime(int num)
{
    for (int i=2; i<=num/2 ; i++)
        if (num%i==0)
            return 0; //divider mod input number = 0 not prime

    return 1;
}
long long factorial(long long x )
{
    long long res = 1;
    for(int i = 2 ; i <=x ; i++)
    {
        res*=i;
    }
    return res ;
}
long long npr (int n, int r)
{
    long long res = 1;
    for(int i =n-r+1 ; i <= n ; i++)
    {
        res*=i ;
    }
    return res ;
}
long long ncr(int n, int r)
{
    return npr(n,r)/factorial(r);
}
ll gcd(ll a, ll b)
{
    if (a == 0) return b;
    return gcd(b%a, a);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b))*b;
}

void Aalaa()
{
    int n;
    cin>>n;
    int a[n];
   int freq[n+1]={0};
    int maxx=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    freq[a[i]]++;
    }
      for(int i=0;i<n;i++)
    {
        if(freq[i]>maxx) maxx=freq[i];
    }
    cout<<n-maxx<<endl;

}
*/
long int oddsum(int n)
{
    long long total=(n+1)/2;
    long long odd=total*total;
    return odd;
}
long int evensum(int n)
{
    long long total=(n)/2;
    long long even=total*(total+1);
    return even;
}
int sumltor(int l,int r)
{
    long long odd,even;
    odd=oddsum(r)-oddsum(l-1);
    even=evensum(r)-evensum(l-1);
    return odd,even;
}
int main()
{

ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

long long  n,q;
cin>>n>>q;
long long  a[n];

for(int i=0;i<n;i++)
{
    cin>>a[i];
}

long long  prefixsum[n];
prefixsum[0]=a[0];
for(int i=1;i<n;i++)
{
    prefixsum[i]=prefixsum[i-1]+a[i];
}

while(q--)
{
int l,r;
cin>>l>>r;

 if(l!=1)
    cout<<prefixsum[r-1]-prefixsum[l-1-1]<<endl;

 else
    cout<<prefixsum[r-1]<<endl;

}
}

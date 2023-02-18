#include<iostream>
#include<string>
#include <algorithm>
#include<cmath>
using namespace std;

int main()
{
    long long n1,n2,n3,n4;
	char c1,c2;

	cin>>n1>>c1>>n2>>n3>>c2>>n4;
	cout<<n1*n3/__gcd(n1,n3)<<"/"<<__gcd(n2,n4);

}



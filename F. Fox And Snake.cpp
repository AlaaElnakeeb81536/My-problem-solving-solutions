#include<iostream>
#include<string>
#include <algorithm>
using namespace std;


int main()
{
  int n,m,c=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {

        for(int j=0;j<m;j++)
        {

                cout<<"#";
        }
        }
            else
            {c++;
              for(int j=0;j<m;j++)
        {

            if(c%2==0&&j==0)
                cout<<"#";
            else if(c%2!=0&&j==m-1)
                cout<<"#";
            else cout<<".";

        }
            }
            cout<<endl;
    }
}



#include<iostream>
#include<cmath>
using namespace std;
 int n,m,grid[10][10];
bool valid (int r, int c)
{
    return r < n&& c < m;
}

int maxPathSum (int row, int column)
{
    if (!valid (row, column))
           return -1e9;
    if(row==n-1&&column==m-1)
        return grid[row][column];


    int path1 = maxPathSum (row, column + 1); //Right
    int path2 = maxPathSum (row + 1, column); //Down

    return grid[row][column] + max(path1, path2);
}

int main ()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    std::cout << maxPathSum (0, 0) << std::endl;
    return 0;
}

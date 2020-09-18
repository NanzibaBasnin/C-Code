#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int r, mat[15][15];
    cin >> r;
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=r; j++)
        {
            cin >> mat[i][j];
        }
    }
    int sum=0;
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=r; j++)
        {
            if(i==j)
            {
                sum = sum +mat[i][j];
            }
        }
    }
    cout << sum;
}

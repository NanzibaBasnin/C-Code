#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int mat[15][15];
    int r;
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
            if(i<j)
                sum = sum + mat[i][j];
        }
    }
    //cout << sum;
    int sum1=0;
     for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=r; j++)
        {
            if(i>j)
                sum1 = sum1 + mat[i][j];
        }
    }
    printf("%d", sum+sum1);
}

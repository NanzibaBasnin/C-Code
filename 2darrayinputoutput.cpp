#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int r, c, i, j;
    int mat[15][4];
    cin>> r>> c;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>> mat[i][j];
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << mat[i][j];
            //<< endl;
            //printf()
        }
        printf("\n");
    }
}

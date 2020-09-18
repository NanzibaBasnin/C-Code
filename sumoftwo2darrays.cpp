#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int mat[15][15];
    int mat1[15][15], crr[15][15];
    int r;
    cin >> r;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            cin >> mat[i][j];
        }
    }
    //int h;
    //cin >> h;
    printf("take another array\n");
     for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            cin >> mat1[i][j];
        }
    }
    printf("adding...\n");
    //int crr[15][15];
    int c=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            crr[c++][c++]= mat[i][j] + mat1[i][j];        }
    }
     for(int i=0; i<c; i++)
    {
        for(int j=0; j<c; j++)
        {
           // cin >> mat1[i][j];
          cout << crr[i][j];
          //printf("%d", crr[i][i]);

        }
        printf("\n");
    }
}

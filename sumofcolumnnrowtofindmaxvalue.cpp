#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    //char s[1000];
    int a[50][50];
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    /*for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << a[i][j];
        }
    }*/
    int sum, sum1;
    int max1=0, max2=0;
     for(int i=0; i<n; i++)
    {    sum=0, sum1=0;
        for(int j=0; j<n; j++)
        {
            //cin >> a[i][j];
            sum= sum +a[i][j];
            //sum1=sum+a[j][i];
            if(max1>sum)
            {
                max1=sum;
            }
            //if()
            sum1=sum1+a[j][i];
            if(max2> sum1)
            {
                max2= sum1;
            }



        }
         printf("%d %d", max1, max2);

    }
    //printf("%d %d", max1, max2);

}


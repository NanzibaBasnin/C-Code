#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, i;
    int sum= 0;
    cin >> n;
    for(i=1; i<=n/2; i++)
    {
        if(n%i== 0)
        {
            sum=sum+ i;

        }
    }
    //cout<< sum;
    if(n==sum)
    {
           printf("%d is perfect number", n);
    }
    else
    {
        printf("%d is not perfect number", n);
    }
}

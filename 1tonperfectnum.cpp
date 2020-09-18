#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    int sum= 0;
    cin >> n;
    for(j=1; j<=n; j++){
    for(i=1; i<=j/2; i++)
    {
        if(j%i== 0)
        {
            sum=sum+ i;

        }
    }
    cout<< sum;
    if(j==sum)
    {
           printf("%d is perfect number",j );
    }

    }
}

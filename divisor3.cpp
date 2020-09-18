#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{

    int n, i;
    cin >> n;
    for(i=1; i<=n/2; i++)
    {
        if(n%i==0)
        {
            printf("%d\n", i);


        }
    }
    printf("%d\n", n);
}


#include<stdio.h>
#include<iostream>
using namespace std;
long long int func(int n)
{
    long long int f=1;
    for(int i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}


int main()
{
    int m, n;
    while(cin >> m>> n)
    {
        printf("%lld\n", func(m)+func(n));
    }
}

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, i;
    int fact=1;
    cin >> n;
    for(i=1; i<=n; ++i)
    {

             fact = fact*i;
    }
            printf("%d", fact);


}

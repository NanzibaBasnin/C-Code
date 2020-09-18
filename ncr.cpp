#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, r, a, ncr, i, j, k, fact=1, fact1=1, fact2=1;
    cin >> n >> r;
    a= n-r;
    for(i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    //cout << fact;
    for(j=1; j<=a; j++)
    {
        fact1= fact1*j;
    }
    //cout << fact1;
    for(k=1; k<=r; k++)
    {
        fact2= fact2*k;
    }
    //cout << fact2;
    ncr = fact/(fact1*fact2);
    cout << ncr << endl;
}

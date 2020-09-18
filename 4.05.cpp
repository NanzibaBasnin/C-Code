
/* 4.7 Write a program that read three numbers and display minimum(using operator) */
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a<b)
    {
        if(a<c)
        {
            printf("%d is min", a);
        }
        else
        {
            printf("%d is min", c);
        }
    }
    else
    {
        if(b<c)
        {
            printf("%d is min", b);
        }
        else
        {
            printf("%d is min ", c);
        }
    }
    return 0;

}

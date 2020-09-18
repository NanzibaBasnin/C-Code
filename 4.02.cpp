/* write a program that reads two numbers and displays max*/
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>> a >> b;
    if(a>b)
    {
        printf("%d is max", a);
    }
    else
    {
        printf("%d is max", b);
    }
    return 0;
}


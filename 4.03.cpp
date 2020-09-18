/*Write a program that read two numbers and display minimum */
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if(a<b)
    {
       printf("%d in min", a);
    }
    else
    {
        printf("%d is min", b);
    }
    return 0;
}


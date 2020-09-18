//Write a program that reads three numbers and display maximum (using operator)
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a>b)
    {
        if(a>c){
            printf("%d is max", a);
        }
        else
        {
            printf("%d is min", c);
        }
    }
    else
    {
        if(b>c){
            printf("%d is max", b);
        }
        else
        {
            printf("%d is max", c);
        }
    }
}


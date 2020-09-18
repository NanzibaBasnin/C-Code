#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,x;
    int cnt = 0;
    int y=0;
    cin >> n;
    while(n>0)
    {
        x= n%10;
        y= (y*10) + x;
        n=n/10;
    }
    printf("%d", y);
}

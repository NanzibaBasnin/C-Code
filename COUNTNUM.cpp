#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int cnt = 0;
    int n;
    cin >> n;
    while(n>0)
    {
        n=n/10;
        cnt++;
    }
    printf("%d", cnt);
}

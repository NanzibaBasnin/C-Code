
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, i;
    int f=0;
    cin >> n;
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            //printf("")
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("is not prime");
    }
    else
    {
        printf("is prime");
    }
}

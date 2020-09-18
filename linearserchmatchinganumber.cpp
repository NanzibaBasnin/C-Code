#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[1005]= {0};
    int n, k;
    while(cin >> n>> k)
    {


        for(int i=0; i<n; i++)
        {
            cin>> a[i];
        }
        int f=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==k)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            printf("Yes\n");

        }
        else
        {
            printf("no\n");


        }
    }
}

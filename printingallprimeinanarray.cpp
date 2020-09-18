#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, c=0, f;
    int arr[1000];
    cin >> n;
    for(int i=2; i<n; i++)
    {
        f=0;
        for(int j=2; j<i/2; j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            arr[c++] =i;
        }
    }
    for(int i=0; i<c; i++)
    {
        printf("%d\n", arr[i]);
    }

}

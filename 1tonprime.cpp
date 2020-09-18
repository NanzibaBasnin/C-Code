#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i, n,j, f;
    cin >> n;


    for(i=2; i<=n; i++)
    {
        f=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                f=1;
                break;

            }
        }


        if(f==0 && n!=0)
        {
            printf("%d is prime\n", i);

        }

    }
}

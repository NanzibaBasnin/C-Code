#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{

    int n, i;
    cin >> n;
    //int cnt=0
    int sum=0;
    for(i=1; i<=sqrt(n); i++)
    {if(n%i==0)
        {
            //printf("%d\n", i);
            sum = sum + i;


              if(i!=n/i)
              {
                  //printf("%d\n", n/i);
                  sum= sum + n/i;
              }


        }

    }
    cout << sum;
}

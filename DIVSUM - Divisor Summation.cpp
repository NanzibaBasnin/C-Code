#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    cin >> t;
    while(t--)
    {
        long long sum =0;
        cin >> n;
       // int s= sqrt(n);
        for( i=1; i*i<n; i++)
        {  if(n%i==0)
          {
              //if(i*i==n)

                //  sum = sum +i;

             // else

                  sum = sum + i + n/i;

                //sum = sum +i +n/i;
        }
        //printf("%d", sum);
        }


        printf("%lld\n", sum);
    }
    return 0;
}

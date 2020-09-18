#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
void sieve(int n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
long long pelindrom(long long int p)
{
     do
     {
         long long digit = p % 10;
        long long  rev = (rev * 10) + digit;
         long long p = p/ 10;
     } while (p!= 0);
     if(n== rev)
     {
         return 1;
     }
}

int main()
{
    long long n;
    while(cin >>n)
    {
       // printf("%lld", n+n);
       //long long int ans =n+n;
       //x= sqrt(n);
       //f=0;
      //seive(n);

      //f=1;
    long long int t= n;


          //pelindrom(n);
    while(t)
    {
      r = r*10;
      r = r + t%10;
      t = t/10;
    }

    // If reverse equals original then it is a palindrome

    if (r == n)
    {
      d = (int)sqrt(n);

      /* Checking prime */

      for (c = 2; c <= d; c++)
      {
        if (n%c == 0)
          break;
      }
      if (c == d+1)
        break;
    }
    r = 0;
  }



      }




    }
}

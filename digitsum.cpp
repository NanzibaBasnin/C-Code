#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   int n, y;
   cin >> n;
   int sum=0;
   while(n>0)
   { y= n%10;
      sum= sum + y;
      n=n/10;

   }
   printf("%d", sum);
}

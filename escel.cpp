#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    int arr[10], trr[10], frr[10];

   //vector<long long int> v1, v2, v3;
   cin >> t;
   while(t--)
   {
       for(int i=0; i<5; i++)
       {
           //long long int x;
           cin >> arr[i];
           //v1.push_back(x);
       }
      // int c=0, d=0;
       int f=0;
       for(int i =0; i<5; i++ )
       {
          // long long int j= v1[i]+ 1;
           //long long int k= v1[i+1];

           //v2.push_back(j);
           //v3.push_back(k);

          if( (arr[i]+1) == (arr[i+1]))
          {
              f=1;
          }
       }
       //for(int i=0; i<v2.size(); i++)
       //{
          // if(v2[i]== v3[i])
          //{
          //    f=1;
          //}

       //}

       if(f==1)
       {
           printf("Y\n");
       }
       if(f==0)
       {
           printf("N\n");
       }
   }
}
/*
Sample Input
5
1 2 3 4 5
2 3 4 5 6
1 4 4 4 5
1 3 4 5 6
1 2 2 3 6
Sample Output
Y
Y
N
N
N
*/

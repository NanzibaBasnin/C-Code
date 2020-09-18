#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
     long int tess,j;
    cin >> tess;


int o=0;
while(tess--)
    {   long int i, d, y, qy, m;
        //int o=0;
        o++;

        cin >> d >> m >> y >> qy;
        if(d==29 && m==2)
        {   y+=4;
            int cnt =0;
            for(i=y; i<=qy; i++)
        {


            if(i%4== 0 && i%100!=0 || i%400 == 0)
            {
                cnt ++;
            }

        }

       printf("Case %d: %d", o, cnt);
        }
        else
        {
            printf("Case %d: %ld", o, qy-y);
        }


    }






}


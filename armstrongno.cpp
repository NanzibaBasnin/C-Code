#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x, y, n, w=0, z, cnt=0;
    cin >> n;
    while(n>0)
    {
        n=n/10;
        cnt++;
    }
    cout << cnt<< ' ';
    while(n>0)
    {
        y=n%10;
        //z=pow(y,cnt);
        w=w+pow(y,cnt);
        n=n/10;
        //cout<<w;

    }
    cout<< w<<' ';

}


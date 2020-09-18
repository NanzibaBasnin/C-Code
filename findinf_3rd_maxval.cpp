
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[1005];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    //printf("maz\n");
    int mx=-1;
    int pos;
    for(int i=0; i<n; i++)
    {
        if(mx <a[i])
        {
            mx= a[i];
            pos=i;
        }
    }
    // cout<< pos<< mx;
    // printf("%d %d\n", mx, pos);
    a[pos]=-1;
    mx= -1;
    for(int i=0; i<n; i++)
    {
        if(mx <a[i])
        {
            mx= a[i];
            pos=i;
        }
    }

    a[pos]=-2;
    mx=-1;
    for(int i=0; i<n; i++)
    {
        if(mx <a[i])
        {
            mx= a[i];
            pos=i;
        }
    }
    printf("%d %d\n",mx, pos);

}

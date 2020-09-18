#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[50], b[50];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        //cin>>a[i]>> b{i};
        cin >> a[i] >> b[i];
    }

    //printf("Check\n");
    int temp, temp1;
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(a[j]> a[j+1])
            {
                temp=a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
                temp1 = b[j];
                b[j]= b[j+1];
                b[j+1] =temp1;

            }
        }
    }
    printf("process\n");
    for(int i=0; i<n; i++)
    {
        cout << a[i]<< b[i] <<endl;

    }
}

#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c=0;
    int cnt=0;
    int arr[1005]= {0};
    for(int i=1; i<sqrt(n); i++)
    {
        if(n%i==0)
        {
            arr[c++]= i;
            if(i!=n/i)
            {
                arr[c++]=n/i;
            }
            // cnt++;
        }
    }
    for(int i=c-1; i>=0; i--)
        {  int temp;
            for(int j=0; j<i; j++)
            {
                if(arr[j]> arr[j+1])
                {
                    temp = arr[j];
                    arr[j]= arr[j+1];
                    arr[j+1]= temp;
                    cnt++;

                }
            }
        }



    for(int i=0; i<c; i++)
    {
        cout<< arr[i]<<endl;
    }
}

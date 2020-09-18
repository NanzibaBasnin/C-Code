#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[105]= {0};
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    int c=0;
    int one;
    for(int i=0; i<n; i++)
    {
        if(arr[i]== 1)
        {
            //one=arr[i];
            c++;
        }
       // c++;
    }
    cout<< c;
}

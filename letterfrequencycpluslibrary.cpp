#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
using namespace std;
int arr[256];
int main()
{  int t;
    while(cin>> t)
    {


    string s;
    getline(cin, s);
    string s1;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<= 'z')
        {
            s1+=s[i];
        }
    }
    //cout << s1;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]= s1[i]+32;
        }
    }
    //cout <<s1;
    for(int i=0; i<s1.length(); i++)
    {
        arr[s1[i]]++;
    }
    int mx=0;
    for(int i=97; i<122; i++)
    {
        //printf(" %c %d\n", i, arr[i]);
        if(mx<arr[i])
        {
            mx=arr[i];
        }

    }
    for(int i= 97; i<122; i++)
    {
        if(arr[i]==mx)
        {
            printf("%c %d", i, arr[i]);
        }
        arr[i]=0;
    }

    }

}

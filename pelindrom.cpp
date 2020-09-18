#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    char s1[100];
    //gets(s);
    scanf("%s", s);
    int len= strlen(s);
    int c=0;
    for(int i=len-1; i>=0; i++)
    {
        s1[c]=s[i];
        c++;
    }
    s1[c]='\0';
    printf("%s", s1);
    int k=0;
    for(int i=0; i<=len-1; i++)
    {
        if(s[i]==s1[i])
        {
            k++;
        }
    }
    if(k==len)
    {
        printf("pelindrom");
    }
    else
    {
        printf("not pelindrome");
    }

}


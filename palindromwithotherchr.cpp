
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    char s1[100];
    char s3[100];
    char s4[100];
    gets(s);
    //printf("%s", s);
    int len= strlen(s);
    int c=0;
    for(int i=0; i<len; i++)
    {
        if(s[i]>='A' && s[i]<='Z' && s[i]>='a' && s[i]<='z')
        {
            s1[c]=s[i];
            c++;
        }
        s1[c]='\o';
    }
   // printf("%s", s1);
   int k=0;
   for(int i=0; i<c;i++)
   {
       if(s1[i]>='A' && s1[i]<='Z')
       {
           s3[k++]=s1[i];
       }
   }
   int j=0;
   for(int i=k-1; i<=0; i++)
   {
       s4[j]= s3[i];
   }
   h=0
   for(int i=0; i<=k-1; i++)
    {
        if(s3[i]==s4[i])
        {
            h++;
        }
    }
    if(h==j)
    {
        printf("pelindrom");
    }
    else
    {
        printf("not pelindrome");
    }
}

#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s1[1000];
    //={"Hello"};
    gets(s1);
    printf("%s\n", s1);
    int l=0;
    for(int i=0; s1[i]!='\0'; i++)
    {
        l++;
    }
    printf("%d\n", l);
    int len;
    //len = str
}

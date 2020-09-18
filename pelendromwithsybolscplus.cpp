#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string s1;
    for(int i=0; i<s.length(); i++)
    {  if(s[i]>='A'&& s[i]<='Z' || s[i]>='a' && s[i]<='z')
    {


        s1+= s[i];
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
      //cout << s1;
      string s2=s1;
      reverse(s2.begin(), s2.end());
      if(s1==s2)
      {
          cout << "pelendrom" << endl;
      }
}

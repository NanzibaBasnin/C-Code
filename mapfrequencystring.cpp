#include <bits/stdc++.h>
using namespace std;
int main()
{

   map <char, int> mp;

   string s = "abcdaabbc";

   for(int i = 0; i < s.size(); i++)
   {
       mp[s[i]]++;
   }

   map<char, int> :: iterator it;

   for(it = mp.begin(); it != mp.end(); it++)
   {
       cout<<it->first << " " << it->second << endl;
   }

}
  +**-

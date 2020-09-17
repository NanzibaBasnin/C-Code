#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;

    while(ss>>temp)
    {
        mp[temp.size()]++;
    }
    map<int, int>:: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first << " " << it->second << endl;
    }
}

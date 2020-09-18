#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    int n;
    int x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin>> x;
        if(mp.count(x)==0)
        {
            mp[x]=1;
        }
        else
        {
            mp[x]= mp[x] + 1;
        }

    }
   map<int, int> :: iterator it;
   int max = 0;
    for(it=mp.begin(); it!=mp.end();it++)
    {
        //cout << it->first<<" "<< it->second<<endl;
        if(it->second>max)
        {
            max= it-> second;
        }
        //cout << mp[x] << endl;

    }
    cout << max << endl;
}

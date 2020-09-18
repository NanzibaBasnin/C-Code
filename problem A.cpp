#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int o=0;
    cin >> t;
    while(t--)
    {
        o++;
        int n;
        vector<int> v;
        cin >> n;
        int x;
        for(int i=0; i<n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        int cnt;
        //int cnt=0;
        for(int i=0; i<n-1;i++)
        {  cnt=0;
           if( v[i]+1== v[i+1])
           {
               cnt=1;
           }
        }
        if(cnt==1)
        {
            printf("Case %d: Yes\n", o);
        }
        else
        {
            printf("Case %d: No\n", o);
        }
    }
}

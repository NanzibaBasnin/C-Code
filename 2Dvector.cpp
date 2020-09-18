
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n, x, d;
    cin >> n;
    cin >>d;
    for(int i= 0; i<n; i++ )
    {
        cin >> x;
        v.push_back(x);
    }
    vector<int>vi[100];
    for(int i=0; i<n; i++)
    {
        int y= (v[i])%d;
        vi[y].push_back(v[i]);

    }
    for(int i= 0; i<d; i++)
    {
        cout<<i <<"=";
        for(int j= 0; j<vi[i].size(); j++)
        {
            cout<<vi[i][j]<<" ";
        }
        cout << endl;
    }



}

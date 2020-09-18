#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> node[100000];
    for(int i=0; i<6; i++)
    {
        int a, b;
        cin >> a >> b;
        node[a].push_back(b);
        node[b].push_back(a);
    }
    for(int i=1; i<=6; i++)
    {
        for(int j=0; j<node[i].size(); j++)
        {
            cout << node[i][j]<<" ";
            cout <<endl;
        }
    }
}

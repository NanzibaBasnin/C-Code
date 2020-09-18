#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <pair <int, int> > node[100];
    cin >> e;
    for(int i=0; i< e; i++)
    {
        int a, b, cost;
        cin >> a >> b >> cost;
        node[a].push_back(make_pair(a, b, cost));
        node[b].push_back(make_pair(b, a, cost));
    }
}

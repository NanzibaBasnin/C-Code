#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <pair <int, int> > v;
    v.push_back(make_pair(1,1));
    v.push_back(make_pair(2,3));
    for(int i=0; i<v.size(); i++)
    {
        cout<< v[i].first <<" ";
        cout << v[i].second<<" ";
    }
}

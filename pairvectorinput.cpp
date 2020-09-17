#include<bits/stdc++.h>
using namespace std;
int main()
{  vector <pair<int,int> > v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin >>a >>b;
        v.push_back(make_pair(a,b));

    }

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i].first <<" ";
        cout <<v[i].second << endl;
    }

}


#include<bits/stdc++.h>
using namespace std;
vector <int> node[101];
int dest[101];
int main()
{
    int a,b;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        node[a].push_back(b);
        node[b].push_back(a);
    }

    for(int i=0; i<n; i++)
    {

       // printf("%d\n", node[i]);
       cout << node[i];
    }

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat[100][100];
    int n, e;
    int cost;
    cin >> e; // e is the number of edges
    cin >> n; // n is the number of nodes
    for(int i=0; i<e; i++)
    {
        int a, b;
        cin >> a >> b >> cost;
        mat[a][b]= cost;
        mat[b][a]=cost;//for undirected graph

    }
    for(int i=1; i<=n; i++)
    {
        for(int j= 1; j<=n; j++ )
        {
            cout << mat[i][j];
        }
    }
}

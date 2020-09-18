#include<bits/stdc++.h>
using namespace std;
int cnt;
 int visited[10000]={0};
 vector<int>node[10000];
 //int mx=0;
void dfs(int u)
{
    visited[u]=1;
    cnt++;
    for(int i=0; i<node[u].size(); i++)
    {
        int v= node[u][i];
        if(visited[v]== 0)
        {
            dfs(v);
        }
    }

}
int main()1 l
{
    //vector<int>node[10000];
    int n, e;
     //int visited[10000]={0};
    cin>> n;
    cin>> e;


    for(int i=0; i<e; i++)
    {
        int x, y;
        cin >> x >> y;
        node[x].push_back(y);
        node[y].push_back(x);
    }
    for(int i=1; i<=n; i++)
    {
        cout<<i<<" ";
        for(int j=0; j<node[i].size(); j++)
        {
            cout<<node[i][j]<<" ";
        }
        cout<<endl;
    }
    int mx=0;
    for(int i=1; i<=n; i++)
    {
        if(visited[i]== 0)
        {
            cnt=0;
            dfs(i);
            if(mx<cnt)
            {
                mx=cnt;
            }
        }
    }
    cout << cnt;
    for(int i=1; i<=n; i++)
    {
        node[i].clear();
    }

}
/*void dfs(int u)
{
    visited[u]=1;
    cnt++;
    for(i=0; i<node[u].size(); i++)
    {
        int v= node[u][i];
        if(visited[v]== 0)
        {
            dfs(v);
        }
    }

}*/

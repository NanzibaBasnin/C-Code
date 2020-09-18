
#include<bits/stdc++.h>
using namespace std;
vector <int> node[101];
int dest[101];
int src;

void bfs(int src)
{
    dest[src]=0;
    queue<int> q;
    q.push(src);
    while(!q.empty())
    {
        int u= q.front();
        q.pop();
        for(int i=0; i<node[u].size(); i++)
        {
            int v= node[u][i];
            if(dest[v]==-1)
            {

                dest[v]=dest[u]+1;
                q.push(v);
            }
        }

    }
}

int main()
{
    int a,b;
    int n,e;
    cin >> n>>e;
    memset(dest,-1,sizeof dest);
    for(int i=0; i<e; i++)
    {
        cin >> a >> b;
        node[a].push_back(b);
        node[b].push_back(a);
    }
    for(int i = 1; i <= n; i++)
    {
        printf("Node %d: = ",i);

        for(int j = 0; j < node[i].size(); j++)
        {
             printf("%d ",node[i][j]);
        }
        printf("\n");
    }
    cout <<"ok!"<< endl;
    src=1;
    bfs(src);
    for(int i=1; i<=n; i++)
    {
        cout << dest[i] << endl;
    }

}

#include <bits/stdc++.h>
using namespace std;
vector<int>graph[5];
bool visited[5];

void dfs(int source)
{
    visited[source]=1;
    for(int i=0; i<graph[source].size(); i++)
    {
        int next=graph[source][i];
        if(visited[next]==0)
        {
            dfs(next);
        }
    }
}

int main()
{
    int node,edge;
    cin>>node>>edge;
    for(int i=0; i<edge; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);

    }
    dfs(0);
    for(int i=0; i<node; i++)
    {
        if(visited[i]==1)
        {
            cout<<"node "<<i<<" is visited"<<endl;
        }
        else
        {
            cout<<"node "<<i<<" is not visited"<<endl;
        }
    }
}


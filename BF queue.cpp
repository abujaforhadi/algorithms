#include<bits/stdc++.h>
#include <queue>

using namespace std;
char vertices[4] = {'A', 'B', 'C', 'D'};
int  visited[4] = {0};
int a[4][4] = {
    {0, 1, 1, 0},
    {1, 0, 0, 1},
    {1, 0, 0, 0},
    {0, 1, 0,0},
};

class BFS
{
public:
    void solve(int root)
    {
        queue<int> Queue;


        visited[root] = 1;
        Queue.push(root);
        int c_verteex;;
            cin>>c_verteex;


        while(!Queue.empty())
        {


            Queue.pop();
            cout << vertices[c_verteex] << " ";

            int n_vertex;
            while((n_vertex =neighbor(c_verteex)) != -1)
            {

                visited[n_vertex] = 1;
                Queue.push(n_vertex);
            }
        }

    }

    int neighbor(int index)
    {
        for(int i=0; i<4; i++)
        {
            if(a[index][i] == 1 && (visited[i] == 0))
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    BFS bfs;
    bfs.solve(0);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define pb push_back

const int N = 1e5 + 7;
vector<int> adj[N];
vector<int> vis(N, 0);
vector<int> cost(N, 0);
vector<int> par(N);

void BFS(int s)
{
    vis[s] = 1;
    cost[s] = 0;
    par[s] = s;

    queue<int> q;
    q.push(s);
    cout << "traversal order : " << endl;

    while (!q.empty())
    {
        int u = q.front();
        cout << u << " ";
        q.pop();

        for (int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];

            if (vis[v] == 0)
            {
                vis[v] = 1;
                cost[v] = cost[u] + 1;
                par[v] = u;
                q.push(v);
            }
        }
    }
}

void path_printing(int d)
{
    int now = d;
    vector<int>path;

    path.pb(now);
    while(par[now] != now)
    {
        now = par[now];
        path.pb(now);
    }

    reverse(path.begin(), path.end());
    cout << "path : ";
    for (int i = 0; i < path.size(); i++)
    {
        if(i == path.size() - 1)
        {
            cout << path[i];
            break;
        }
        cout << path[i] << "-->";
    }
    cout << endl;
    return;
}
int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    int u, v;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    int start, dest;
    cin >> start >> dest;
    BFS(start);
    cout << endl;
    cout << "cost is : ";
    cout << cost[dest] << endl;

    path_printing(dest);
}
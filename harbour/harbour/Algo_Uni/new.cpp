#include <bits/stdc++.h>
#define pb push_back
const int N = 1e5 + 7;
using namespace std;

vector<int> adj[N];

void bfs(int s, int m)
{
    vector<int> vis(N, 0);
    vector<int> cost(N);
    vector<int> par(N);
    vector<int> ans(N, -1);
    par[s] = s;
    cost[s] = 0;
    vis[s] = 1;

    queue<int> q;
    q.push(s);

    while (!q.empty())
    {
        int u = q.front();
        ans[u] = cost[u];
        q.pop();

        for (int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];

            if (vis[v] == 0)
            {
                vis[v] = 1;
                cost[v] = cost[u] + 6;
                par[v] = u;
                q.push(v);
            }
        }
    }
    for (int i = 1; i <= m; i++)
    {
        if (i == s)
        {
            continue;
        }
        cout << ans[i] << " ";
    }
    cout << endl;
}

void solve()
{
    int m, n;
    cin >> m >> n;
    int u, v;

    for (int i = 1; i <= m; ++i)
    {
        adj[i].clear();
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int s;
    cin >> s;
    bfs(s, m);
}

int main()
{
    int q;
    cin >> q;

    while (q--)
        solve();
}
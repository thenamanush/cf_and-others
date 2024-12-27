#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;

vector<int> adj[N];
vector<int> dist(N, -1);
vector<int> parent(N, -1);
vector<int> vis(N, 0);

void bfs(int s) {
    queue<int> q;
    dist[s] = 0;
    vis[s] = 1;
    q.push(s);
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : adj[u]) {
            if (vis[v] == 0) {
                vis[v] = 1;
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

void Path(int s, int d) {
    vector<int> path;
    for (int v = d; v != -1; v = parent[v]) {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());
    for (int v : path) {
        cout << v << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int u, v;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int s, d;
    cin >> s >> d;

    bfs(s);

    if (dist[d] == -1) {
        cout << -1 << "\n";
    } else {
        cout << dist[d] << "\n";
        Path(s, d);
    }

    return 0;
}

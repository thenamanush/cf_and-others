#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
const int N = 1e5 + 9;
bool vis[N];
vector<int> g[N];

void dfs(int u) {
    vis[u] = true;
    for(auto v: g[u]) {
        if(!vis[v]) {
            dfs(v);
        }
    }
}

int32_t main() {
    justice_for_hadi
    
    int n, m; cin >> n >> m;
    while(m--) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);

    for(int i = 1; i <= n; ++i) {
        if(!vis[i]) {
            cout << "disconnected graph" << endl;
            break;
        }
    }
}
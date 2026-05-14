#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
const int N = 1e5 + 9;
bool a[N];
int cons_cat[N];
vector<int> g[N];
int ans = 0, m;

void dfs(int u, int p) {
    if(a[u]) cons_cat[u] = cons_cat[p] + 1;
    else cons_cat[u] = 0;

    if(cons_cat[u] > m) return;

    bool lf = true;
    for(auto v : g[u]) {
        if(v != p) {
            lf = false;
            dfs(v, u);
        }
    }
    if(lf) ans++;
}

int32_t main() {
    justice_for_hadi
    
    int n; cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; ++i) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    cout << ans << endl;
}
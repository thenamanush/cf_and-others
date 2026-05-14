#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
const int N = 1e5 + 9;
bool a[N], vis[N];
vector<int> g[N];

int32_t main() {
    justice_for_hadi
    
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; ++i) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    queue<pair<int, int>> q;
    q.push({1, a[1]});
    vis[1] = true;

    int ans = 0;
    while(!q.empty()) {
        auto [u, cnt] = q.front();
        q.pop();

        bool lf = true;
        for(auto v : g[u]) {
            if(!vis[v]) {
                vis[v] = true;
                lf = false;

                int chk = 0;
                if(a[v]) chk = cnt + 1;
                if(chk <= m) {
                q.push({v, chk});
                }
            }
        }
        if(lf) ans++;
    }
    cout << ans << endl;
}
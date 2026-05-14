#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, m; cin >> n >> m;

    multiset<int> sw;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        sw.insert(x);
    }
    vector<pair<int, int>> p(m);
    for(int i = 0; i < m; ++i) {
        cin >> p[i].first;
    }
    for(int i = 0; i < m; ++i) {
        cin >> p[i].second;
    }

    sort(p.begin(), p.end());

    int ans = 0;

    for(int i = 0; i < m; ++i) {
        if(p[i].second == 0) continue; 
        auto it = sw.lower_bound(p[i].first);
        if(it == sw.end()) break;
        int x = *it;
        sw.erase(it);
        sw.insert(max(p[i].second, x));
        ans++;
    }
    for(int i = 0; i < m; ++i) {
        if(p[i].second) continue; 
        auto it = sw.lower_bound(p[i].first);
        if(it == sw.end()) break;
        int x = *it;
        sw.erase(it);
        ans++;
    }
    cout << ans << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();

    return 0;
}
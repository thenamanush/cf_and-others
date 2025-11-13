#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<ll> cnt(m, 0);
    ll t = 0;
    vector<vector<ll>> v(n);

    for (int i = 0; i < n; i++) {
        ll l;
        cin >> l;
        v[i].resize(l);
        for (int j = 0; j < l; j++) {
            cin >> v[i][j];
            v[i][j]--; // make 0-indexed
            if (cnt[v[i][j]] == 0) t++; // new unique number
            cnt[v[i][j]]++;
        }
    }

    ll ans = (t == m);

    for (int i = 0; i < n; i++) {
        // remove group i's elements
        for (auto x : v[i]) {
            cnt[x]--;
            if (cnt[x] == 0) t--;
        }

        // check coverage
        if (t == m) ans++;

        // restore group i's elements
        for (auto x : v[i]) {
            if (cnt[x] == 0) t++;
            cnt[x]++;
        }
    }

    if (ans >= 3) yes;
    else no;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

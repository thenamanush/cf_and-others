#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

bool check(int x, int y, int k) {
    return ((y + 1) * x + y) <= k;
}

void solve() {
    int n, k; cin >> n >> k;
    vector<int> q(n), r(n);
    
    for(int i = 0; i < n ; ++i) cin >> q[i];
    for(int i = 0; i < n ; ++i) cin >> r[i];

    sort(q.rbegin(), q.rend());
    sort(r.begin(), r.end());

    int ans = 0, it = 0;
    for(int i = 0; i < n; ++i) {
        if(check(q[i], r[it], k)) {
            ans++;
            it++;
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();

    return 0;
}
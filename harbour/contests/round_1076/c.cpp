#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n, q; 
    cin >> n >> q;

    vector<int> a(n + 1), b(n + 1);

    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i) cin >> b[i];

    for(int i = n; i >= 1; --i) {
        a[i] = max(a[i], b[i]);
        if(i < n) a[i] = max(a[i], a[i + 1]);
    }

    vector<int> pfs(n + 1, 0);
    pfs[1] = a[1];

    for(int i = 2; i <= n; ++i) {
        pfs[i] = pfs[i - 1] + a[i];
    }

    while(q--) {
        int l, r; cin >> l >> r;
        cout << pfs[r] - pfs[l - 1] << ' ';
    }
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--) solve();

    return 0;
}
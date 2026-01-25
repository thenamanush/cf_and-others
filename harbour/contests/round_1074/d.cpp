#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n, m, h; cin >> n >> m >> h;
    vector<int> a(n + 1);
    vector<int> c(n + 1);

    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        c[i] = h - a[i];
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}
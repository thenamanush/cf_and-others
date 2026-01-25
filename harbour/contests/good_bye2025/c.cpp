#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto & x : a) cin >> x;

    vector<int> pf(n + 1), sf(n);
    for(int i = 1; i < n; i++) pf[i + 1] = pf[i] + abs(a[i]);
    for(int i = n - 1; i >= 1; i--) sf[i - 1] = sf[i] - a[i];
 
    int ans = sf[0];
    for(int i = 1; i < n; i++) ans = max(ans, a[0] + pf[i] + sf[i]);
    cout << ans << '\n';

    // for(int i = 0; i < n; ++i) cout << pf[i] << ' ' << sf[i] << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}
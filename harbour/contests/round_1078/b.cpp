#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, x, y; cin >> n >> x >> y;
    vector<int> a(n);

    int ans = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        ans += (y * (a[i] / x));
        a[i] = a[i] % x;
        cout << ans << ' ' << a[i] << endl;
    }

    for(int i = 0; i < n; ++i) {
        int need = x - a[i];
        int profit = y - need;
        if(profit > 0) {
            ans += (y - need);
            cout << ans << endl;
        }
    }
    cout << ans << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}
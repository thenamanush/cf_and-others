#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll n, k; cin >> n >> k;
    if (k & 1) {
        for (ll i = 0; i < k; ++i) cout << n << ' ';
        cout << endl;
        return;
    }
    else {
        for(int i = 0; i + 2 < k; ++i) cout << n << ' ';
    }
    if ( (n & (n - 1)) == 0) {
        cout << n << ' ' << 0 << endl;
        return;
    }
    int x = n - 1, y = x ^ n;
    cout << x << ' ' << y << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
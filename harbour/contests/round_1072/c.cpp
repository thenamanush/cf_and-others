// this feels like a dp problem

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    if(n == k) {
        cout << 0 << endl;
        return;
    }

    int mn = (k << 1) - 1;
    int mx = (k << 1) + 1;

    // if (n >= mn && n <= mx) {
    //     cout << 1 << endl;
    //     return;
    // }

    int ans = 1;

    while (n > mx) {
        mn = (mn << 1) - 1;
        mx = (mx << 1) + 1;
        ans++;
    }

    if (n >= mn && n <= mx) cout << ans << endl;
    else cout << -1 << endl;
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, l, r;
    cin >> n >> l >> r;

    int b[n + 1];
    for(int i = 0; i <= n; ++i) {
        b[i] = i;
        if(i == r) b[i] = l - 1;
    }

    int ans[n + 1];
    for(int i = 1; i <= n; ++i) {
        ans[i] = b[i] ^ b[i - 1];
    }

    for(int i = 1; i <= n; ++i) cout << ans[i] << ' ';
    cout << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}
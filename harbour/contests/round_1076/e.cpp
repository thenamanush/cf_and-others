#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

const int inf = 1e9;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> dp(n + 1, inf);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dp[a[i]] = 1;
    }

    for(int i = 1; i <= n; ++i) {
        int x = i;
        if(dp[x] != 1) {
            for(int j = 2; j * j <= x; ++j) {
                if(x % j == 0) {
                    dp[x] = min(dp[x], (dp[j] + dp[x / j]));
                }
            }
        }
    }

    for(int i = 1; i <= n; ++i) {
        if(dp[i] == inf) cout << -1 << ' ';
        else cout << dp[i] << ' ';
    }
    cout << endl;
}


int32_t main() {
    justice_for_hadi

    int t;
    cin >> t;
    while (t--) solve();
}
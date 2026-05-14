#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<long double> c(n), p(n);
    for(int i = 0; i < n; ++i) cin >> c[i] >> p[i];

    vector<long double> dp(n + 1, 0);

    for(int i = n - 1; i >= 0; --i) {
        long double k = 1.0 - p[i] / 100.0;
        dp[i] = max(dp[i + 1], c[i] + k * dp[i + 1]);
    }

cout << fixed << setprecision(10) << dp[0] << "\n";
   
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
}
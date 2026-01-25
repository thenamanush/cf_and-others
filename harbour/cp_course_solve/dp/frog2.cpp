#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
const int N = 1e5 + 7;
int a[N], dp[N];

int f(int n, int k) {
    if(n == 1) return 0;

    if(dp[n] != -1) return dp[n];

    int ans = 1e9;
    for(int i = 1; i <= k; ++i) {
        if(n - i > 0) {
            ans = min(ans, abs(a[n] - a[n - i]) + f(n - i, k));
        }
    }
    return dp[n] = ans;
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t = 1;
    // cin >> t; while(t--) solve();
    
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    memset(dp, -1, sizeof dp);

    cout << f(n, k) << endl;
}